// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISWIPEHANDLER_H
#define _UISWIPEHANDLER_H

@class NSString;
@protocol UIGestureRecognizerDelegate, _UISwipeDismissalGestureRecognizerDelegate;

#import <Foundation/Foundation.h>

#import "_UISwipeDismissalGestureRecognizer.h"
#import "_UISwipeActionPanGestureRecognizer.h"
#import "UISwipeActionController.h"
#import "_UIStatesFeedbackGenerator.h"

@interface _UISwipeHandler : NSObject <UIGestureRecognizerDelegate, _UISwipeDismissalGestureRecognizerDelegate>

 {
    ? _flags;
    _UISwipeDismissalGestureRecognizer *_dismissalGestureRecognizer;
    _UISwipeActionPanGestureRecognizer *_swipeActionPanRecognizer;
    ? _currentSwipeConfig;
    BOOL _resetSwipeWhileInitiating;
    CGFloat _initialTranslation;
    CGFloat _confirmationTranslationAdjustment;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) ? currentSwipeConfig;
@property (readonly, nonatomic) NSUInteger currentSwipeState; // ivar: _currentSwipeState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInteracting) BOOL interacting;
@property (readonly) Class superclass;
@property (weak, nonatomic) UISwipeActionController *swipeController; // ivar: _swipeController
@property (retain, nonatomic) _UIStatesFeedbackGenerator *swipeFeedbackGenerator; // ivar: _swipeFeedbackGenerator


-(BOOL)_delegateWantsToDismissOnTouchDownForGestureRecognizer:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)gestureRecognizerShouldDismissForTouchDown:(id)arg0 ;
-(BOOL)gestureRecognizerShouldDismissForTouchUp:(id)arg0 ;
-(NSUInteger)_directionForGestureRecognizer:(id)arg0 ;
-(id)initWithSwipeController:(id)arg0 ;
-(struct ? )_currentSwipeInfoWithTargetOffset:(CGFloat)arg0 animated:(BOOL)arg1 usingSpringWithStiffness:(CGFloat)arg2 ;
-(void)_cancelExistingSwipe;
-(void)_cancelExistingSwipeForGestureBeganIfNecessary:(id)arg0 ;
-(void)_dismissalRecognizerDidRecognize:(id)arg0 ;
-(void)_moveSwipedItemToOffset:(CGFloat)arg0 animated:(BOOL)arg1 usingSpringWithStiffness:(CGFloat)arg2 isTracking:(BOOL)arg3 ;
-(void)_setUp;
-(void)_swipeRecognizerBegan:(id)arg0 ;
-(void)_swipeRecognizerChanged:(id)arg0 ;
-(void)_swipeRecognizerDidRecognize:(id)arg0 ;
-(void)_swipeRecognizerEnded:(id)arg0 wasCancelled:(BOOL)arg1 ;
-(void)initiateSwipeWithDirection:(NSUInteger)arg0 configuration:(id)arg1 location:(struct CGPoint )arg2 userInitiated:(BOOL)arg3 ;
-(void)resetSwipe;


@end


#endif