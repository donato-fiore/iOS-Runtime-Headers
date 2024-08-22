// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCLOCKUPVIEW_H
#define ASCLOCKUPVIEW_H

@class UIView, NSString, UIViewController;
@protocol ASCLockupPresenterObserver, ASCOfferPresenterObserver, ASCLockupViewDelegate;


#import "ASCMetricsActivity.h"
#import "ASCLockupContentView.h"
#import "ASCLockupViewGroup.h"
#import "ASCLockup.h"
#import "ASCLockupPresenter.h"
#import "ASCAppearMetricsPresenter.h"
#import "ASCOfferPresenter.h"
#import "ASCOfferTheme.h"
#import "ASCLockupRequest.h"

@interface ASCLockupView : UIView <ASCLockupPresenterObserver, ASCOfferPresenterObserver>

 {
    ? _delegateRespondsTo;
}


@property (copy, nonatomic) ASCMetricsActivity *appearMetricsActivity;
@property (nonatomic) BOOL automaticallyGeneratesAppearMetrics;
@property (nonatomic) BOOL automaticallyPresentsProductDetails; // ivar: _automaticallyPresentsProductDetails
@property (readonly, nonatomic) ASCLockupContentView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ASCLockupViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ASCLockupViewGroup *group;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (copy, nonatomic) ASCLockup *lockup;
@property (readonly, nonatomic) ASCLockupPresenter *lockupPresenter; // ivar: _lockupPresenter
@property (readonly, nonatomic) ASCAppearMetricsPresenter *metricsPresenter; // ivar: _metricsPresenter
@property (readonly, nonatomic) ASCOfferPresenter *offerPresenter; // ivar: _offerPresenter
@property (copy, nonatomic) ASCOfferTheme *offerTheme;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) ASCLockupRequest *request;
@property (nonatomic) BOOL showsPlaceholderContent;
@property (retain, nonatomic) NSString *size;
@property (retain, nonatomic) NSString *storeSheetHostBundleID;
@property (retain, nonatomic) NSString *storeSheetHostBundleID; // ivar: _storeSheetHostBundleID
@property (retain, nonatomic) NSString *storeSheetUsageContext;
@property (retain, nonatomic) NSString *storeSheetUsageContext; // ivar: _storeSheetUsageContext
@property (readonly) Class superclass;


-(BOOL)accessibilityActivate;
-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)_accessibilitySupplementaryFooterViews;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredProductDetailsPresentationContext;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)didMoveToWindow;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)layoutContentView;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)lockupPresenterDidFailRequestWithError:(id)arg0 ;
-(void)offerPresenterDidObserveChangeToState:(id)arg0 ;
-(void)offerPresenterWillPerformActionOfOffer:(id)arg0 inState:(id)arg1 withActivity:(*id)arg2 inContext:(*id)arg3 ;
-(void)performLockupAction;
-(void)presentProductDetailsViewController;
-(void)setHidden:(BOOL)arg0 ;
-(void)setLayoutMargins:(struct UIEdgeInsets )arg0 ;
-(void)setViewRenderSpanProvider:(id)arg0 ;


@end


#endif