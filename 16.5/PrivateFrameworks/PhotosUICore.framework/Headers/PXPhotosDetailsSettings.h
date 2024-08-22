// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSDETAILSSETTINGS_H
#define PXPHOTOSDETAILSSETTINGS_H



#import "PXSettings.h"

@interface PXPhotosDetailsSettings : PXSettings

@property (nonatomic) CGFloat addToTabDuration; // ivar: _addToTabDuration
@property (nonatomic) CGFloat addToTabEndRotation; // ivar: _addToTabEndRotation
@property (nonatomic) CGFloat addToTabFadeOutDelay; // ivar: _addToTabFadeOutDelay
@property (nonatomic) CGFloat addToTabOpacity; // ivar: _addToTabOpacity
@property (nonatomic) CGFloat addToTabRotationDelay; // ivar: _addToTabRotationDelay
@property (nonatomic) CGFloat addToTabScaleDelay; // ivar: _addToTabScaleDelay
@property (nonatomic) BOOL addToTabSimulate; // ivar: _addToTabSimulate
@property (nonatomic) CGFloat addToTabTranslationDelay; // ivar: _addToTabTranslationDelay
@property (nonatomic) BOOL allowEditorialLayoutStressTest; // ivar: _allowEditorialLayoutStressTest
@property (nonatomic) BOOL allowMultiColumnLayout; // ivar: _allowMultiColumnLayout
@property (nonatomic) BOOL allowWidgetsContentLoading; // ivar: _allowWidgetsContentLoading
@property (nonatomic) BOOL allowsTopTrailingSelectCancelButton; // ivar: _allowsTopTrailingSelectCancelButton
@property (nonatomic) CGFloat assetsWidgetPlaceholderAspectRatio; // ivar: _assetsWidgetPlaceholderAspectRatio
@property (nonatomic) BOOL captionWidgetEnableDirectAttachToMaster; // ivar: _captionWidgetEnableDirectAttachToMaster
@property (nonatomic) BOOL captionWidgetEnableFadeInEffect; // ivar: _captionWidgetEnableFadeInEffect
@property (nonatomic) BOOL captionWidgetEnableHashtags; // ivar: _captionWidgetEnableHashtags
@property (nonatomic) BOOL captionWidgetEnableVScrollingInEdit; // ivar: _captionWidgetEnableVScrollingInEdit
@property (nonatomic) CGFloat captionWidgetFadeInDuration; // ivar: _captionWidgetFadeInDuration
@property (nonatomic) NSInteger curationAlgorithm; // ivar: _curationAlgorithm
@property (nonatomic) NSInteger debugBadgeInfoType; // ivar: _debugBadgeInfoType
@property (nonatomic) CGFloat defaultPriorityWidgetsLoadingDelay; // ivar: _defaultPriorityWidgetsLoadingDelay
@property (nonatomic) NSInteger detailViewsToKeepLoaded; // ivar: _detailViewsToKeepLoaded
@property (nonatomic) BOOL draggableInfoPanelEnabled; // ivar: _draggableInfoPanelEnabled
@property (nonatomic) NSInteger editorialLayoutActivityFeedItemCountThreshold; // ivar: _editorialLayoutActivityFeedItemCountThreshold
@property (nonatomic) BOOL editorialLayoutAvoidSmallestTile; // ivar: _editorialLayoutAvoidSmallestTile
@property (nonatomic) NSInteger editorialLayoutColumns; // ivar: _editorialLayoutColumns
@property (nonatomic) BOOL editorialLayoutEdit; // ivar: _editorialLayoutEdit
@property (nonatomic) NSInteger editorialLayoutTargetRowsForChunk; // ivar: _editorialLayoutTargetRowsForChunk
@property (nonatomic) BOOL formattedLensStringsEnabled; // ivar: _formattedLensStringsEnabled
@property (nonatomic) BOOL loadAllWidgetsContentAfterDelay; // ivar: _loadAllWidgetsContentAfterDelay
@property (nonatomic) BOOL loadAllWidgetsContentOnScroll; // ivar: _loadAllWidgetsContentOnScroll
@property (nonatomic) BOOL mapWidgetAllowCopyPasteLocation; // ivar: _mapWidgetAllowCopyPasteLocation
@property (nonatomic) BOOL peopleWidgetDisableSocialGroup; // ivar: _peopleWidgetDisableSocialGroup
@property (nonatomic) NSInteger peopleWidgetMaximumNumberOfPeople; // ivar: _peopleWidgetMaximumNumberOfPeople
@property (nonatomic) BOOL placesWidgetShowOnlyPlaceholder; // ivar: _placesWidgetShowOnlyPlaceholder
@property (nonatomic) BOOL purgeOnMemoryWarning; // ivar: _purgeOnMemoryWarning
@property (nonatomic) BOOL showActionableLivePhotosBadge; // ivar: _showActionableLivePhotosBadge
@property (nonatomic) BOOL showActionsWidget; // ivar: _showActionsWidget
@property (nonatomic) BOOL showAppAttributionWidget; // ivar: _showAppAttributionWidget
@property (nonatomic) BOOL showAssetsWidget; // ivar: _showAssetsWidget
@property (nonatomic) BOOL showCaptionHashtagsWidget; // ivar: _showCaptionHashtagsWidget
@property (nonatomic) BOOL showDemoDynamicWidget; // ivar: _showDemoDynamicWidget
@property (nonatomic) BOOL showDemoTilingViewWidget; // ivar: _showDemoTilingViewWidget
@property (nonatomic) BOOL showDemoViewWidget; // ivar: _showDemoViewWidget
@property (nonatomic) BOOL showEXIFWidget; // ivar: _showEXIFWidget
@property (nonatomic) BOOL showFacesAreaRect; // ivar: _showFacesAreaRect
@property (nonatomic) BOOL showHeaderWidget; // ivar: _showHeaderWidget
@property (nonatomic) BOOL showLookUpWidgetSearchIcon; // ivar: _showLookUpWidgetSearchIcon
@property (nonatomic) BOOL showPeopleInlineCandidateWidget; // ivar: _showPeopleInlineCandidateWidget
@property (nonatomic) BOOL showPlacesWidget; // ivar: _showPlacesWidget
@property (nonatomic) BOOL showRelatedPeopleWidget; // ivar: _showRelatedPeopleWidget
@property (nonatomic) BOOL showSharedLibraryWidget; // ivar: _showSharedLibraryWidget
@property (nonatomic) BOOL showTimeWidget; // ivar: _showTimeWidget
@property (nonatomic) BOOL showVisualLookUpWidget; // ivar: _showVisualLookUpWidget
@property (nonatomic) BOOL useCuratedLibraryLayout; // ivar: _useCuratedLibraryLayout


+(id)settingsControllerModule;
+(id)sharedInstance;
+(id)transientProperties;
-(NSInteger)version;
-(id)parentSettings;
-(struct PXAssetBadgeInfo )debugBadgeInfo;
-(void)setDefaultValues;


@end


#endif