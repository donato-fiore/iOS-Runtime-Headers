// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKUIHOSTEDJINDOPRESENTABLE_H
#define BKUIHOSTEDJINDOPRESENTABLE_H

@class UIViewController, NSString, NSLayoutConstraint, UIView, UIView<SBUISystemApertureAccessoryView>, UIColor, BSAction, NSURL, BNBannerSourceLayoutDescription, UIViewController<SBUISystemApertureElement>;
@protocol BNPresentableObserving, BNHostedContentProviding, BNPresentable, SBUISystemApertureElementProviding, SBUISystemApertureElement, BKJindoPresentableObserving, BNPresentableContext;


#import "BKUIPearlEnrollView.h"

@interface BKUIHostedJindoPresentable : UIViewController <BNPresentableObserving, BNHostedContentProviding, BNPresentable, SBUISystemApertureElementProviding, SBUISystemApertureElement>



@property (nonatomic) NSInteger activeLayoutMode; // ivar: _activeLayoutMode
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedScenePersistenceIdentifier;
@property (readonly, nonatomic) BOOL attachedMinimalViewRequiresZeroPadding;
@property (nonatomic) BOOL canRequestAlertingAssertion; // ivar: _canRequestAlertingAssertion
@property (retain, nonatomic) NSLayoutConstraint *centerYAnchor; // ivar: _centerYAnchor
@property (readonly, nonatomic) NSInteger contentRole;
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger destination; // ivar: _destination
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (retain, nonatomic) BKUIPearlEnrollView *enrollView; // ivar: _enrollView
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat height; // ivar: _height
@property (readonly, copy, nonatomic) UIColor *keyColor;
@property (readonly, nonatomic) BSAction *launchAction;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (retain, nonatomic) BNBannerSourceLayoutDescription *layoutDescription; // ivar: _layoutDescription
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView; // ivar: _leadingView
@property (readonly, nonatomic) NSInteger maximumLayoutMode;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property (nonatomic) NSUInteger minimalViewLayoutAxis;
@property (readonly, nonatomic) NSInteger minimumLayoutMode;
@property (weak, nonatomic) NSObject<BKJindoPresentableObserving> *observingDelegate; // ivar: _observingDelegate
@property (readonly, nonatomic) CGSize preferredCustomAspectRatio;
@property (nonatomic) NSInteger preferredCustomLayout; // ivar: _preferredCustomLayout
@property (readonly, nonatomic) CGFloat preferredHeightForBottomSafeArea;
@property (nonatomic) NSInteger preferredLayoutMode; // ivar: _preferredLayoutMode
@property (readonly, nonatomic) NSInteger presentableBehavior;
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext; // ivar: _presentableContext
@property (readonly, nonatomic) NSInteger presentableType;
@property (readonly, nonatomic) NSUInteger presentationBehaviors;
@property (readonly, nonatomic) BOOL preventsAutomaticDismissal;
@property (readonly, nonatomic) BOOL preventsInteractiveDismissal;
@property (readonly, nonatomic) BOOL providesHostedContent;
@property (readonly, copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (weak, nonatomic) UIViewController *rootViewController; // ivar: _rootViewController
@property (readonly, nonatomic) NSUInteger statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<SBUISystemApertureElement> *systemApertureElement;
@property (readonly, nonatomic) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView; // ivar: _trailingView
@property (readonly, nonatomic) UIViewController *viewController;


+(id)_bundleID;
-(id)initWithCustomLayout:(NSInteger)arg0 enrollView:(id)arg1 destination:(NSInteger)arg2 ;
-(id)userInfoForPosting;
-(void)collapse;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)presentableWillDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillNotAppearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)revoke;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviewsWithTransitionCoordinator:(id)arg0 ;


@end


#endif