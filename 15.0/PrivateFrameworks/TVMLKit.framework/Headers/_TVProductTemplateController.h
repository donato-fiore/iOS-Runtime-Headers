// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVPRODUCTTEMPLATECONTROLLER_H
#define _TVPRODUCTTEMPLATECONTROLLER_H

@class TVBgImageLoadingViewController, IKViewElement, IKImageElement, UIImage, UIImageView, CALayer, UIView, UIViewController, IKAudioElement, UICollectionView, NSArray, NSIndexPath, NSString;
@protocol UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, TVAppTemplateImpressionable, CAAnimationDelegate, UIPopoverPresentationControllerDelegate;


#import "_TVProductCollectionViewCell.h"

@interface _TVProductTemplateController : TVBgImageLoadingViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, TVAppTemplateImpressionable, CAAnimationDelegate, UIPopoverPresentationControllerDelegate>

 {
    IKViewElement *_templateElement;
    IKImageElement *_bgImageElement;
    IKImageElement *_heroImageElement;
    UIImage *_bgImage;
    UIImageView *_bgImageView;
    CALayer *_bgBlurSublayer;
    UIView *_backdropView;
    IKViewElement *_backdropTintElement;
    UIView *_backdropTintView;
    UIViewController *_backdropTintViewController;
    UIImageView *_vignetteView;
    UIImageView *_tvVignetteView;
    IKAudioElement *_bgAudioElement;
    IKViewElement *_productBannerElement;
    IKViewElement *_infoListElement;
    IKViewElement *_titleElement;
    UICollectionView *_collectionView;
    UIViewController *_bannerViewController;
    NSArray *_viewControllers;
    NSArray *_rowSpacingMetricsList;
    CGFloat _productBannerHeight;
    BOOL _isPartialScrollingTemplate;
    NSIndexPath *_autoHighlightIndexPath;
    NSIndexPath *_lastFocusedIndexPath;
    BOOL _fadedIn;
    CGFloat _impressionThreshold;
    BOOL _preloadOnLayout;
    CGSize _preloadContentSize;
    UIImageView *_topHeroImageView;
    UIView *_topHeroSeparatorView;
    UIImageView *_topHeroGradientView;
    BOOL _topHeroImageVisible;
    BOOL _lightStatusBar;
    IKImageElement *_topHeroImageElement;
    CGFloat _largeTitleHeight;
    BOOL _sportsProductTemplate;
    _TVProductCollectionViewCell *_bannerCell;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_backgroundImageRequiresBlur;
-(BOOL)_isBackdropNeeded;
-(BOOL)_shouldShowTopHeroImage;
-(BOOL)_shouldUsePartialScrollingTemplate;
-(BOOL)_sportsLandscapePhone;
-(BOOL)_sportsLandscapePhoneIsOverlaySection:(id)arg0 ;
-(BOOL)automaticallyAdjustsScrollViewInsets;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(CGFloat)_largeTitleHeight;
-(NSInteger)_blurEffectStyle;
-(NSInteger)_overrideLargeTitleDisplayMode;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)preferredStatusBarUpdateAnimation;
-(NSUInteger)_lastFocusableCellIndex;
-(id)_adamIDForElement:(id)arg0 ;
-(id)_backgroundImageProxy;
-(id)_canonicalIDForElement:(id)arg0 ;
-(id)_relatedSectionHeaderView;
-(id)_spacingMetricsForViewControllers:(id)arg0 contentSize:(struct CGSize *)arg1 ;
-(id)_yOffsetForView:(id)arg0 withScrollView:(id)arg1 targetYOffset:(CGFloat)arg2 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)impressionableElementsContainedInDocument:(id)arg0 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(struct CGSize )_backgroundImageProxySize;
-(struct CGSize )_maxContentSize;
-(struct CGSize )_topHeroImageViewSize;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )_cellMarginForIndex:(NSInteger)arg0 partialMargins:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_cancelImpressionsUpdate;
-(void)_configureBackgroundTintView;
-(void)_configureTopHeroImage:(id)arg0 ;
-(void)_configureWithBannerElement:(id)arg0 ;
-(void)_configureWithBgElement:(id)arg0 ;
-(void)_configureWithBgImage:(id)arg0 backdropImage:(id)arg1 ;
-(void)_recordImpressionsForVisibleView;
-(void)_updateBackgroundTintView;
-(void)_updateBackgroundTintViewEffects;
-(void)_updateImpressions;
-(void)_updateTopHeroImageOverlay;
-(void)_updateTopHeroImageVisibility:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)configureAppearanceTransition;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)updateWithProductTemplate:(id)arg0 ;
-(void)updateWithViewElement:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif