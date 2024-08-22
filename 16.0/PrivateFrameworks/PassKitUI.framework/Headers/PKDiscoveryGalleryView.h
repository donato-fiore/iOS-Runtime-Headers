// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDISCOVERYGALLERYVIEW_H
#define PKDISCOVERYGALLERYVIEW_H

@class UIView, NSMutableArray, NSArray, UIScrollView, UIPageControl, UIImage, NSString, PKDiscoveryDataSource;
@protocol PKDiscoveryCardViewDelegate, PKDiscoveryArticleViewControllerDelegate, UIScrollViewDelegate, PKForegroundActiveArbiterObserver, PKPGSVSectionSubheaderView, PKPGSVSectionSubheaderDelegate;


#import "PKDiscoveryCardView.h"
#import "PKDiscoveryCardViewTemplateInformation.h"

@interface PKDiscoveryGalleryView : UIView <PKDiscoveryCardViewDelegate, PKDiscoveryArticleViewControllerDelegate, UIScrollViewDelegate, PKForegroundActiveArbiterObserver, PKPGSVSectionSubheaderView>

 {
    NSMutableArray *_cardViews;
    NSArray *_displayedCardViews;
    NSMutableArray *_discoveryCardViews;
    id<PKPGSVSectionSubheaderDelegate> *_subheaderDelegate;
    PKDiscoveryCardView *_passWelcomeView;
    PKDiscoveryCardView *_paymentWelcomeView;
    UIScrollView *_horizontalScrollView;
    UIPageControl *_pageControl;
    UIImage *_dismissImage;
    NSUInteger _pendingDeletes;
    ? _layoutState;
    BOOL _cardSizeStateIsDirty;
    NSString *_lastReportedDiscoveryItemIdentifier;
    ? _foregroundState;
    CGFloat _lastTimeForegroundActive;
    BOOL _articleLayoutsUpdatedAfterEnteringForegroundActive;
    PKDiscoveryCardViewTemplateInformation *_cardTemplateInformation;
    PKDiscoveryCardViewTemplateInformation *_welcomeCardTemplateInformation;
    unsigned char _visibilityState;
}


@property (nonatomic, getter=isAnimatingCard) BOOL animatingCard; // ivar: _animatingCard
@property (retain, nonatomic) PKDiscoveryDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *frontmostItemIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isVisibleForSectionsState:(struct ? )arg0 dataSource:(id)arg1 ;
+(BOOL)isWelcomeCardVisibleForSectionsState:(struct ? )arg0 ;
+(id)passWelcomeCardMessageAttributedString;
+(struct ? )_welcomeStateForState:(struct ? )arg0 ;
-(BOOL)_requestDismissalIfNecessaryAfterLayoutStateUpdate;
-(BOOL)needsRemoval;
-(NSInteger)scrollType;
-(NSUInteger)_indexForCardViewWithIdentifier:(id)arg0 ;
-(NSUInteger)displayIndex;
-(id)_createPassWelcomeCardView;
-(id)_createPaymentWelcomeCardView;
-(id)cardViewForCardWithItemIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithCardTemplateInformation:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_cardSize;
-(struct CGSize )_contentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_appStorePressed;
-(void)_pageControlChanged:(id)arg0 ;
-(void)_removeCardView:(id)arg0 animated:(BOOL)arg1 ;
-(void)_reportCurrentDiscoveryCardToDiscoveryService;
-(void)_scanCodePressed;
-(void)_updateCardSizeIfNecessary;
-(void)_updateCardViews;
-(void)_updateCardViewsAnimated:(BOOL)arg0 ;
-(void)_updateCardViewsAnimated:(BOOL)arg0 overrideFrontmostCardToIdentifier:(id)arg1 ;
-(void)_updateDiscoveryCardViewsForUpdatedArticleLayouts:(id)arg0 overrideFrontmostCardToIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updatePageControlVisibilityWithDelay:(CGFloat)arg0 ;
-(void)_updatePageControlWithDisplayIndex;
-(void)_updateScrollViewToCardIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)dealloc;
-(void)discoveryArticleViewController:(id)arg0 tappedCallToAction:(id)arg1 item:(id)arg2 ;
-(void)discoveryCardViewCTATapped:(id)arg0 callToAction:(id)arg1 itemIdentifier:(id)arg2 ;
-(void)discoveryCardViewRemoveTapped:(id)arg0 ;
-(void)discoveryCardViewTapped:(id)arg0 ;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setSectionsState:(struct ? )arg0 ;
-(void)setSubheaderDelegate:(id)arg0 ;
-(void)updateArticleLayouts:(id)arg0 ;
-(void)updatePageControlFrame;


@end


#endif