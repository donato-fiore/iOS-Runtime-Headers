// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSVIEWCONFIGURATION_H
#define PXPHOTOSVIEWCONFIGURATION_H

@class NSArray, NSString;
@protocol NSCopying, PXAssetImportStatusManager, PXPhotosViewDelegate, PXPhotosGridOptionsController, PXPhotosPreferredAssetCropDelegate, PXPhotosSectionBodyLayoutProvider, PXTapbackStatusManager;

#import <Foundation/Foundation.h>

#import "PXAssetActionManager.h"
#import "PXAssetCollectionActionManager.h"
#import "PXAssetsDataSourceManager.h"
#import "PXStatusViewModel.h"
#import "PXFooterViewModel.h"
#import "PXLoadingStatusManager.h"
#import "PXMediaProvider.h"
#import "PXContentPrivacyController.h"
#import "PXSectionedSelectionManager.h"

@interface PXPhotosViewConfiguration : NSObject <NSCopying>



@property (nonatomic) NSUInteger allowedActions; // ivar: _allowedActions
@property (nonatomic) NSUInteger allowedBehaviors; // ivar: _allowedBehaviors
@property (nonatomic) BOOL allowsCaptions; // ivar: _allowsCaptions
@property (nonatomic) BOOL allowsDragAndDrop; // ivar: _allowsDragAndDrop
@property (nonatomic) BOOL allowsDragOutOnly; // ivar: _allowsDragOutOnly
@property (nonatomic) BOOL allowsGridAppearanceActions; // ivar: _allowsGridAppearanceActions
@property (nonatomic) BOOL allowsInteractiveFavoriteBadges; // ivar: _allowsInteractiveFavoriteBadges
@property (nonatomic) BOOL allowsLinkInteractions; // ivar: _allowsLinkInteractions
@property (nonatomic) BOOL allowsMergeDuplicatesAction; // ivar: _allowsMergeDuplicatesAction
@property (nonatomic) BOOL allowsMultiSelectMenu; // ivar: _allowsMultiSelectMenu
@property (nonatomic) BOOL allowsSwipeToSelect; // ivar: _allowsSwipeToSelect
@property (nonatomic) BOOL allowsUserDefaults; // ivar: _allowsUserDefaults
@property (nonatomic) BOOL alwaysIncludeSharedWithYouAssets; // ivar: _alwaysIncludeSharedWithYouAssets
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager; // ivar: _assetActionManager
@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager; // ivar: _assetCollectionActionManager
@property (retain, nonatomic) NSObject<PXAssetImportStatusManager> *assetImportStatusManager; // ivar: _assetImportStatusManager
@property (retain, nonatomic) NSArray *assetUUIDsAllowedToHighlightOCRText; // ivar: _assetUUIDsAllowedToHighlightOCRText
@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (copy, nonatomic) id *badgesModifier; // ivar: _badgesModifier
@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (nonatomic) NSInteger contentStartingPosition; // ivar: _contentStartingPosition
@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (retain, nonatomic) Class decorationViewClass; // ivar: _decorationViewClass
@property (weak, nonatomic) NSObject<PXPhotosViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PXStatusViewModel *emptyPlaceholderStatusViewModel; // ivar: _emptyPlaceholderStatusViewModel
@property (copy, nonatomic) NSString *footerSubtitle; // ivar: _footerSubtitle
@property (retain, nonatomic) PXFooterViewModel *footerViewModel; // ivar: _footerViewModel
@property (nonatomic) NSInteger footerVisibilityStyle; // ivar: _footerVisibilityStyle
@property (nonatomic) NSUInteger forbiddenBadges; // ivar: _forbiddenBadges
@property (nonatomic) NSInteger gridStyle; // ivar: _gridStyle
@property (nonatomic) BOOL ignoreContentFilterStateWhenNotFiltering; // ivar: _ignoreContentFilterStateWhenNotFiltering
@property (copy, nonatomic) id *infoActionHandler; // ivar: _infoActionHandler
@property (nonatomic) BOOL isEmbedded; // ivar: _isEmbedded
@property (nonatomic) CGFloat itemAspectRatio; // ivar: _itemAspectRatio
@property (retain, nonatomic) PXLoadingStatusManager *loadingStatusManager; // ivar: _loadingStatusManager
@property (nonatomic) BOOL lowMemoryMode; // ivar: _lowMemoryMode
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (nonatomic) NSInteger navBarStyle; // ivar: _navBarStyle
@property (nonatomic) NSInteger noContentPlaceholderType; // ivar: _noContentPlaceholderType
@property (retain, nonatomic) NSArray *ocrTextToHighlight; // ivar: _ocrTextToHighlight
@property (nonatomic) NSInteger oneUpPresentationOrigin; // ivar: _oneUpPresentationOrigin
@property (retain, nonatomic) NSObject<PXPhotosGridOptionsController> *optionsController; // ivar: _optionsController
@property (weak, nonatomic) NSObject<PXPhotosPreferredAssetCropDelegate> *preferredAssetCropDelegate; // ivar: _preferredAssetCropDelegate
@property (nonatomic) BOOL prefersActionsInToolbar; // ivar: _prefersActionsInToolbar
@property (retain, nonatomic) PXContentPrivacyController *privacyController; // ivar: _privacyController
@property (nonatomic) BOOL providesOneUpActionManager; // ivar: _providesOneUpActionManager
@property (retain, nonatomic) NSObject<PXPhotosSectionBodyLayoutProvider> *sectionBodyLayoutProvider; // ivar: _sectionBodyLayoutProvider
@property (nonatomic) NSInteger sectionBodyStyle; // ivar: _sectionBodyStyle
@property (nonatomic) NSInteger sectionHeaderStyle; // ivar: _sectionHeaderStyle
@property (nonatomic) NSInteger selectionContextOverride; // ivar: _selectionContextOverride
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (nonatomic) BOOL shouldOptOutOfChromelessBars; // ivar: _shouldOptOutOfChromelessBars
@property (nonatomic) BOOL showLoadingPlaceholderWhenEmpty; // ivar: _showLoadingPlaceholderWhenEmpty
@property (nonatomic) BOOL startsInSelectMode; // ivar: _startsInSelectMode
@property (nonatomic) NSInteger summaryStyle; // ivar: _summaryStyle
@property (retain, nonatomic) NSObject<PXTapbackStatusManager> *tapbackStatusManager; // ivar: _tapbackStatusManager
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL wantsCPLStatus; // ivar: _wantsCPLStatus
@property (nonatomic) BOOL wantsContentFilterVisible; // ivar: _wantsContentFilterVisible
@property (nonatomic) BOOL wantsDimmedSelectionStyle; // ivar: _wantsDimmedSelectionStyle
@property (nonatomic) BOOL wantsFileSizeBadge; // ivar: _wantsFileSizeBadge
@property (nonatomic) BOOL wantsFooterVisibleImmediately; // ivar: _wantsFooterVisibleImmediately
@property (nonatomic) BOOL wantsModernNavBarButtons; // ivar: _wantsModernNavBarButtons
@property (nonatomic) BOOL wantsNumberedSelectionStyle; // ivar: _wantsNumberedSelectionStyle
@property (nonatomic) BOOL wantsOneUpShowInLibraryButton; // ivar: _wantsOneUpShowInLibraryButton
@property (nonatomic) BOOL wantsRenderingStatus; // ivar: _wantsRenderingStatus
@property (nonatomic) BOOL wantsTabBarHidden; // ivar: _wantsTabBarHidden


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDataSourceManager:(id)arg0 mediaProvider:(id)arg1 selectionManager:(id)arg2 assetActionManager:(id)arg3 assetCollectionActionManager:(id)arg4 ;


@end


#endif