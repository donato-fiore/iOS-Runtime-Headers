// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCONTENTSYNDICATIONSETTINGS_H
#define PXCONTENTSYNDICATIONSETTINGS_H

@class NSString, UIImage;


#import "PXSettings.h"

@interface PXContentSyndicationSettings : PXSettings

@property (nonatomic) BOOL alwaysLeadingAlignAttributionViewOnRegularWidthPads; // ivar: _alwaysLeadingAlignAttributionViewOnRegularWidthPads
@property (nonatomic) CGFloat blackOverlayForFirstThumbnail; // ivar: _blackOverlayForFirstThumbnail
@property (nonatomic) CGFloat blackOverlayForSecondThumbnail; // ivar: _blackOverlayForSecondThumbnail
@property (nonatomic) CGFloat blackOverlayForThirdThumbnail; // ivar: _blackOverlayForThirdThumbnail
@property (nonatomic) CGFloat blurRadius; // ivar: _blurRadius
@property (nonatomic) BOOL contentSyndicationEnabled; // ivar: _contentSyndicationEnabled
@property (nonatomic) CGFloat darkeningOverlayOpacity; // ivar: _darkeningOverlayOpacity
@property (nonatomic) NSInteger dataSourceType; // ivar: _dataSourceType
@property (nonatomic) BOOL delayLoadingActualDataSourceUntilAfterLaunch; // ivar: _delayLoadingActualDataSourceUntilAfterLaunch
@property (nonatomic) BOOL enableCustomTreatmentInDays; // ivar: _enableCustomTreatmentInDays
@property (nonatomic) BOOL enableFilteringCuratedGridsForContentSyndication; // ivar: _enableFilteringCuratedGridsForContentSyndication
@property (nonatomic) BOOL enableStackAspectRatio; // ivar: _enableStackAspectRatio
@property (nonatomic) BOOL enableStackSmartCrop; // ivar: _enableStackSmartCrop
@property (nonatomic) NSInteger footerMockType; // ivar: _footerMockType
@property (nonatomic) BOOL ignoreSocialLayerEnablement; // ivar: _ignoreSocialLayerEnablement
@property (copy, nonatomic) NSString *inlineAssetBadgeGlyphName; // ivar: _inlineAssetBadgeGlyphName
@property (nonatomic) NSInteger inlineAssetStyle; // ivar: _inlineAssetStyle
@property (nonatomic) CGFloat innerCornerRadius; // ivar: _innerCornerRadius
@property (nonatomic) CGFloat insetScale; // ivar: _insetScale
@property (nonatomic) NSInteger itemCellBlurStyle; // ivar: _itemCellBlurStyle
@property (retain, nonatomic) NSString *libraryStateBriefDescription; // ivar: _libraryStateBriefDescription
@property (retain, nonatomic) UIImage *libraryStateImage; // ivar: _libraryStateImage
@property (nonatomic) BOOL loadVerySmallInitialBatchOfRecentCollections; // ivar: _loadVerySmallInitialBatchOfRecentCollections
@property (nonatomic) NSUInteger maxNumberOfAssetsPerBatch; // ivar: _maxNumberOfAssetsPerBatch
@property (nonatomic) NSUInteger maxNumberOfBatches; // ivar: _maxNumberOfBatches
@property (nonatomic) BOOL mockNumberOfAssetsSaved; // ivar: _mockNumberOfAssetsSaved
@property (nonatomic) NSUInteger numberOfMinutesToShowPillUIAfterSaving; // ivar: _numberOfMinutesToShowPillUIAfterSaving
@property (nonatomic) CGFloat outerCornerRadius; // ivar: _outerCornerRadius
@property (nonatomic) BOOL preventActualRemoveSuggestionBehavior; // ivar: _preventActualRemoveSuggestionBehavior
@property (nonatomic) BOOL preventActualSaveToLibraryBehavior; // ivar: _preventActualSaveToLibraryBehavior
@property (nonatomic) NSInteger reviewScope; // ivar: _reviewScope
@property (nonatomic) NSInteger savedAssetViewVisibility; // ivar: _savedAssetViewVisibility
@property (nonatomic) BOOL shouldHorizontallyCenterAttributionViewInGrid; // ivar: _shouldHorizontallyCenterAttributionViewInGrid
@property (nonatomic) BOOL shouldMockChallengeQuestions; // ivar: _shouldMockChallengeQuestions
@property (nonatomic) BOOL showContentSyndicationInSystemPhotoLibraryOnly; // ivar: _showContentSyndicationInSystemPhotoLibraryOnly
@property (nonatomic) BOOL showSidebarItemEvenIfNoSyndicatedContentAvailable; // ivar: _showSidebarItemEvenIfNoSyndicatedContentAvailable
@property (nonatomic) BOOL showSyndicated1upPillUI; // ivar: _showSyndicated1upPillUI
@property (nonatomic) BOOL showSyndicatedContentInLibrary; // ivar: _showSyndicatedContentInLibrary
@property (nonatomic) BOOL showSyndicatedContentWidgetForGuestAssets; // ivar: _showSyndicatedContentWidgetForGuestAssets
@property (nonatomic) BOOL showSyndicatedContentWidgetForSavedAssets; // ivar: _showSyndicatedContentWidgetForSavedAssets
@property (nonatomic) NSInteger syndicated1upPillAlignment; // ivar: _syndicated1upPillAlignment
@property (nonatomic) BOOL treatEveryAssetAsGuest; // ivar: _treatEveryAssetAsGuest
@property (nonatomic) BOOL useRandomStatusForReview; // ivar: _useRandomStatusForReview
@property (nonatomic) BOOL useSystemLibraryForReview; // ivar: _useSystemLibraryForReview
@property (nonatomic) BOOL useUserLibraryForSyndicatedAssets; // ivar: _useUserLibraryForSyndicatedAssets
@property (nonatomic) NSInteger visualTreatmentStyle; // ivar: _visualTreatmentStyle
@property (nonatomic) BOOL waitForAndLogAssetArrivalWhenSaving; // ivar: _waitForAndLogAssetArrivalWhenSaving


+(id)_createDataSourceSection;
+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif