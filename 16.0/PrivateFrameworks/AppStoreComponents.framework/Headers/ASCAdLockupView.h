// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCADLOCKUPVIEW_H
#define ASCADLOCKUPVIEW_H

@class UIView, NSString, UIViewController, UITapGestureRecognizer;
@protocol ASCLockupPresenterObserver, ASCOfferPresenterObserver, ASCLockupMediaPresenterObserver, ASCAdLockupPresenterView, UIGestureRecognizerDelegate, ASCAdLockupViewDelegate;


#import "ASCAdLockupPresenter.h"
#import "ASCAdTransparencyContainerView.h"
#import "ASCLockupContentView.h"
#import "ASCGradientBackgroundView.h"
#import "ASCLockupViewGroup.h"
#import "ASCLockup.h"
#import "ASCLockupMediaPresenter.h"
#import "ASCLockupPresenter.h"
#import "ASCMaterialBackgroundView.h"
#import "ASCLockupMediaView.h"
#import "ASCAppearMetricsPresenter.h"
#import "ASCOfferPresenter.h"
#import "ASCLockupRequest.h"

@interface ASCAdLockupView : UIView <ASCLockupPresenterObserver, ASCOfferPresenterObserver, ASCLockupMediaPresenterObserver, ASCAdLockupPresenterView, UIGestureRecognizerDelegate>

 {
    ? _delegateRespondsTo;
}


@property (readonly, nonatomic) NSString *accessibilityAdvertisement;
@property (readonly, nonatomic) NSString *accessibilityUserRating;
@property (readonly, nonatomic) ASCAdLockupPresenter *adLockupPresenter; // ivar: _adLockupPresenter
@property (nonatomic, getter=isAdMarkerHidden) BOOL adMarkerHidden; // ivar: _adMarkerHidden
@property (readonly, nonatomic) ASCAdTransparencyContainerView *adTransparencyContainer; // ivar: _adTransparencyContainer
@property (nonatomic) BOOL automaticallyPresentsProductDetails; // ivar: _automaticallyPresentsProductDetails
@property (readonly, nonatomic) ASCLockupContentView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ASCAdLockupViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ASCGradientBackgroundView *gradientBackgroundView; // ivar: _gradientBackgroundView
@property (retain, nonatomic) ASCLockupViewGroup *group;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) ASCLockup *lockup;
@property (readonly, nonatomic) ASCLockupMediaPresenter *lockupMediaPresenter; // ivar: _lockupMediaPresenter
@property (readonly, nonatomic) ASCLockupPresenter *lockupPresenter; // ivar: _lockupPresenter
@property (readonly, nonatomic) ASCMaterialBackgroundView *materialBackgroundView; // ivar: _materialBackgroundView
@property (readonly, nonatomic) ASCLockupMediaView *mediaView; // ivar: _mediaView
@property (readonly, nonatomic) ASCAppearMetricsPresenter *metricsPresenter; // ivar: _metricsPresenter
@property (readonly, nonatomic) ASCOfferPresenter *offerPresenter; // ivar: _offerPresenter
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) ASCLockupRequest *request;
@property (retain, nonatomic) NSString *storeSheetHostBundleID; // ivar: _storeSheetHostBundleID
@property (retain, nonatomic) NSString *storeSheetUsageContext; // ivar: _storeSheetUsageContext
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (nonatomic, getter=isVideoLoopingEnabled) BOOL videoLoopingEnabled;
@property (nonatomic, getter=isVideoMuted) BOOL videoMuted;


+(CGFloat)topContentViewSpacing;
-(BOOL)accessibilityActivate;
-(BOOL)automaticallyGeneratesAppearMetrics;
-(BOOL)isAccessibilityElement;
-(BOOL)isHighlighted;
-(BOOL)isLargeSizeClass;
-(NSUInteger)accessibilityTraits;
-(id)_accessibilitySupplementaryFooterViews;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(id)appearMetricsActivity;
-(id)context;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)metricsActivityForPresentingProductDetails;
-(id)metricsParametersForPresentingProductDetails;
-(id)metricsParametersFromMetricsActivity:(id)arg0 ;
-(id)offerTheme;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)didMoveToWindow;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)layoutAdContentView;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)lockupMediaPresenterVideoStateDidChange:(NSInteger)arg0 ;
-(void)lockupPresenterDidFailRequestWithError:(id)arg0 ;
-(void)offerPresenterDidObserveChangeToState:(id)arg0 ;
-(void)offerPresenterPreprocessOffer:(id)arg0 inState:(id)arg1 completionBlock:(id)arg2 ;
-(void)offerPresenterWillPerformActionOfOffer:(id)arg0 inState:(id)arg1 withActivity:(*id)arg2 inContext:(*id)arg3 ;
-(void)performAdTransparencyAction;
-(void)performLockupAction;
-(void)performOfferAction;
-(void)presentProductDetailsViewController;
-(void)setAdTransparencyButtonHidden:(BOOL)arg0 ;
-(void)setAppearMetricsActivity:(id)arg0 ;
-(void)setAutomaticallyGeneratesAppearMetrics:(BOOL)arg0 ;
-(void)setDeveloperName:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setLayoutMargins:(struct UIEdgeInsets )arg0 ;
-(void)setOfferTheme:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateLayoutMarginsForContext:(id)arg0 ;
-(void)updateVisibility:(NSInteger)arg0 ;


@end


#endif