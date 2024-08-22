// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSBANNERVIEWCONTROLLER_H
#define PKPASSBANNERVIEWCONTROLLER_H

@class UIViewController, PLPlatterView, UIView, UIFont, UILabel, NSString, UIColor, NSURL, UIView<SBUISystemApertureAccessoryView>, PKPass;
@protocol PKPassBannerMinimalViewDelegate, PKBannerViewController, OS_dispatch_source, PKBannerViewControllerPresentable;


#import "PKPassBannerLeadingView.h"
#import "PKPassBannerTrailingView.h"
#import "PKPassBannerMinimalView.h"
#import "PKPassBannerTrailingViewConfiguration.h"

@interface PKPassBannerViewController : UIViewController <PKPassBannerMinimalViewDelegate, PKBannerViewController>

 {
    BOOL _isTransactionBanner;
    BOOL _appeared;
    BOOL _revoked;
    NSObject<OS_dispatch_source> *_revokeTimer;
    NSInteger _style;
    BOOL _updatingPreferredContentSize;
    PLPlatterView *_platter;
    UIView *_contentView;
    PKPassBannerLeadingView *_leadingView;
    PKPassBannerTrailingView *_trailingView;
    PKPassBannerMinimalView *_minimalView;
    UIFont *_primaryFont;
    UIFont *_secondaryFont;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
}


@property (nonatomic) NSInteger activeLayoutMode; // ivar: _activeLayoutMode
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedScenePersistenceIdentifier;
@property (nonatomic) BOOL canRequestAlertingAssertion;
@property (readonly, nonatomic) NSInteger contentRole;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) UIColor *keyColor;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property (readonly, nonatomic) NSInteger maximumLayoutMode;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property (nonatomic) NSUInteger minimalViewLayoutAxis;
@property (readonly, nonatomic) NSInteger minimumLayoutMode;
@property (readonly, nonatomic) PKPass *pass; // ivar: _pass
@property (readonly, nonatomic) CGSize preferredCustomAspectRatio;
@property (readonly, nonatomic) NSInteger preferredCustomLayout;
@property (readonly, nonatomic) CGFloat preferredHeightForBottomSafeArea;
@property (readonly, nonatomic) NSInteger preferredLayoutMode;
@property (weak, nonatomic) NSObject<PKBannerViewControllerPresentable> *presentable; // ivar: _presentable
@property (readonly, nonatomic) NSUInteger presentationBehaviors;
@property (readonly, nonatomic) BOOL preventsAutomaticDismissal;
@property (readonly, nonatomic) BOOL preventsInteractiveDismissal;
@property (readonly, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (readonly, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (readonly, nonatomic) NSUInteger statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property (readonly, nonatomic) PKPassBannerTrailingViewConfiguration *trailingViewConfiguration; // ivar: _trailingViewConfiguration


+(id)createForTransactionWithPass:(id)arg0 primaryText:(id)arg1 secondaryText:(id)arg2 trailingViewConfiguration:(id)arg3 ;
+(id)createWithPass:(id)arg0 primaryText:(id)arg1 secondaryText:(id)arg2 trailingViewConfiguration:(id)arg3 ;
-(BOOL)_canShowWhileLocked;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )preferredContentSizeWithPresentationSize:(struct CGSize )arg0 containerSize:(struct CGSize )arg1 ;
-(struct UIEdgeInsets )bannerContentOutsets;
-(void)_tapped:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)passBannerMinimalViewDidChangeSize:(id)arg0 ;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)revoked;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillLayoutSubviewsWithTransitionCoordinator:(id)arg0 ;


@end


#endif