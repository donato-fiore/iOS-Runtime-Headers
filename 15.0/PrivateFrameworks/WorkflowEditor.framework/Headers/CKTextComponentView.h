// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTEXTCOMPONENTVIEW_H
#define CKTEXTCOMPONENTVIEW_H

@class UIControl;


#import "CKTextComponentViewControlTracker.h"
#import "CKTextKitRenderer.h"
#import "CKTextComponentLayer.h"

@interface CKTextComponentView : UIControl {
    CKTextComponentViewControlTracker *_controlTracker;
}


@property (readonly, nonatomic) CKTextComponentViewControlTracker *controlTracker;
@property (retain, nonatomic) CKTextKitRenderer *renderer;
@property (readonly, nonatomic) CKTextComponentLayer *textLayer;


+(Class)layerClass;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isAccessibilityElement;
-(id)accessibilityAttributedLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif