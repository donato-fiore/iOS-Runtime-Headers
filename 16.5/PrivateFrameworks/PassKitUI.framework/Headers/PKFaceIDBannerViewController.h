// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKFACEIDBANNERVIEWCONTROLLER_H
#define PKFACEIDBANNERVIEWCONTROLLER_H

@class UIViewController, UIColor, UIView, LAUIPearlGlyphView, NSString, PKBannerHandleState, UIView<SBUISystemApertureAccessoryView>, BSAction, NSURL;
@protocol PKBannerHandleViewController, OS_dispatch_source, PKBannerViewControllerPresentable;


#import "PKBlurView.h"

@interface PKFaceIDBannerViewController : UIViewController <PKBannerHandleViewController>

 {
    int _state;
    BOOL _revoked;
    NSUInteger _revokeBackgroundTask;
    NSObject<OS_dispatch_source> *_revokeTimer;
    BOOL _transitioning;
    BOOL _appearedOnce;
    BOOL _updatingPreferredContentSize;
    BOOL _elementNeedsUpdate;
    char _deferredGlyphState;
    NSInteger _glyphState;
    NSObject<OS_dispatch_source> *_glyphLegibilityTimer;
    unsigned int _transitionAnimationCounter;
    unsigned int _glyphAnimationCounter;
    UIColor *_keyColor;
    UIColor *_successKeyColor;
    UIView *_containerView;
    PKBlurView *_glyphContainerView;
    LAUIPearlGlyphView *_glyphView;
}


@property (nonatomic) NSInteger activeLayoutMode; // ivar: _activeLayoutMode
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedScenePersistenceIdentifier;
@property (readonly, nonatomic) BOOL attachedMinimalViewRequiresZeroPadding;
@property (nonatomic, getter=isBannerDetached) BOOL bannerDetached; // ivar: _bannerDetached
@property (retain, nonatomic) PKBannerHandleState *bannerState; // ivar: _bannerState
@property (nonatomic) BOOL canRequestAlertingAssertion;
@property (readonly, nonatomic) NSInteger contentRole;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) UIColor *keyColor;
@property (readonly, nonatomic) BSAction *launchAction;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property (readonly, nonatomic) NSInteger maximumLayoutMode;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property (nonatomic) NSUInteger minimalViewLayoutAxis;
@property (readonly, nonatomic) NSInteger minimumLayoutMode;
@property (readonly, nonatomic) CGSize preferredCustomAspectRatio;
@property (readonly, nonatomic) NSInteger preferredCustomLayout;
@property (readonly, nonatomic) CGFloat preferredHeightForBottomSafeArea;
@property (readonly, nonatomic) NSInteger preferredLayoutMode;
@property (weak, nonatomic) NSObject<PKBannerViewControllerPresentable> *presentable; // ivar: _presentable
@property (readonly, nonatomic) NSUInteger presentationBehaviors;
@property (readonly, nonatomic) BOOL preventsAutomaticDismissal;
@property (readonly, nonatomic) BOOL preventsInteractiveDismissal;
@property (readonly, nonatomic) NSUInteger statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;


-(BOOL)_canShowWhileLocked;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)revoked;
-(void)viewWillLayoutSubviews;
-(void)viewWillLayoutSubviewsWithTransitionCoordinator:(id)arg0 ;


@end


#endif