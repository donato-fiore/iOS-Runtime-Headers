// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSDETAILSHEADERTILEWIDGET_H
#define PXPHOTOSDETAILSHEADERTILEWIDGET_H

@class NSMutableSet, PHAssetCollection, PHFetchResult, NSString;
@protocol PXTileSource, PXTilingControllerTransitionDelegate, PXReusableObjectPoolDelegate, UIGestureRecognizerDelegate, PXChangeObserver, PXPhotosDataSourceChangeObserver, PXPhotosDetailsHeaderTileLayoutDelegate, PXUIPlayButtonTileDelegate, PXUIWidget, PXDiagnosticsEnvironment, OS_dispatch_queue, PXAnonymousView, PXDisplayAsset, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

#import <Foundation/Foundation.h>

#import "PXPhotosDetailsHeaderSpecManager.h"
#import "PXTilingController.h"
#import "PXPhotoKitUIMediaProvider.h"
#import "PXReusableObjectPool.h"
#import "PXBasicUIViewTileAnimator.h"
#import "PXUITapGestureRecognizer.h"
#import "PXImageRequester.h"
#import "PXPhotosDetailsHeaderSpec.h"
#import "PXPhotosDetailsLoadCoordinationToken.h"
#import "PXPhotosDataSource.h"
#import "PXUIPlayButtonTile.h"
#import "PXTitleSubtitleUILabelTile.h"
#import "PXAssetActionManager.h"
#import "PXPhotosDetailsContext.h"
#import "PXMoviePresenter.h"
#import "PXOneUpPresentation.h"
#import "PXPhotosDetailsHeaderPreviewTile.h"
#import "PXSectionedSelectionManager.h"
#import "PXWidgetSpec.h"

@interface PXPhotosDetailsHeaderTileWidget : NSObject <PXTileSource, PXTilingControllerTransitionDelegate, PXReusableObjectPoolDelegate, UIGestureRecognizerDelegate, PXChangeObserver, PXPhotosDataSourceChangeObserver, PXPhotosDetailsHeaderTileLayoutDelegate, PXUIPlayButtonTileDelegate, PXUIWidget, PXDiagnosticsEnvironment>

 {
    NSObject<OS_dispatch_queue> *_internalWorkQueue;
    PXPhotosDetailsHeaderSpecManager *_specManager;
    PXTilingController *_tilingController;
    PXPhotoKitUIMediaProvider *_mediaProvider;
    PXReusableObjectPool *_tilePool;
    NSMutableSet *_tilesInUse;
    PXBasicUIViewTileAnimator *_tileAnimator;
    PXUITapGestureRecognizer *_tapGestureRecognizer;
    PXUITapGestureRecognizer *_pressGestureRecognizer;
    PXImageRequester *_primaryAssetImageRequester;
    CGRect _keyAssetCropRect;
    ? _needsUpdateFlags;
}


@property (retain, nonatomic, setter=_setAssetCollection:) PHAssetCollection *_assetCollection; // ivar: __assetCollection
@property (nonatomic, getter=_isBasicContentLoaded, setter=_setBasicContentLoaded:) BOOL _basicContentLoaded; // ivar: __basicContentLoaded
@property (nonatomic, setter=_setContentSize:) CGSize _contentSize; // ivar: __contentSize
@property (retain, nonatomic, setter=_setCuratedAssetCollection:) PHAssetCollection *_curatedAssetCollection; // ivar: __curatedAssetCollection
@property (retain, nonatomic, setter=_setHeaderSpec:) PXPhotosDetailsHeaderSpec *_headerSpec; // ivar: __headerSpec
@property (retain, nonatomic, setter=_setKeyAssetsFetchResult:) PHFetchResult *_keyAssetsFetchResult; // ivar: __keyAssetsFetchResult
@property (retain, nonatomic, setter=_setLoadCoordinationToken:) PXPhotosDetailsLoadCoordinationToken *_loadCoordinationToken; // ivar: __loadCoordinationToken
@property (retain, nonatomic, setter=_setPhotosDataSource:) PXPhotosDataSource *_photosDataSource; // ivar: __photosDataSource
@property (retain, nonatomic, setter=_setPlayButtonTile:) PXUIPlayButtonTile *_playButtonTile; // ivar: __playButtonTile
@property (retain, nonatomic, setter=_setTitleTile:) PXTitleSubtitleUILabelTile *_titleTile; // ivar: __titleTile
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (nonatomic) BOOL canLoadContentData; // ivar: _canLoadContentData
@property (readonly, nonatomic) NSInteger contentLayoutStyle;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) NSInteger contentViewAnchoringType;
@property (retain, nonatomic) PXPhotosDetailsContext *context; // ivar: _context
@property (readonly, nonatomic) BOOL cursorInteractionEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat extraSpaceNeededAtContentBottom;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (nonatomic, setter=_setHasLoadedContentData:) BOOL hasLoadedContentData; // ivar: _hasLoadedContentData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) CGSize maxVisibleSizeInEditMode;
@property (retain, nonatomic) PXMoviePresenter *moviePresenter; // ivar: _moviePresenter
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *presentedKeyAsset;
@property (retain, nonatomic) PXPhotosDetailsHeaderPreviewTile *previewTile; // ivar: _previewTile
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (retain, nonatomic) PXWidgetSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled
@property (readonly, nonatomic) BOOL wantsFocus;
@property (weak, nonatomic) NSObject<PXWidgetDelegate> *widgetDelegate; // ivar: _widgetDelegate
@property (weak, nonatomic) NSObject<PXWidgetEditingDelegate> *widgetEditingDelegate;
@property (weak, nonatomic) NSObject<PXWidgetInteractionDelegate> *widgetInteractionDelegate;
@property (weak, nonatomic) NSObject<PXWidgetUnlockDelegate> *widgetUnlockDelegate;


+(BOOL)canShowMovieHeaderForDataSource:(id)arg0 ;
+(CGFloat)preferredHeaderContentHeightForWidth:(CGFloat)arg0 screen:(id)arg1 ;
-(*void)_tileForIdentifier:(struct PXTileIdentifier )arg0 layout:(id)arg1 ;
-(*void)checkOutTileForIdentifier:(struct PXTileIdentifier )arg0 layout:(id)arg1 ;
-(BOOL)_isPointWithinCurrentLayoutBounds:(struct CGPoint )arg0 ;
-(BOOL)_needsUpdate;
-(BOOL)_showPlaceholder;
-(BOOL)_startMovie;
-(BOOL)containsPoint:(struct CGPoint )arg0 forCoordinateSpace:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)preferredContentHeightForWidth:(CGFloat)arg0 ;
-(id)_contentRegionOfInterestForTileWithIdentifier:(struct PXTileIdentifier )arg0 ;
-(id)_playButtonLocalizedTitle;
-(id)_scrollViewController;
-(id)_subtitle;
-(id)_title;
-(id)_titleFontName;
-(id)createHeaderSnapshotViewForMemoryCreationAnimation;
-(id)extendedTraitCollection;
-(id)init;
-(id)keyAsset;
-(id)photosDetailsHeaderTileLayoutFontName:(id)arg0 ;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)regionOfInterestForContext:(id)arg0 ;
-(id)tilingController:(id)arg0 tileIdentifierConverterForChange:(id)arg1 ;
-(id)tilingController:(id)arg0 transitionAnimationCoordinatorForChange:(id)arg1 ;
-(id)viewToBeFocused;
-(struct CGRect )_contentRectInCoordinateSpace:(id)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(struct CGRect )photosDetailsHeaderTileLayout:(id)arg0 contentsRectForAspectRatio:(CGFloat)arg1 ;
-(struct CGSize )_playButtonSize;
-(struct CGSize )photosDetailsHeaderTileLayoutPlayButtonSize:(id)arg0 ;
-(void)_filterOutVideosFromAssetCollection:(id)arg0 filteredAssetCollection:(*id)arg1 assets:(*id)arg2 ;
-(void)_handleTapGesture:(id)arg0 ;
-(void)_invalidateAssetCollection;
-(void)_invalidateCuratedAssetCollection;
-(void)_invalidateKeyAssets;
-(void)_loadBasicContent;
-(void)_updateAssetCollectionIfNeeded;
-(void)_updateBasicContent;
-(void)_updateCuratedAssetCollectionIfNeeded;
-(void)_updateKeyAssetCropRect;
-(void)_updateKeyAssetsIfNeeded;
-(void)_updateLayoutStyle;
-(void)_updatePreview;
-(void)_updateTitleTile;
-(void)checkInTile:(*void)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)loadContentData;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photosDataSource:(id)arg0 didChange:(id)arg1 ;
-(void)playButtonTileWasTapped:(id)arg0 ;
-(void)playMovieWithCompletionHandler:(id)arg0 ;
-(void)setContentSize:(struct CGSize )arg0 ;


@end


#endif