// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUISUBJECTTRACKINGVIEW_H
#define PXUISUBJECTTRACKINGVIEW_H

@class NSString, CALayer;
@protocol UIGestureRecognizerDelegate;


#import "PXSubjectTrackingView.h"

@interface PXUISubjectTrackingView : PXSubjectTrackingView <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CALayer *modulationFilterLayer; // ivar: _modulationFilterLayer
@property (readonly) Class superclass;


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithMediaView:(id)arg0 cineController:(id)arg1 ;
-(void)didAddSubview:(id)arg0 ;
-(void)layoutSubviews;
-(void)setUpModulationLayer;
-(void)viewDoubleTapped:(id)arg0 ;
-(void)viewLongPressed:(id)arg0 ;
-(void)viewTapped:(id)arg0 ;


@end


#endif