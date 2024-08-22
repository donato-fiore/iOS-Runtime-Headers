// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBARSWIPEAFFORDANCEVIEW_H
#define SBBARSWIPEAFFORDANCEVIEW_H

@class UIView, NSHashTable, SBFBarSwipeBehavior, NSString;
@protocol UIGestureRecognizerDelegate, SBHomeGrabberDelegate, SBSystemGestureRecognizerDelegate, SBHomeGestureInteractionDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBFBarSwipeBehaviorDelegate, SBBarSwipeAffordanceDelegate, SBHomeGrabberPointerClickDelegate;


#import "SBHomeGestureInteraction.h"
#import "SBSystemGestureManager.h"
#import "SBHomeGrabberView.h"
#import "SBKeyboardHomeAffordanceAssertion.h"

@interface SBBarSwipeAffordanceView : UIView <UIGestureRecognizerDelegate, SBHomeGrabberDelegate, SBSystemGestureRecognizerDelegate, SBHomeGestureInteractionDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBFBarSwipeBehaviorDelegate>

 {
    NSHashTable *_observers;
    SBFBarSwipeBehavior *_barSwipeBehavior;
    SBHomeGestureInteraction *_homeGestureInteraction;
    SBSystemGestureManager *_gestureManager;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) NSInteger colorBias;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBBarSwipeAffordanceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger feedbackType;
@property (readonly, nonatomic) SBHomeGrabberView *grabberView; // ivar: _grabberView
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHomeAffordanceHidden) BOOL homeAffordanceHidden; // ivar: _homeAffordanceHidden
@property (retain, nonatomic) SBKeyboardHomeAffordanceAssertion *keyboardHomeAffordanceAssertion; // ivar: _keyboardHomeAffordanceAssertion
@property (weak, nonatomic) NSObject<SBHomeGrabberPointerClickDelegate> *pointerClickDelegate;
@property (readonly) Class superclass;


-(BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg0 ;
-(BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg0 ;
-(CGFloat)additionalEdgeSpacingForHomeGrabberView:(id)arg0 ;
-(NSInteger)_effectiveOrientationAccountingForTransforms;
-(NSInteger)touchInterfaceOrientationForGestureRecognizer:(id)arg0 ;
-(NSUInteger)homeGestureInteraction:(id)arg0 systemGestureTypeForType:(NSInteger)arg1 ;
-(id)_hideHomeAffordanceAnimationSettings;
-(id)_unhideHomeAffordanceAnimationSettings;
-(id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 systemGestureManager:(id)arg1 enableGestures:(BOOL)arg2 ;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_activate;
-(void)_deactivate;
-(void)_runBlockOnObservers:(id)arg0 ;
-(void)_updateHomeAffordanceVisibility;
-(void)addObserver:(id)arg0 ;
-(void)barSwipeBehavior:(id)arg0 didUpdateAdditionalEdgeSpacing:(CGFloat)arg1 ;
-(void)barSwipeBehaviorActionPerformed:(id)arg0 ;
-(void)didAddSubview:(id)arg0 ;
-(void)homeGestureInteractionBegan:(id)arg0 ;
-(void)homeGestureInteractionCancelled:(id)arg0 ;
-(void)homeGestureInteractionChanged:(id)arg0 ;
-(void)homeGestureInteractionEnded:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeObserver:(id)arg0 ;


@end


#endif