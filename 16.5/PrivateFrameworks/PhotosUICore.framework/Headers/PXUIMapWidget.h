// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXUIMAPWIDGET_H
#define PXUIMAPWIDGET_H

@class PXPlacesMapViewPort, NSMutableDictionary, NSString, UIView, PXPlacesSnapshotFactory, NSMutableArray, UIButton, UIImageView, UIFont;
@protocol PXPhotosDataSourceChangeObserver, PXPlacesMapLocationEditDelegate, PXPhotosDetailsLocationSearchDelegate, UIContextMenuInteractionDelegate, PXUIWidget, OS_os_log, PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

#import <Foundation/Foundation.h>

#import "PXImageUIView.h"
#import "PXPlacesMapFetchResultViewController.h"
#import "PXAssetActionManager.h"
#import "PXTilingController.h"
#import "PXPhotosDetailsContext.h"
#import "PXOneUpPresentation.h"
#import "PXSectionedSelectionManager.h"
#import "PXWidgetSpec.h"

@interface PXUIMapWidget : NSObject <PXPhotosDataSourceChangeObserver, PXPlacesMapLocationEditDelegate, PXPhotosDetailsLocationSearchDelegate, UIContextMenuInteractionDelegate, PXUIWidget>

 {
    CGSize _contentSize;
    PXPlacesMapViewPort *_viewPort;
    BOOL _didDisplayContentView;
    BOOL _isLoaded;
    NSMutableDictionary *_fetchedImages;
    NSInteger _lastFetchedBoundingRectAssetCount;
    NSObject<OS_os_log> *_logger;
}


@property (retain, nonatomic) NSString *_cachedDisclosureTitle; // ivar: __cachedDisclosureTitle
@property (retain, nonatomic) NSString *_cachedLocalizedTitle; // ivar: __cachedLocalizedTitle
@property (readonly, nonatomic) UIView *_containerView; // ivar: __containerView
@property (readonly, nonatomic) UIView *_contentView; // ivar: __contentView
@property (retain, nonatomic) PXPlacesSnapshotFactory *_factory; // ivar: __factory
@property (readonly, nonatomic) BOOL _hasLocation;
@property (readonly, nonatomic) PXImageUIView *_imageView; // ivar: __imageView
@property (readonly, nonatomic) PXPlacesMapFetchResultViewController *_mapViewController; // ivar: __mapViewController
@property (retain, nonatomic) NSMutableArray *_nearbyCountCompletionBlocks; // ivar: __nearbyCountCompletionBlocks
@property (weak, nonatomic) PXPlacesMapFetchResultViewController *_presentedMapViewController; // ivar: __presentedMapViewController
@property (readonly, nonatomic) UIButton *adjustButton; // ivar: _adjustButton
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (retain, nonatomic) NSString *cachedFooterTitle; // ivar: _cachedFooterTitle
@property (readonly, nonatomic) UIImageView *chevronImageView; // ivar: _chevronImageView
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
@property (readonly, nonatomic) UIButton *footerButton; // ivar: _footerButton
@property (readonly, nonatomic) UIFont *footerFont; // ivar: _footerFont
@property (nonatomic) CGFloat footerHeight; // ivar: _footerHeight
@property (readonly, nonatomic) UIView *footerView; // ivar: _footerView
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (nonatomic, setter=_setHasLoadedContentData:) BOOL hasLoadedContentData; // ivar: _hasLoadedContentData
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat height; // ivar: _height
@property (readonly, nonatomic) BOOL isInEditMode;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) CGSize maxVisibleSizeInEditMode;
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (nonatomic) BOOL showAddressLink; // ivar: _showAddressLink
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
@property (weak, nonatomic) NSObject<PXWidgetUnlockDelegate> *widgetUnlockDelegate; // ivar: _widgetUnlockDelegate


+(id)sharedSnapshotRequestConcurrentQueue;
-(BOOL)_containsLocationInPasteboard;
-(BOOL)_forceRevGeoUpdate;
-(BOOL)_hasCachedSnapshotImageForKey:(id)arg0 ;
-(BOOL)_requiresDetailedAddressFooterString;
-(BOOL)infoPanelLayoutEnabled;
-(CGFloat)preferredContentHeightForWidth:(CGFloat)arg0 ;
-(NSInteger)_fetchCountOfAssetsWithLocation;
-(id)_copyLocationAction;
-(id)_createSnapshotOptions;
-(id)_fetchResultsForSections;
-(id)_firstAsset;
-(id)_localizedGeoDescriptionForAsset:(id)arg0 ;
-(id)_mapViewControllerWithContentMode:(NSUInteger)arg0 ;
-(id)_pasteLocationAction;
-(id)_snapshotOptionsForExtendedTraitCollection:(id)arg0 queue:(id)arg1 viewSize:(struct CGSize )arg2 snapshotMapType:(NSUInteger)arg3 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)init;
-(id)standaloneMapViewController;
-(struct CGSize )_estimatedMapViewImageSize;
-(void)_clipboardChanged:(id)arg0 ;
-(void)_copyLocationTapped;
-(void)_didTapAdjustLocation;
-(void)_fetchPlacesSnapshotUsingMapType:(NSUInteger)arg0 fetchResults:(id)arg1 imageSize:(struct CGSize )arg2 shouldFetchNearbyAssetCount:(BOOL)arg3 ;
-(void)_generateSnapshotsForExtendedTraitCollection:(id)arg0 placesUtils:(id)arg1 queue:(id)arg2 size:(struct CGSize )arg3 snapshotMapType:(NSUInteger)arg4 fetchResults:(id)arg5 shouldFetchNearbyAssetCount:(BOOL)arg6 ;
-(void)_handleContentSizeCategoryDidChange:(id)arg0 ;
-(void)_handleSnapshotResponse:(id)arg0 viewPort:(id)arg1 snapshotMapType:(NSUInteger)arg2 shouldFetchNearbyAssetCount:(BOOL)arg3 fetchedImageKey:(id)arg4 error:(id)arg5 userInterfaceStyle:(NSInteger)arg6 ;
-(void)_handleTapGestureRecognizer:(id)arg0 ;
-(void)_layoutSubviews;
-(void)_loadContainerView;
-(void)_loadMapDataWithFetchResultsController:(id)arg0 ;
-(void)_openMapsAtCoordinate:(struct CLLocationCoordinate2D )arg0 title:(id)arg1 ;
-(void)_pasteLocationTapped;
-(void)_presentLocationSearchPicker;
-(void)_reloadFooterTitle;
-(void)_setImage:(id)arg0 animated:(BOOL)arg1 ;
-(void)_showPlaceholder;
-(void)_showPlacesWithContentMode:(NSUInteger)arg0 ;
-(void)_updateContentViewFrame;
-(void)_updateFooterButton;
-(void)_updateFooterContextMenu;
-(void)_updateFooterHeight;
-(void)_updateFooterWithTitle:(id)arg0 ;
-(void)_updateHeight;
-(void)controllerTraitCollectionDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)dealloc;
-(void)loadContentData;
-(void)mapFetchResultsViewControllerDidSelectEditLocation:(id)arg0 ;
-(void)photosDataSource:(id)arg0 didChange:(id)arg1 ;
-(void)setContentSize:(struct CGSize )arg0 ;
-(void)unloadContentData;
-(void)userDidSelectDisclosureControl;
-(void)userDidSelectFooter:(id)arg0 ;


@end


#endif