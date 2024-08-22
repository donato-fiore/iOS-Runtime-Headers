// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIMAGETILEVIEWCONTROLLER_H
#define PUIMAGETILEVIEWCONTROLLER_H

@class NSDate, NSData, NSURL, CALayer<PLTileableLayer>, UIImageView, NSString, UIImage, PXImageLayerModulator, PXImageModulationManager, UIColor;
@protocol PUImageRequesterObserver, PUBrowsingViewModelChangeObserver, PXVKImageAnalysisInteractionDelegate, PUAssetViewModelChangeObserver, PUDisplayAsset, PXVKImageAnalysisInteraction, PUImageTileViewControllerPresentingDelegate;


#import "PUTileViewController.h"
#import "PUImageRequester.h"
#import "PUAssetViewModel.h"
#import "PUBrowsingViewModel.h"
#import "PUMediaProvider.h"

@interface PUImageTileViewController : PUTileViewController <PUImageRequesterObserver, PUBrowsingViewModelChangeObserver, PXVKImageAnalysisInteractionDelegate, PUAssetViewModelChangeObserver>

 {
    ? _delegateFlags;
}


@property (nonatomic, setter=_setAssetLoadingStage:) NSInteger _assetLoadingStage; // ivar: __assetLoadingStage
@property (retain, nonatomic, setter=_setAssetLoadingStartDate:) NSDate *_assetLoadingStartDate; // ivar: __assetLoadingStartDate
@property (retain, nonatomic, setter=_setFullsizeImageData:) NSData *_fullsizeImageData; // ivar: __fullsizeImageData
@property (nonatomic, setter=_setFullsizeImageOrientation:) NSInteger _fullsizeImageOrientation; // ivar: __fullsizeImageOrientation
@property (nonatomic, setter=_setFullsizeImageSize:) CGSize _fullsizeImageSize; // ivar: __fullsizeImageSize
@property (retain, nonatomic, setter=_setFullsizeImageURL:) NSURL *_fullsizeImageURL; // ivar: __fullsizeImageURL
@property (nonatomic, setter=_setFullsizeImageUntransformedSize:) CGSize _fullsizeImageUntransformedSize; // ivar: __fullsizeImageUntransformedSize
@property (retain, nonatomic, setter=_setFullsizeTiledLayer:) CALayer<PLTileableLayer> *_fullsizeTiledLayer; // ivar: __fullsizeTiledLayer
@property (retain, nonatomic, setter=_setImageRequester:) PUImageRequester *_imageRequester; // ivar: __imageRequester
@property (readonly, nonatomic) UIImageView *_imageView; // ivar: __imageView
@property (nonatomic, setter=_setDisplayingFullQualityImage:) BOOL _isDisplayingFullQualityImage; // ivar: __isDisplayingFullQualityImage
@property (nonatomic, setter=_setNeedsUpdateFullsizeImageMetadata:) BOOL _needsUpdateFullsizeImageMetadata; // ivar: __needsUpdateFullsizeImageMetadata
@property (nonatomic, setter=_setNeedsUpdateFullsizeTiledLayer:) BOOL _needsUpdateFullsizeTiledLayer; // ivar: __needsUpdateFullsizeTiledLayer
@property (nonatomic, setter=_setNeedsUpdateImage:) BOOL _needsUpdateImage; // ivar: __needsUpdateImage
@property (nonatomic, setter=_setNeedsUpdateImageLayerModulator:) BOOL _needsUpdateImageLayerModulator; // ivar: __needsUpdateImageLayerModulator
@property (nonatomic, setter=_setNeedsUpdateImageLayerModulatorInput:) BOOL _needsUpdateImageLayerModulatorInput; // ivar: __needsUpdateImageLayerModulatorInput
@property (nonatomic, setter=_setNeedsUpdateImageView:) BOOL _needsUpdateImageView; // ivar: __needsUpdateImageView
@property (nonatomic, setter=_setTargetSize:) CGSize _targetSize; // ivar: __targetSize
@property (nonatomic) BOOL animatesImageAppearance; // ivar: _animatesImageAppearance
@property (retain, nonatomic) NSObject<PUDisplayAsset> *asset; // ivar: _asset
@property (retain, nonatomic) PUAssetViewModel *assetViewModel; // ivar: _assetViewModel
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // ivar: _browsingViewModel
@property (nonatomic) BOOL canUseFullsizeTiledLayer; // ivar: _canUseFullsizeTiledLayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *CGImage gainMapImage; // ivar: _gainMapImage
@property (readonly, nonatomic) BOOL gainMapImageIsAvailable;
@property (readonly, nonatomic) float gainMapValue; // ivar: _gainMapValue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) NSObject<PXVKImageAnalysisInteraction> *imageInteraction; // ivar: _imageInteraction
@property (readonly, nonatomic) BOOL imageIsFullQuality; // ivar: _imageIsFullQuality
@property (retain, nonatomic) PXImageLayerModulator *imageLayerModulator; // ivar: _imageLayerModulator
@property (retain, nonatomic) PXImageModulationManager *imageModulationManager; // ivar: _imageModulationManager
@property (retain, nonatomic) PUMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (nonatomic) BOOL needsUpdateTargetSize; // ivar: _needsUpdateTargetSize
@property (copy, nonatomic) UIColor *placeholderColor; // ivar: _placeholderColor
@property (weak, nonatomic) NSObject<PUImageTileViewControllerPresentingDelegate> *presentingDelegate; // ivar: _presentingDelegate
@property (nonatomic) BOOL preserveImageDuringReload; // ivar: _preserveImageDuringReload
@property (nonatomic) BOOL requiresFullQualityImage; // ivar: _requiresFullQualityImage
@property (nonatomic) BOOL shouldUseFullsizeImageData; // ivar: _shouldUseFullsizeImageData
@property (nonatomic, setter=_setShouldUsePenultimateVersionForNextImageUpdate:) BOOL shouldUsePenultimateVersionForNextImageUpdate; // ivar: _shouldUsePenultimateVersionForNextImageUpdate
@property (readonly) Class superclass;
@property (nonatomic) BOOL visualImageInteractionEnabled; // ivar: _visualImageInteractionEnabled


+(id)_supportedZoomImageFormats;
-(BOOL)_needsUpdate;
-(BOOL)shouldAvoidInPlaceSnapshottedFadeOut;
-(BOOL)vkViewExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)vkVisualSearchExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)wantsVisibleRectChanges;
-(id)generateAssetTransitionInfo;
-(id)loadView;
-(id)presentingViewControllerForImageAnalysisInteraction:(id)arg0 ;
-(struct CGSize )targetSizeForProposedTargetSize:(struct CGSize )arg0 ;
-(void)_addVKImageInteractionToImageView;
-(void)_cancelAllImageRequests;
-(void)_handleAssetViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_handleBrowsingViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_handleShouldReloadAssetMediaNotification:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidateFullsizeImageMetadata;
-(void)_invalidateFullsizeTiledLayer;
-(void)_invalidateImage;
-(void)_invalidateImageLayerModulator;
-(void)_invalidateImageLayerModulatorInput;
-(void)_invalidateImageView;
-(void)_invalidateTargetSize;
-(void)_removeVKImageInteractionFromImageView;
-(void)_setVisualIntelligenceAnalyzingImageIfNeeded;
-(void)_updateAssetLoadingStage;
-(void)_updateFullsizeImageMetadataIfNeeded;
-(void)_updateFullsizeTiledLayerIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateImageIfNeeded;
-(void)_updateImageLayerModulatorIfNeeded;
-(void)_updateImageLayerModulatorInputIfNeeded;
-(void)_updateImageViewIfNeeded;
-(void)_updateReadyForDisplay;
-(void)_updateTargetSizeIfNeeded;
-(void)_updateVKAnalysisAndDisplayMode;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)becomeReusable;
-(void)dealloc;
-(void)didChangeVisibleRect;
-(void)imageAnalysisInteraction:(id)arg0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect )arg1 ;
-(void)imageAnalysisInteractionDidDismissVisualSearchController:(id)arg0 ;
-(void)imageRequester:(id)arg0 didChange:(id)arg1 ;
-(void)setEdgeAntialiasingEnabled:(BOOL)arg0 ;
-(void)setPreloadedImage:(id)arg0 ;
-(void)updateModulator;
-(void)updateModulatorInputs;
-(void)updateMutableImageLayerModulator:(id)arg0 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif