// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNKSYSTEMBANNERHOSTVIEWCONTROLLER_H
#define CNKSYSTEMBANNERHOSTVIEWCONTROLLER_H

@class UIViewController, NSString, BSAnimationSettings, UIColor, UIView<SBUISystemApertureAccessoryView>, UIViewController<SBUISystemApertureElement>;
@protocol SBUISystemApertureElement, SBUISystemApertureElementProviding, BNPresentable, BNPresentableContext;



@interface CNKSystemBannerHostViewController : UIViewController <SBUISystemApertureElement, SBUISystemApertureElementProviding, BNPresentable>

 {
    ? delegate;
    ? controlsManager;
    ? bannerIdentifier;
    ? sizeClass;
    ? controlsType;
    ? notice;
    ? captureGroupName;
    ? $__lazy_storage_$_captureOnlyBackdropView;
    ? shadowView;
    ? overriddenSystemApertureContent;
    ? isTransitioningToEphemeralSystemApertureContent;
    ? $__lazy_storage_$_systemApertureAlertingManager;
    ? conversationControlsViewController;
    ? expandedForMenuPresentation;
    ? requesterIdentifier;
    ? layoutDescription;
    ? destination;
    ? panGestureProxy;
    ? dismissalPreventionAssertion;
    ? gesturePriorityAssertion;
    ? isPresentationManagedBySpringBoard;
    ? defaults;
    ? features;
    ? leadingViewContainer;
    ? trailingViewContainer;
    ? minimalViewContainer;
    ? elementIdentifier;
}


@property (nonatomic) NSInteger activeLayoutMode; // ivar: activeLayoutMode
@property (nonatomic, readonly) NSString *associatedScenePersistenceIdentifier;
@property (nonatomic, readonly) UIEdgeInsets bannerContentOutsets;
@property (nonatomic, readonly) BSAnimationSettings *bannerSizeTransitionAnimationSettings;
@property (nonatomic) BOOL canRequestAlertingAssertion; // ivar: canRequestAlertingAssertion
@property (nonatomic, readonly) NSInteger contentRole; // ivar: contentRole
@property (nonatomic, readonly) BOOL draggingDismissalEnabled;
@property (nonatomic, readonly) BOOL draggingInteractionEnabled;
@property (nonatomic, readonly) NSString *elementIdentifier;
@property (nonatomic, readonly) UIColor *keyColor; // ivar: keyColor
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property (nonatomic, readonly) NSInteger maximumLayoutMode;
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property (nonatomic, readonly) NSInteger preferredLayoutMode;
@property (nonatomic, weak) NSObject<BNPresentableContext> *presentableContext; // ivar: presentableContext
@property (nonatomic, readonly) NSUInteger presentationBehaviors;
@property (nonatomic, readonly) NSString *requestIdentifier;
@property (nonatomic, copy) NSString *requesterIdentifier;
@property (nonatomic, readonly) NSUInteger statusBarStyleOverridesToSuppress;
@property (nonatomic, readonly) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property (nonatomic, readonly) BOOL touchOutsideDismissalEnabled;
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property (nonatomic, readonly) UIViewController *viewController;


-(BOOL)_canShowWhileLocked;
-(BOOL)isDraggingDismissalEnabled;
-(BOOL)isDraggingInteractionEnabled;
-(BOOL)isTouchOutsideDismissalEnabled;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )preferredContentSizeWithPresentationSize:(struct CGSize )arg0 containerSize:(struct CGSize )arg1 ;
-(void)contextMenuDidDismiss:(id)arg0 ;
-(void)contextMenuWillPresent:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg0 ;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillLayoutSubviewsWithTransitionCoordinator:(id)arg0 ;


@end


#endif