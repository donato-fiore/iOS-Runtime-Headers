// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIVIEWANIMATIONSTATE_H
#define UIVIEWANIMATIONSTATE_H

@class NSString, NSDictionary, NSMutableArray, NSUUID, CAMediaTimingFunction, NSMapTable;
@protocol CAAnimationDelegate, _UIBasicAnimationFactory;

#import <Foundation/Foundation.h>

#import "UIViewAnimationState.h"
#import "UIView.h"
#import "UIViewPropertyAnimator.h"

@interface UIViewAnimationState : NSObject <CAAnimationDelegate>

 {
    UIViewAnimationState *_nextState;
    NSString *_animationID;
    *void _context;
    id *_delegate;
    CGFloat _duration;
    CGFloat _delay;
    CGFloat _frameInterval;
    CAFrameRateRange _preferredFrameRateRange;
    unsigned int _updateReason;
    CGFloat _start;
    NSInteger _curve;
    float _repeatCount;
    NSInteger _transition;
    UIView *_transitionView;
    NSDictionary *_transitionOptions;
    int _filter;
    UIView *_filterView;
    float _filterValue;
    SEL _willStartSelector;
    SEL _didEndSelector;
    int _didEndCount;
    BOOL _willStartSent;
    BOOL _useCurrentLayerState;
    BOOL _cacheTransition;
    BOOL _autoreverses;
    BOOL _layoutSubviews;
    BOOL _hasOuterAnimator;
    BOOL _hasOuterTrackingAnimator;
    BOOL _disallowCaptureWithinPropertyAnimator;
    BOOL _completionCallbacksDisabledOnPop;
    NSMutableArray *_trackedAnimations;
    NSUUID *_uuid;
    id<_UIBasicAnimationFactory> *_animationFactory;
    CAMediaTimingFunction *_customCurve;
    BOOL _animationFactoryMakesPerAnimationCustomCurves;
    BOOL _disallowAdditiveAnimations;
    id *_alongsideAnimations;
    NSMutableArray *_addedCompletions;
    BOOL _animationDidStopSent;
    BOOL _animationDidStopForced;
    BOOL _allowUserInteractionToCutOffEndOfAnimation;
    BOOL _allowsHitTesting;
    BOOL _belongsToTrackingAnimator;
    BOOL _disallowInheritance;
    NSInteger _finishedPosition;
    UIViewAnimationState *_retainedSelf;
    NSMutableArray *_viewsPendingConstraintBasedAnimation;
    NSMapTable *_viewToDeferredAnimationsMap;
    UIViewPropertyAnimator *_propertyAnimator;
}


@property (readonly, nonatomic) BOOL _allowsUserInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)originalAnimationForKeyPath:(id)arg0 inLayer:(id)arg1 ;
+(void)_addConstraintPendingAnimation:(id)arg0 container:(id)arg1 ;
+(void)_addSystemPostAnimationAction:(id)arg0 ;
+(void)_addViewForConstraintBasedAnimation:(id)arg0 ;
+(void)popAnimationState;
+(void)pushViewAnimationState:(id)arg0 context:(*void)arg1 ;
-(BOOL)_addCompletion:(id)arg0 ;
-(BOOL)_addCompletionWithPosition:(id)arg0 ;
-(BOOL)_allowsHitTesting;
-(BOOL)_hasDeferredAnimationForView:(id)arg0 key:(id)arg1 ;
-(BOOL)_isKeyframeAnimation;
-(BOOL)_isTrackingEnabled;
-(BOOL)_shouldAnimateAdditivelyForKey:(id)arg0 onLayer:(id)arg1 forView:(id)arg2 ;
-(BOOL)_shouldStartFromCurrentStateForLayer:(id)arg0 key:(id)arg1 forView:(id)arg2 ;
-(BOOL)shouldAnimatePropertyWithKey:(id)arg0 ;
-(CGFloat)_canonicalTrackedUnpacedFractionComplete;
-(CGFloat)_elapsedTimeForCanonicallyTrackedAnimation;
-(CGFloat)_unpacedFractionCompleteForAnimation:(id)arg0 inLayer:(id)arg1 duration:(CGFloat)arg2 ;
-(id)_canonicalTrackedLayerAnimationInLayer:(*id)arg0 ;
-(id)_createDeferredAnimationForKey:(id)arg0 ;
-(id)_defaultAnimationForKey:(id)arg0 ;
-(id)_deferredAnimationForView:(id)arg0 key:(id)arg1 ;
-(id)_outerPropertyAnimator:(BOOL)arg0 ;
-(id)_trackedAnimations;
-(id)_updateAnimationFrameWithAnimationProperties:(id)arg0 ;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 forView:(id)arg2 ;
-(id)animationForLayer:(id)arg0 forKey:(id)arg1 forView:(id)arg2 ;
-(id)init;
-(int)_didEndCount;
-(void)_acceptEarlyAnimationCutoff:(id)arg0 ;
-(void)_addAnimationStateForTracking:(id)arg0 ;
-(void)_animationDidStopWithNilAnimationFinished:(BOOL)arg0 ;
-(void)_decrementDidEndCount;
-(void)_finalizeDeferredAnimations;
-(void)_incrementDidEndCount;
-(void)_performWithCompletionCallbacksDisabledOnPop:(id)arg0 ;
-(void)_prepareForViewAnimationAfterPush;
-(void)_removeAnimationStateFromTrackingMap:(BOOL)arg0 ;
-(void)_removeAnimationStateFromTrackingMap:(BOOL)arg0 disableTrackingIfNeeded:(BOOL)arg1 ;
-(void)_removeLastCompletion;
-(void)_runAlongsideAnimations;
-(void)_runConstraintBasedLayoutAnimations;
-(void)_setAlongsideAnimations:(id)arg0 ;
-(void)_setCustomCurve:(id)arg0 ;
-(void)_setFinishedPosition:(NSInteger)arg0 ;
-(void)_trackAnimation:(id)arg0 nonAdditiveAnimation:(id)arg1 withAnimationKey:(id)arg2 forKeyPath:(id)arg3 inLayer:(id)arg4 ;
-(void)_trackAnimation:(id)arg0 withAnimationKey:(id)arg1 forKeyPath:(id)arg2 inLayer:(id)arg3 ;
-(void)_trackObject:(id)arg0 withAnimationPropertyName:(id)arg1 inLayer:(id)arg2 ;
-(void)_transferAnimationToTrackingAnimator:(id)arg0 ;
-(void)_transformIntoAdditiveAnimationAndNoteOriginal:(id)arg0 inLayer:(id)arg1 animationKey:(id)arg2 ;
-(void)_untrackAnimationsWithIdentifier:(id)arg0 keyPath:(id)arg1 inLayer:(id)arg2 removeFromLayer:(BOOL)arg3 ;
-(void)animationDidStart:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)configureAnimation:(id)arg0 forLayer:(id)arg1 forKey:(id)arg2 ;
-(void)pop;
-(void)pushWithViewAnimationID:(id)arg0 context:(*void)arg1 ;
-(void)sendDelegateAnimationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)sendDelegateDidStopManually:(BOOL)arg0 ;
-(void)setAnimationAttributes:(id)arg0 ;
-(void)setAnimationAttributes:(id)arg0 skipDelegateAssignment:(BOOL)arg1 ;
-(void)setAnimationAttributes:(id)arg0 skipDelegateAssignment:(BOOL)arg1 customCurve:(id)arg2 ;
-(void)setupCustomTimingCurve;
// -(void)setupWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 view:(id)arg2 options:(NSUInteger)arg3 factory:(id)arg4 parentState:(id)arg5 start:(id)arg6 completion:(unk)arg7  ;


@end


#endif