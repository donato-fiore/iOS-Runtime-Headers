// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUICONTENTMODULECONTAINERVIEWCONTROLLER_H
#define CCUICONTENTMODULECONTAINERVIEWCONTROLLER_H

@class UIViewController, UIViewController<CCUIContentModuleBackgroundViewController>, NSArray, _UIClickPresentationInteraction, UIView, UIViewController<CCUIContentModuleContentViewController>, NSString, UITapGestureRecognizer;
@protocol _UIClickPresentationInteractionDelegate, UIGestureRecognizerDelegate, CCUIContentModuleContainer, CCUISafeAppearancePropagationProvider, UIPointerInteractionDelegate, CCUIContentModule, CCUIContentModuleContainerViewControllerDelegate;


#import "CCUIContentModuleBackgroundView.h"
#import "CCUIContentModuleContentContainerView.h"
#import "CCUIContentModuleContainerPresentationController.h"

@interface CCUIContentModuleContainerViewController : UIViewController <_UIClickPresentationInteractionDelegate, UIGestureRecognizerDelegate, CCUIContentModuleContainer, CCUISafeAppearancePropagationProvider, UIPointerInteractionDelegate>



@property (retain, nonatomic) CCUIContentModuleBackgroundView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController; // ivar: _backgroundViewController
@property (readonly, nonatomic) NSArray *childViewControllersForAppearancePropagation;
@property (retain, nonatomic) _UIClickPresentationInteraction *clickPresentationInteraction; // ivar: _clickPresentationInteraction
@property (retain, nonatomic) CCUIContentModuleContentContainerView *contentContainerView; // ivar: _contentContainerView
@property (retain, nonatomic) NSObject<CCUIContentModule> *contentModule; // ivar: _contentModule
@property (nonatomic) BOOL contentModuleProvidesOwnPlatter; // ivar: _contentModuleProvidesOwnPlatter
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CCUIContentModuleContainerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITapGestureRecognizer *expandModuleOnTouchTapRecognizer; // ivar: _expandModuleOnTouchTapRecognizer
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (nonatomic) UIEdgeInsets expandedContentEdgeInsets; // ivar: _expandedContentEdgeInsets
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *highlightWrapperView; // ivar: _highlightWrapperView
@property (retain, nonatomic) UIView *maskView; // ivar: _maskView
@property (copy, nonatomic) NSString *materialGroupName; // ivar: _materialGroupName
@property (readonly, nonatomic) CCUIContentModuleContentContainerView *moduleContentView;
@property (copy, nonatomic) NSString *moduleIdentifier; // ivar: _moduleIdentifier
@property (retain, nonatomic) CCUIContentModuleContainerPresentationController *presentationController; // ivar: _presentationController
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // ivar: _tapRecognizer
@property (readonly, nonatomic) NSArray *topLevelBlockingGestureRecognizers; // ivar: _topLevelBlockingGestureRecognizers
@property (nonatomic, getter=isTransitioning) BOOL transitioning; // ivar: _transitioning


-(BOOL)_canShowWhileLocked;
-(BOOL)_isForceTouchAvailable;
-(BOOL)ccui_shouldPropagateAppearanceCalls;
-(BOOL)clickPresentationInteractionShouldBegin:(id)arg0 ;
-(BOOL)clickPresentationInteractionShouldPresent:(id)arg0 ;
-(BOOL)definesContentModuleContainer;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(CGFloat)_continuousCornerRadiusForCompactState;
-(CGFloat)_continuousCornerRadiusForExpandedState;
-(NSUInteger)activationStyleForClickPresentationInteraction:(id)arg0 ;
-(id)clickPresentationInteraction:(id)arg0 presentationForPresentingViewController:(id)arg1 ;
-(id)clickPresentationInteraction:(id)arg0 previewForHighlightingAtLocation:(struct CGPoint )arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModuleIdentifier:(id)arg0 contentModule:(id)arg1 presentationContext:(id)arg2 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )_backgroundFrameForExpandedState;
-(struct CGRect )_backgroundFrameForRestState;
-(struct CGRect )_containerFrameForExpandedState;
-(struct CGRect )_contentBoundsForExpandedState;
-(struct CGRect )_contentBoundsForTransitionProgress:(CGFloat)arg0 ;
-(struct CGRect )_contentFrameForExpandedState;
-(struct CGRect )_contentFrameForRestState;
-(struct CGRect )_presentationFrameForExpandedState;
-(void)_addTopLevelGestureRecognizersFromViewAndSubviews:(id)arg0 toBlockingGestureRecognizers:(id)arg1 ;
-(void)_closeExpandedModule:(BOOL)arg0 ;
-(void)_configureForContentModuleGroupRenderingIfNecessary;
-(void)_configureMaskViewIfNecessary;
-(void)_didEndTransitionWithContentModuleContainerTransition:(id)arg0 completed:(BOOL)arg1 ;
-(void)_findTopLevelGestureRecognizersForView:(id)arg0 installOnView:(id)arg1 ;
-(void)_handleExpandModuleForTapGestureRecognizer:(id)arg0 ;
-(void)_handleTapGestureRecognizer:(id)arg0 ;
-(void)_loadBackgroundViewController:(id)arg0 ;
-(void)_loadContentViewController:(id)arg0 ;
-(void)_setDidExpandModulePreference;
-(void)clickPresentationInteractionEnded:(id)arg0 wasCancelled:(BOOL)arg1 ;
-(void)dismissExpandedModuleAnimated:(BOOL)arg0 ;
-(void)dismissModulePresentedContentAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissPresentedContentAnimated:(BOOL)arg0 ;
-(void)dismissViewControllerWithTransition:(int)arg0 completion:(id)arg1 ;
-(void)displayWillTurnOff;
-(void)expandModule;
-(void)loadView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)transitionToExpandedMode:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willBecomeActive;
-(void)willDismissViewController:(id)arg0 ;
-(void)willPresentViewController:(id)arg0 ;
-(void)willResignActive;


@end


#endif