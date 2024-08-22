// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPREVIEWINTERACTIONCOMPATIBILITYTOUCHFORCEPROVIDER_H
#define _UIPREVIEWINTERACTIONCOMPATIBILITYTOUCHFORCEPROVIDER_H

@class NSString;
@protocol UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding;

#import <Foundation/Foundation.h>

#import "_UITouchesObservingGestureRecognizer.h"
#import "UITouch.h"
#import "UIView.h"

@interface _UIPreviewInteractionCompatibilityTouchForceProvider : NSObject <UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding>

 {
    _UITouchesObservingGestureRecognizer *_gestureRecognizer;
    UITouch *_currentTouch;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat touchForce;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithView:(id)arg0 ;
-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(void)_handleTouchObservingGestureRecognizer:(id)arg0 ;
-(void)cancelInteraction;
-(void)dealloc;


@end


#endif