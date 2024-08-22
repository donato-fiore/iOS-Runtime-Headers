// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSCOVERSHEETVIEWCONTROLLERBASE_H
#define CSCOVERSHEETVIEWCONTROLLERBASE_H

@class UIViewController, FBDisplayLayoutElement, NSHashTable, NSString, NSSet, _UILegibilitySettings, NSArray;
@protocol CSCoverSheetViewPresenting, BSDescriptionProviding, UICoordinateSpace;


#import "CSAppearance.h"
#import "CSBehavior.h"
#import "CSPresentation.h"

@interface CSCoverSheetViewControllerBase : UIViewController <CSCoverSheetViewPresenting, BSDescriptionProviding>

 {
    CSAppearance *_appearance;
    CSBehavior *_behavior;
    CSPresentation *_presentation;
    FBDisplayLayoutElement *_displayLayoutElement;
    NSHashTable *_regionProviders;
    BOOL _forcingLayoutForPresentation;
}


@property (readonly, copy, nonatomic) CSAppearance *activeAppearance;
@property (readonly, copy, nonatomic) CSBehavior *activeBehavior;
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (readonly, copy, nonatomic) NSSet *components;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) CGFloat customIdleExpirationTimeout;
@property (readonly, nonatomic) CGFloat customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDisappeared) BOOL disappeared;
@property (readonly, copy, nonatomic) CSPresentation *externalPresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger idleTimerDuration;
@property (readonly, nonatomic) NSInteger idleTimerMode;
@property (readonly, nonatomic) NSInteger idleWarnMode;
@property (readonly, nonatomic) UIViewController *kitPresentedViewController;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly, nonatomic, getter=isPresentation) BOOL presentation; // ivar: _isBeingPresented
@property (readonly, nonatomic) NSInteger presentationAltitude;
@property (readonly, nonatomic) BOOL presentationCancelsTouches;
@property (readonly, weak, nonatomic) NSObject<UICoordinateSpace> *presentationCoordinateSpace;
@property (readonly, nonatomic) unsigned int presentationFrameRateRangeReason;
@property (readonly, nonatomic) CAFrameRateRange presentationPreferredFrameRateRange;
@property (readonly, nonatomic) NSInteger presentationPriority;
@property (readonly, copy, nonatomic) NSArray *presentationRegions;
@property (readonly, nonatomic) NSInteger presentationStyle;
@property (readonly, nonatomic) NSInteger presentationTransition;
@property (readonly, nonatomic) NSInteger presentationType;
@property (weak, nonatomic) NSObject<CSCoverSheetViewPresenting> *presenter; // ivar: _presenter
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (readonly) Class superclass;


+(Class)viewClass;
-(BOOL)_canShowWhileLocked;
-(BOOL)_presentationParticipant;
-(BOOL)_rebuildAppearance;
-(BOOL)_rebuildBehavior;
-(BOOL)_rebuildPresentation;
-(BOOL)handleAction:(id)arg0 fromController:(id)arg1 ;
-(BOOL)handleAppearanceUpdateFromController:(id)arg0 animationSettings:(*id)arg1 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(id)_regionsForView:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)displayLayoutElementIdentifier;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGSize )effectiveContentSizeForScrollView:(id)arg0 ;
-(void)_layoutIfNeededForPresentation;
-(void)_rebuildDisposition;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)aggregatePresentation:(id)arg0 ;
-(void)configureDisplayLayoutElement:(id)arg0 ;
-(void)conformsToCSAppearanceProviding;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSCoverSheetViewControlling;
-(void)conformsToCSCoverSheetViewPresenting;
-(void)conformsToCSEventHandling;
-(void)dealloc;
-(void)didTransitionToPresented:(BOOL)arg0 ;
-(void)dismiss;
-(void)handleAction:(id)arg0 fromSender:(id)arg1 ;
-(void)loadView;
-(void)performCustomTransitionToVisible:(BOOL)arg0 withAnimationSettings:(id)arg1 completion:(id)arg2 ;
-(void)rebuildAppearance;
-(void)rebuildBehavior;
-(void)rebuildEverythingForReason:(id)arg0 ;
-(void)registerView:(id)arg0 forRole:(NSInteger)arg1 ;
-(void)registerView:(id)arg0 forRole:(NSInteger)arg1 options:(NSUInteger)arg2 ;
-(void)sendAction:(id)arg0 ;
-(void)setDisplayLayoutElementActive:(BOOL)arg0 ;
-(void)setDisplayLayoutElementActive:(BOOL)arg0 immediately:(BOOL)arg1 ;
-(void)unregisterAllViews;
-(void)unregisterView:(id)arg0 ;
-(void)updateAppearance:(id)arg0 ;
// -(void)updateAppearance:(id)arg0 completion:(unk)arg1  ;
-(void)updateAppearanceForController:(id)arg0 ;
-(void)updateAppearanceForController:(id)arg0 withAnimationSettings:(id)arg1 completion:(id)arg2 ;
-(void)updateBehavior:(id)arg0 ;
-(void)updateBehaviorForController:(id)arg0 ;
-(void)updateForPresentation:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToPresented:(BOOL)arg0 ;


@end


#endif