// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUIVIEWCONTROLLERTRANSITIONMANAGER_H
#define PXUIVIEWCONTROLLERTRANSITIONMANAGER_H

@class NSMapTable, NSMutableSet, NSString;
@protocol UIGestureRecognizerDelegate, PXVerticalSwipeGestureRecognizerHelperDelegate, UINavigationControllerDelegate;

#import <Foundation/Foundation.h>

#import "PXVerticalSwipeGestureRecognizerHelper.h"

@interface PXUIViewControllerTransitionManager : NSObject <UIGestureRecognizerDelegate, PXVerticalSwipeGestureRecognizerHelperDelegate, UINavigationControllerDelegate>



@property (readonly, nonatomic) NSMapTable *_lastViewControllerTransitions; // ivar: __lastViewControllerTransitions
@property (readonly, nonatomic) NSMapTable *_pinchGestureRecognizers; // ivar: __pinchGestureRecognizers
@property (readonly, nonatomic) NSMutableSet *_pinchTransitions; // ivar: __pinchTransitions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMapTable *panGestureRecognizers; // ivar: _panGestureRecognizers
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXVerticalSwipeGestureRecognizerHelper *swipeDownGestureRecognizerHelper; // ivar: _swipeDownGestureRecognizerHelper
@property (readonly, nonatomic) NSMutableSet *swipeDownTransitions; // ivar: _swipeDownTransitions


+(id)sharedManager;
-(BOOL)_getMasterViewController:(*id)arg0 detailViewController:(*id)arg1 forPopAtLocationOfGestureRecognizer:(id)arg2 ;
-(BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)verticalSwipeGestureRecognizerHelper:(id)arg0 shouldRecognizeSwipeDownGestureRecognizer:(id)arg1 ;
-(id)_deepestDescendantOfViewController:(id)arg0 atLocationOfGestureRecognizer:(id)arg1 ;
-(id)_navigationControllerAtLocationOfGestureRecognizer:(id)arg0 ;
-(id)_panGestureRecognizerForViewController:(id)arg0 ;
-(id)_pinchGestureRecognizerForViewController:(id)arg0 ;
-(id)_pinchTransitionForGestureRecognizer:(id)arg0 ;
-(id)_swipeDownTransitionForGestureRecognizer:(id)arg0 ;
-(id)_windowForViewController:(id)arg0 ;
-(id)init;
-(id)lastTransitionForViewController:(id)arg0 ;
-(id)navigationController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(id)navigationController:(id)arg0 interactionControllerForAnimationController:(id)arg1 ;
-(id)navigationControllerShouldUseBuiltinInteractionController:(id)arg0 ;
-(void)_handlePanGestureRecognizer:(id)arg0 ;
-(void)_handlePinchGestureRecognizer:(id)arg0 ;
-(void)setLastTransition:(id)arg0 forViewController:(id)arg1 ;


@end


#endif