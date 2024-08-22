// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPASSTHROUGHSCROLLINTERACTION_H
#define _UIPASSTHROUGHSCROLLINTERACTION_H

@class NSString;
@protocol UIGestureRecognizerDelegateInternal, UIInteraction, _UIPassthroughScrollInteractionDelegate;

#import <Foundation/Foundation.h>

#import "_UIPassthroughGateGestureRecognizer.h"
#import "_UIPassthroughScrollGestureRecognizer.h"
#import "UIView.h"

@interface _UIPassthroughScrollInteraction : NSObject <UIGestureRecognizerDelegateInternal, UIInteraction>



@property (readonly, nonatomic) _UIPassthroughGateGestureRecognizer *_gestureGate; // ivar: _gestureGate
@property (readonly, nonatomic) _UIPassthroughScrollGestureRecognizer *_passthroughScrollGestureRecognizer; // ivar: _passthroughScrollGestureRecognizer
@property (readonly, nonatomic) UIView *_touchFallbackView; // ivar: _touchFallbackView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIPassthroughScrollInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL eatsTouches; // ivar: _eatsTouches
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL recognizeOnPrimaryButtonDown; // ivar: _recognizeOnPrimaryButtonDown
@property (nonatomic) BOOL recognizeOnSecondaryButtonDown; // ivar: _recognizeOnSecondaryButtonDown
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


+(BOOL)_isPassthroughGestureRecognizer:(id)arg0 ;
-(BOOL)_delegateShouldInteractAtLocation:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg0 shouldReceiveEvent:(id)arg1 ;
-(BOOL)_shouldEventBePassedThrough:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(id)init;
-(void)__forciblyEndWithReason:(NSUInteger)arg0 ;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_handlePassthroughGestureRecognizerEndWithReason:(NSUInteger)arg0 ;
-(void)_handlePassthroughRecognizer:(id)arg0 ;
-(void)_setUpForWindow:(id)arg0 ;
-(void)_tearDown;
-(void)_updateGesturesEatTouches;
-(void)dealloc;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif