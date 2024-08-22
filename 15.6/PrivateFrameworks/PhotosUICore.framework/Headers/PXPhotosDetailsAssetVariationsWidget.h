// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSDETAILSASSETVARIATIONSWIDGET_H
#define PXPHOTOSDETAILSASSETVARIATIONSWIDGET_H

@class UICollectionView, UILabel, PHAsset, AVAsset, UIImage, NSString;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver, PXUIWidget, PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

#import <Foundation/Foundation.h>

#import "PXAssetVariationsDataSourceManager.h"
#import "PXPhotoKitAssetActionManager.h"
#import "PXAssetVariationRenderProvider.h"
#import "PXActionPerformer.h"
#import "_PXAssetVariationsContentView.h"
#import "PXAssetVariationsDataSource.h"
#import "PXPhotosDetailsLoadCoordinationToken.h"
#import "PXAssetActionManager.h"
#import "PXTilingController.h"
#import "PXPhotosDetailsContext.h"
#import "PXAssetEditOperationManager.h"
#import "PXAssetVariationCollectionViewCell.h"
#import "PXOneUpPresentation.h"
#import "PXSectionedSelectionManager.h"
#import "PXWidgetSpec.h"

@interface PXPhotosDetailsAssetVariationsWidget : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver, PXUIWidget>

 {
    UICollectionView *_collectionView;
    PXAssetVariationsDataSourceManager *_dataSourceManager;
    CGSize _contentSize;
    PXPhotoKitAssetActionManager *_actionManager;
    PXAssetVariationRenderProvider *_previewRenderProvider;
    PXActionPerformer *_actionPerformer;
    _PXAssetVariationsContentView *_contentView;
    UILabel *_failureView;
    BOOL _didSetInitialScrollPosition;
    int _placeholderImageRequestID;
    int _existingVideoRequestID;
    ? _needsUpdateFlags;
    BOOL _isDismissingForSelection;
}


@property (retain, nonatomic, setter=_setAsset:) PHAsset *_asset; // ivar: __asset
@property (nonatomic, setter=_setContentInsets:) UIEdgeInsets _contentInsets; // ivar: __contentInsets
@property (nonatomic, getter=_isContentViewVisible, setter=_setContentViewVisible:) BOOL _contentViewVisible; // ivar: __contentViewVisible
@property (retain, nonatomic, setter=_setDataSource:) PXAssetVariationsDataSource *_dataSource; // ivar: __dataSource
@property (retain, nonatomic, setter=_setExistingVideoAsset:) AVAsset *_existingVideoAsset; // ivar: __existingVideoAsset
@property (retain, nonatomic, setter=_setLoadCoordinationToken:) PXPhotosDetailsLoadCoordinationToken *_loadCoordinationToken; // ivar: __loadCoordinationToken
@property (retain, nonatomic, setter=_setPlaceholderImage:) UIImage *_placeholderImage; // ivar: __placeholderImage
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (readonly, nonatomic) UIEdgeInsets collectionContentInsets; // ivar: _collectionContentInsets
@property (readonly, nonatomic) NSInteger contentLayoutStyle;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) NSInteger contentViewAnchoringType;
@property (retain, nonatomic) PXPhotosDetailsContext *context; // ivar: _context
@property (readonly, nonatomic) BOOL cursorInteractionEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXAssetEditOperationManager *editOperationManager;
@property (readonly, nonatomic) CGFloat extraSpaceNeededAtContentBottom;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (nonatomic, setter=_setHasLoadedContentData:) BOOL hasLoadedContentData; // ivar: _hasLoadedContentData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (retain, nonatomic, setter=_setLocalizedDisclosureTitle:) NSString *localizedDisclosureTitle; // ivar: _localizedDisclosureTitle
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) CGSize maxVisibleSizeInEditMode;
@property (readonly, nonatomic) PXAssetVariationCollectionViewCell *measuringCell; // ivar: _measuringCell
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (retain, nonatomic) PXWidgetSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL wantsFocus;
@property (weak, nonatomic) NSObject<PXWidgetDelegate> *widgetDelegate; // ivar: _widgetDelegate
@property (weak, nonatomic) NSObject<PXWidgetEditingDelegate> *widgetEditingDelegate;
@property (weak, nonatomic) NSObject<PXWidgetInteractionDelegate> *widgetInteractionDelegate;
@property (weak, nonatomic) NSObject<PXWidgetUnlockDelegate> *widgetUnlockDelegate;


+(void)preloadResources;
-(BOOL)_needsUpdate;
-(CGFloat)preferredContentHeightForWidth:(CGFloat)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_cellReuseIdentifierForVariationType:(NSInteger)arg0 ;
-(id)_newLayoutForSize:(struct CGSize )arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)init;
-(struct CGSize )_itemSizeForViewSize:(struct CGSize )arg0 ;
-(void)_commitEditWithVariationType:(NSInteger)arg0 ;
-(void)_handleExistingVideoResult:(id)arg0 info:(id)arg1 ;
-(void)_handlePlaceholderImageResult:(id)arg0 info:(id)arg1 ;
-(void)_invalidateDisclosureTitle;
-(void)_invalidateExistingVideo;
-(void)_invalidateInitialScrollPosition;
-(void)_invalidateLayout;
-(void)_invalidateMetrics;
-(void)_invalidatePlaceholderImage;
-(void)_invalidateRenderProvider;
-(void)_invalidateViews;
-(void)_invalidateVisibleCells;
-(void)_invalidateviewsConfiguration;
-(void)_logLivePhotoEffectSelected:(NSInteger)arg0 ;
-(void)_presentStatusAlert;
-(void)_setNeedsUpdate;
-(void)_updateDisclosureTitleIfNeeded;
-(void)_updateExistingVideoIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateInitialScrollPositionIfNeeded;
-(void)_updateLayoutIfNeeded;
-(void)_updateMetricsIfNeeded;
-(void)_updatePlaceholderImageIfNeeded;
-(void)_updateRenderProviderIfNeeded;
-(void)_updateViewsIfNeeded;
-(void)_updateVisibleCellsIfNeeded;
-(void)_updateviewsConfigurationIfNeeded;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)setContentSize:(struct CGSize )arg0 ;
-(void)userDidSelectDisclosureControl;


@end


#endif