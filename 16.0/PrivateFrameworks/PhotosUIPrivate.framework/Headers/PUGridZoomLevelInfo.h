// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUGRIDZOOMLEVELINFO_H
#define PUGRIDZOOMLEVELINFO_H

@class PHCachingImageManager, NSString, PHAssetResourceQualityClass;
@protocol PUGridRenderedStripDataSource, PUPhotosSectionHeaderViewDelegate, PUSectionedGridLayoutDelegate;

#import <Foundation/Foundation.h>

#import "PUGridRenderedStrip.h"
#import "PUGridZoomLevelInfo.h"
#import "PUSectionedGridLayout.h"
#import "PUMomentsZoomLevelManager.h"
#import "PUZoomableGridViewController.h"

@interface PUGridZoomLevelInfo : NSObject <PUGridRenderedStripDataSource, PUPhotosSectionHeaderViewDelegate, PUSectionedGridLayoutDelegate>

 {
    PUGridRenderedStrip *_currentRenderedStrip;
    BOOL _useFloatingHeaderGroupName;
}


@property (readonly, nonatomic) *__CFString aggregateLevelKey;
@property (readonly, nonatomic) PUGridZoomLevelInfo *baseZoomLevelInfo; // ivar: _baseZoomLevelInfo
@property (readonly, nonatomic) PHCachingImageManager *cachingImageManager; // ivar: _cachingImageManager
@property (readonly, nonatomic) NSInteger cellFillMode;
@property (readonly, nonatomic) PUSectionedGridLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (readonly, nonatomic) NSInteger dateRangeFormatterPreset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize imageRequestItemSize;
@property (readonly, nonatomic) CGFloat itemContentScale;
@property (nonatomic) CGSize lastItemPixelSize; // ivar: _lastItemPixelSize
@property (readonly, nonatomic) NSInteger maxRowsPerSection; // ivar: _maxRowsPerSection
@property (nonatomic) CGFloat pendingContentWidth; // ivar: _pendingContentWidth
@property (retain, nonatomic) PHAssetResourceQualityClass *qualityClass; // ivar: _qualityClass
@property (readonly, nonatomic) NSString *renderedStripsElementKind;
@property (readonly, nonatomic) NSString *sectionHeaderElementKind;
@property (nonatomic) BOOL summarizeSections; // ivar: _summarizeSections
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsCollectionViewDragSource;
@property (readonly, nonatomic) CGSize thumbnailImageSize;
@property (readonly, nonatomic) CGSize thumbnailImageSize; // ivar: _thumbnailImageSize
@property (nonatomic) BOOL useFloatingHeaderGroupName;
@property (readonly, nonatomic) CGFloat zoomInDuration;
@property (readonly, nonatomic) NSUInteger zoomLevel; // ivar: _zoomLevel
@property (readonly, nonatomic) PUMomentsZoomLevelManager *zoomLevelManager; // ivar: _zoomLevelManager
@property (readonly, nonatomic) CGFloat zoomOutDuration;
@property (nonatomic) PUZoomableGridViewController *zoomableGridViewController;
@property (readonly, nonatomic) PUZoomableGridViewController *zoomableGridViewController; // ivar: _zoomableGridViewController


-(BOOL)configureGridCell:(id)arg0 forIndexPath:(id)arg1 ;
-(BOOL)configureSupplementaryView:(id)arg0 ofKind:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg0 ;
-(BOOL)shouldUseDynamicLayout;
-(BOOL)supportsEditMode;
-(BOOL)supportsIncrementalChangeNotifications;
-(BOOL)wantsAssetCountsVisible;
-(BOOL)wantsAutomaticContentOffsetAdjustment;
-(BOOL)wantsCloudStatusVisible;
-(BOOL)wantsMagnifierNavigation;
-(CGFloat)cellAspectRatioHint;
-(NSInteger)_detailViewSourceOriginWithZoomLevel:(NSUInteger)arg0 ;
-(NSInteger)imageDeliveryMode;
-(NSInteger)sectionedGridLayout:(id)arg0 maximumRowsForVisualSection:(NSInteger)arg1 ;
-(id)assetsToDisplayInMapForVisualSection:(NSInteger)arg0 ;
-(id)diagnosticsProviderForVisualSection:(NSInteger)arg0 ;
-(id)imageDataForAsset:(id)arg0 itemContentScale:(CGFloat)arg1 imageWidth:(*int)arg2 imageHeight:(*int)arg3 bytesPerRow:(*int)arg4 dataWidth:(*int)arg5 dataHeight:(*int)arg6 imageDataOffset:(*int)arg7 ;
-(id)initWithZoomLevel:(NSUInteger)arg0 zoomLevelManager:(id)arg1 baseZoomLevelInfo:(id)arg2 ;
-(id)newCollectionViewLayout;
-(id)renderedStrip:(id)arg0 imageDataForAsset:(id)arg1 imageWidth:(*int)arg2 imageHeight:(*int)arg3 bytesPerRow:(*int)arg4 dataWidth:(*int)arg5 dataHeight:(*int)arg6 imageDataOffset:(*int)arg7 ;
-(id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg0 ;
-(struct CGPoint )sectionedGridLayout:(id)arg0 targetContentOffsetForProposedUpdatesContentOffset:(struct CGPoint )arg1 ;
-(void)_updateBackdropGroupNameForHeaderView:(id)arg0 ;
-(void)configureSectionHeaderView:(id)arg0 forVisualSection:(NSInteger)arg1 ;
-(void)didFinishZoomLevelTransition;
-(void)didTapHeaderView:(id)arg0 ;
-(void)getPhotosDataSource:(*id)arg0 displayTitleInfo:(*id)arg1 forDetailsForVisualSection:(NSInteger)arg2 ;
-(void)headerView:(id)arg0 actionButtonPressed:(id)arg1 ;
-(void)modelDidChange:(id)arg0 ;
-(void)prepareForTransitionFromZoomLevelInfo:(id)arg0 animated:(BOOL)arg1 interactive:(BOOL)arg2 ;
-(void)prepareForTransitionToZoomLevelInfo:(id)arg0 animated:(BOOL)arg1 interactive:(BOOL)arg2 ;
-(void)pushPhotosDetailsViewForVisualSection:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)registerReusableViewClassesForCollectionView:(id)arg0 ;
-(void)renderedStrip:(id)arg0 enumerateAssetsForVisualSection:(NSInteger)arg1 inVisualItemRange:(struct _NSRange )arg2 usingBlock:(id)arg3 ;
-(void)sectionedGridLayout:(id)arg0 didFinalizePrepareTransitionIsAppearing:(BOOL)arg1 ;
-(void)sectionedGridLayout:(id)arg0 didInvalidateWithContext:(id)arg1 ;
-(void)sectionedGridLayout:(id)arg0 didPrepareTransitionIsAppearing:(BOOL)arg1 ;
-(void)updateForSizeChangeIfNecessary;
-(void)updateLayoutMetricsForWidth:(CGFloat)arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 ;
-(void)willAnimateSizeTransition;
-(void)willShowMagnifiedViewController:(id)arg0 ;


@end


#endif