// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIBANNERCLIENTCONTAINERVIEWCONTROLLER_H
#define SBUIBANNERCLIENTCONTAINERVIEWCONTROLLER_H

@class BNBannerClientContainerViewController, NSMapTable, NSString;
@protocol SBUISystemApertureElementContextObserver, SBUIPresentableHomeGestureContext, SBUIPresentableDismissalPreventionContext, SBUIPresentableGestureRecognizerPriorityContext, SBUIPresentableButtonEventsContext;


#import "_SBUIPresentableDismissalPreventionAssertion.h"
#import "_SBUIPresentableGestureRecognizerPriorityAssertion.h"

@interface SBUIBannerClientContainerViewController : BNBannerClientContainerViewController <SBUISystemApertureElementContextObserver, SBUIPresentableHomeGestureContext, SBUIPresentableDismissalPreventionContext, SBUIPresentableGestureRecognizerPriorityContext, SBUIPresentableButtonEventsContext>

 {
    _SBUIPresentableDismissalPreventionAssertion *_transitionDismissalPreventionAssertion;
    _SBUIPresentableGestureRecognizerPriorityAssertion *_gestureRecognizerPriorityAssertion;
    NSMapTable *_buttonEventsToActions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL ownsHomeGesture; // ivar: _ownsHomeGesture
@property (readonly) Class superclass;


-(BOOL)isAccessibilityIgnoringSmartInvertColors;
-(id)_buttonEventsActionForButtonEvent:(NSInteger)arg0 ;
-(id)_respondToActions:(id)arg0 forFBSScene:(id)arg1 inUIScene:(id)arg2 fromTransitionContext:(id)arg3 ;
-(id)_transitionCoordinator;
-(id)acquireAssertionForButtonEvent:(NSInteger)arg0 reason:(id)arg1 ;
-(id)acquireGestureRecognizerDefaultPriorityAssertionForReason:(id)arg0 ;
-(id)acquireTransitionDismissalPreventionAssertionForReason:(id)arg0 ;
-(id)initWithScene:(id)arg0 presentable:(id)arg1 context:(id)arg2 ;
-(void)_removeButtonEventsActionForButtonEvent:(NSInteger)arg0 ;
-(void)_setButtonEventAction:(id)arg0 forButtonEvent:(NSInteger)arg1 ;
-(void)setWantsHomeGesture:(BOOL)arg0 ;
-(void)systemApertureElementContextPresentationDidBecomePossible:(id)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif