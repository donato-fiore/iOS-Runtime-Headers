// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMESSAGESSTACKVIEW_H
#define PXMESSAGESSTACKVIEW_H

@class UIView, NSShadow, NSString, NSSet, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol PXMessagesStackItemsLayoutPrimaryItemDelegate, PXGDisplayAssetSource, PXGSolidColorSource, PXAssetsDataSourceManagerObserver, PXMessagesStackItemsLayoutDelegate, PXScrollViewControllerObserver, PXGAssetBadgeDecorationSource, PXGSolidColorOverlayDecorationSource, PXGShadowSource, PXGSelectionDecorationSource, PXGTapbackDecorationSource, PXGViewSource, PXEventCoalescerObserver, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, PXPhotosGridStackTransitionEndpoint, PXDisplayAssetFetchResult, PXMessagesStackViewDelegate, PXTapbackStatusManager;


#import "PXGView.h"
#import "PXMessagesStackItemsLayout.h"
#import "PXGDecoratingLayout.h"
#import "PXEventCoalescer.h"
#import "PXLRUMemoryCache.h"
#import "PXMessagesStackPlaybackControlUserData.h"
#import "PXMessagesStackPlaybackControlViewModel.h"
#import "PXPhotosGridAssetDecorationSource.h"
#import "PXMessagesStackAdditionalItemsViewUserData.h"
#import "PXMessagesStackActivityIndicatorViewUserData.h"
#import "PXAssetReference.h"
#import "PXAssetsDataSource.h"
#import "PXGDisplayAssetVideoPresentationController.h"
#import "PXAssetsDataSourceManager.h"
#import "PXUIMediaProvider.h"

@interface PXMessagesStackView : UIView <PXMessagesStackItemsLayoutPrimaryItemDelegate, PXGDisplayAssetSource, PXGSolidColorSource, PXAssetsDataSourceManagerObserver, PXMessagesStackItemsLayoutDelegate, PXScrollViewControllerObserver, PXGAssetBadgeDecorationSource, PXGSolidColorOverlayDecorationSource, PXGShadowSource, PXGSelectionDecorationSource, PXGTapbackDecorationSource, PXGViewSource, PXEventCoalescerObserver, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, PXPhotosGridStackTransitionEndpoint>

 {
    PXGView *_tungstenView;
    PXMessagesStackItemsLayout *_layout;
    PXGDecoratingLayout *_decoratingLayout;
    ? _delegateRespondsTo;
    _NSRange _cachedClampedItemRange;
    id<PXDisplayAssetFetchResult> *_cachedClampedFetchResult;
    NSShadow *_centerItemShadow;
    PXEventCoalescer *_settledEventCoalescer;
    PXLRUMemoryCache *_videoPresentationControllersByItem;
    PXMessagesStackPlaybackControlUserData *_cachedPlaybackControlUserData;
    PXMessagesStackPlaybackControlViewModel *_playbackControlViewModel;
    PXPhotosGridAssetDecorationSource *_assetDecorationSource;
    NSInteger _indexToRestore;
    PXSimpleIndexPath _lastKnownPrimaryIndex;
    BOOL _isProgramaticallyScrolling;
    PXMessagesStackAdditionalItemsViewUserData *_cachedAdditionalItemsUserData;
    PXMessagesStackActivityIndicatorViewUserData *_activityIndicatorViewUserData;
}


@property (nonatomic) ? additionalItemsCount; // ivar: _additionalItemsCount
@property (nonatomic) BOOL allowPlayableContentLoading; // ivar: _allowPlayableContentLoading
@property (readonly, nonatomic) PXAssetReference *currentAssetReference;
@property (retain, nonatomic) PXAssetsDataSource *currentDataSource; // ivar: _currentDataSource
@property (readonly, nonatomic) NSUInteger currentIndex;
@property (retain, nonatomic) PXGDisplayAssetVideoPresentationController *currentVideoPresentationController; // ivar: _currentVideoPresentationController
@property (retain, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (nonatomic) BOOL debugColorModeEnabled; // ivar: _debugColorModeEnabled
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXMessagesStackViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<UIViewControllerTransitioningDelegate> *gridTransitioningDelegate;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *hiddenAssetReferences; // ivar: _hiddenAssetReferences
@property (readonly, nonatomic) CGFloat horizontalContentMargin;
@property (nonatomic) CGFloat leftEdgeHorizontalContentMarginAdjustment;
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) BOOL providesLoadingAppearanceAndBehavior; // ivar: _providesLoadingAppearanceAndBehavior
@property (nonatomic) CGFloat rightEdgeHorizontalContentMarginAdjustment;
@property (nonatomic) BOOL selectionOverlayEnabled; // ivar: _selectionOverlayEnabled
@property (nonatomic, getter=isSettled) BOOL settled; // ivar: _settled
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) NSObject<PXTapbackStatusManager> *tapbackStatusManager;
@property (retain, nonatomic) UIView *transitionPlaceholderView; // ivar: _transitionPlaceholderView
@property (nonatomic) CGFloat verticalContentInsets; // ivar: _verticalContentInsets


-(BOOL)_isSpriteReferenceForPrimaryItem:(id)arg0 ;
-(BOOL)_shouldAutoplayAsset:(id)arg0 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)hasTapbacksForSpriteIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(BOOL)scrollToAssetReference:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)scrollToIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(BOOL)stackItemsLayout:(id)arg0 itemHasTapback:(NSInteger)arg1 ;
-(BOOL)wantsAssetBadgeDecorationsInLayout:(id)arg0 ;
-(BOOL)wantsFileSizeBadgesInLayout:(id)arg0 ;
-(BOOL)wantsInteractiveFavoriteBadgesInLayout:(id)arg0 ;
-(BOOL)wantsTapbackDecorationInLayout:(id)arg0 ;
-(CGFloat)alphaForShadowAtSpriteIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(CGFloat)cornerRadiusForShadowSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(CGFloat)horizontalContentMarginForSize:(struct CGSize )arg0 ;
-(CGFloat)itemsLayout:(id)arg0 aspectRatioForItem:(NSInteger)arg1 ;
-(CGFloat)solidColorOverlayAlphaForSpriteIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(Class)_viewClassForSpriteAtIndex:(unsigned int)arg0 inDecoratingLayout:(id)arg1 ;
-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)itemsLayout:(id)arg0 itemForObjectReference:(id)arg1 options:(NSUInteger)arg2 ;
-(NSInteger)overallSelectionOrderAtSpriteIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)selectionDecorationStyleInLayout:(id)arg0 ;
-(NSUInteger)desiredPlaceholderStyleInLayout:(id)arg0 ;
-(NSUInteger)selectionDecorationAdditionsInLayout:(id)arg0 ;
-(NSUInteger)supportedDisplayAssetPresentationStylesInLayout:(id)arg0 ;
-(id)_presentationControllerForAsset:(id)arg0 ;
-(id)_regionOfInterestForAssetReference:(id)arg0 forTransitioning:(BOOL)arg1 ;
-(id)_trackingContainerViewForAssetReference:(id)arg0 ;
-(id)_viewUserDataForSpriteAtIndex:(unsigned int)arg0 inDecoratingLayout:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 inLayout:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)installTransitionSnapshotViewForAssetReference:(id)arg0 uncroppedImageFrame:(struct CGRect *)arg1 ;
-(id)interactionControllerForDismissal:(id)arg0 ;
-(id)itemsLayout:(id)arg0 objectReferenceForItem:(NSInteger)arg1 ;
-(id)regionOfInterestForAssetReference:(id)arg0 ;
-(id)regionOfInterestForTransitioningAssetReference:(id)arg0 ;
-(id)selectedSpriteIndexesInLayout:(id)arg0 ;
-(id)shadowForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)solidColorOverlayForLayout:(id)arg0 ;
-(id)videoPresentationControllerForDisplayAsset:(id)arg0 spriteIndex:(unsigned int)arg1 inLayout:(id)arg2 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(struct ? )tapbackConfigurationForProposedConfiguration:(struct ? )arg0 spriteIndex:(unsigned int)arg1 inLayout:(id)arg2 ;
-(struct CGRect )itemsLayout:(id)arg0 bestCropRectForItem:(NSInteger)arg1 withAspectRatio:(CGFloat)arg2 ;
-(struct CGSize )minSpriteSizeForPresentationStyle:(NSUInteger)arg0 ;
-(struct PXAssetBadgeInfo )assetBadgeInfoForAsset:(id)arg0 atSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2 ;
-(void)_handleTap:(id)arg0 ;
-(void)_updateCurrentPresentationController;
-(void)_updateDataSource;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)outputEventSignaledForCoalescer:(id)arg0 ;
-(void)prepareForDisplay;
-(void)primaryItemDidChangeForStackItemsLayout:(id)arg0 ;
-(void)removeTransitionSnapshotView;
-(void)scrollViewControllerDidEndScrolling:(id)arg0 ;
-(void)scrollViewControllerDidLayoutSubviews:(id)arg0 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg0 ;
-(void)scrollViewControllerWillEndScrolling:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;


@end


#endif