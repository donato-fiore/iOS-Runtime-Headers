// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUFILMSTRIPVIEW_H
#define PUFILMSTRIPVIEW_H

@class UIView, AVAsset, NSString, UIImage, NSArray, AVVideoComposition;
@protocol PXLivePhotoTrimScrubberFilmStripView, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, UIScrollViewDelegate, PHVideoScrubberFilmstripView, OS_dispatch_queue;


#import "PUTileViewAnimator.h"
#import "PUFilmstripDataSource.h"
#import "PUFilmstripMediaProvider.h"
#import "PUTilingView.h"

@interface PUFilmstripView : UIView <PXLivePhotoTrimScrubberFilmStripView, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, UIScrollViewDelegate, PHVideoScrubberFilmstripView>

 {
    BOOL _needsUpdateThumbnailAspectRatio;
    BOOL _needsUpdateDataSource;
    BOOL _needsUpdateLayout;
    BOOL _needsUpdateGeneratedPlaceholder;
    NSObject<OS_dispatch_queue> *_placeholderGenerationQueue;
    PUTileViewAnimator *_animator;
}


@property (retain, nonatomic, setter=_setDataSource:) PUFilmstripDataSource *_dataSource; // ivar: __dataSource
@property (retain, nonatomic, setter=_setMediaProvider:) PUFilmstripMediaProvider *_mediaProvider; // ivar: __mediaProvider
@property (nonatomic, setter=_setThumbnailAspectRatio:) CGFloat _thumbnailAspectRatio; // ivar: __thumbnailAspectRatio
@property (readonly, nonatomic) PUTilingView *_tilingView; // ivar: __tilingView
@property (readonly, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) AVAsset *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIImage *generatedPlaceholderImage; // ivar: _generatedPlaceholderImage
@property (nonatomic) BOOL generatesPlaceholderImage; // ivar: _generatesPlaceholderImage
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *indicatorInfos; // ivar: _indicatorInfos
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (nonatomic) BOOL preserveThumbnailsDuringReload;
@property (nonatomic) BOOL preserveThumbnailsDuringReload; // ivar: _preserveThumbnailsDuringReload
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (weak, nonatomic) id *thumbnailUpdatingDelegate;
@property (nonatomic) BOOL useContentAspectRatio;
@property (nonatomic) BOOL useContentAspectRatio; // ivar: _useContentAspectRatio
@property (readonly, nonatomic) AVVideoComposition *videoComposition;
@property (readonly, nonatomic) AVVideoComposition *videoComposition; // ivar: _videoComposition
@property (nonatomic) CGRect visibleRect;
@property (nonatomic) CGRect visibleRect; // ivar: _visibleRect


-(BOOL)_isMediaProviderValid;
-(id)_filmstripLayout;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tilingView:(id)arg0 dataSourceConverterForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(id)tilingView:(id)arg0 tileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSource:(id)arg3 ;
-(id)tilingView:(id)arg0 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect )arg1 toFrame:(struct CGRect )arg2 duration:(CGFloat)arg3 ;
-(id)tilingView:(id)arg0 tileTransitionCoordinatorForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 withContext:(id)arg3 ;
-(void)_invalidateDataSource;
-(void)_invalidateGeneratedPlaceholderImage;
-(void)_invalidateLayout;
-(void)_invalidateMediaProvider;
-(void)_invalidateThumbnailAspectRatio;
-(void)_releaseAVObjects;
-(void)_setNeedsUpdate;
-(void)_updateDataSourceIfNeeded;
-(void)_updateGeneratedPlaceholderImageIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateLayoutIfNeeded;
-(void)_updateMediaProviderPlaceholderImage;
-(void)_updateThumbnailAspectRatioIfNeeded;
-(void)layoutSubviews;
-(void)reloadThumbnails;
-(void)setLivePhotoTrimScrubberThumbnail:(id)arg0 ;


@end


#endif