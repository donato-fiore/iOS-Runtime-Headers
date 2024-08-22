// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHARINGSETTINGS_H
#define PXSHARINGSETTINGS_H



#import "PXSettings.h"

@interface PXSharingSettings : PXSettings

@property (nonatomic) BOOL allowCopyingVideos; // ivar: _allowCopyingVideos
@property (nonatomic) BOOL allowFallbacksWhilePreparing; // ivar: _allowFallbacksWhilePreparing
@property (nonatomic) NSUInteger confidentialityWarningsVersion; // ivar: _confidentialityWarningsVersion
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) BOOL disableMailDrop; // ivar: _disableMailDrop
@property (nonatomic) BOOL disableMetadataCorrections; // ivar: _disableMetadataCorrections
@property (nonatomic) BOOL enableNewActionContextMenu; // ivar: _enableNewActionContextMenu
@property (nonatomic) BOOL enableNewActionShareSheet; // ivar: _enableNewActionShareSheet
@property (nonatomic) BOOL enableOneUpAnimation; // ivar: _enableOneUpAnimation
@property (nonatomic) BOOL excludeLivenessByDefaultWhenSharing; // ivar: _excludeLivenessByDefaultWhenSharing
@property (nonatomic) BOOL excludeLocationByDefaultWhenSharing; // ivar: _excludeLocationByDefaultWhenSharing
@property (nonatomic) NSUInteger firstRotationAngle; // ivar: _firstRotationAngle
@property (nonatomic) BOOL forceAccessibilityDescriptionMetadataBaking; // ivar: _forceAccessibilityDescriptionMetadataBaking
@property (nonatomic) BOOL forceCaptionMetadataBaking; // ivar: _forceCaptionMetadataBaking
@property (nonatomic) BOOL forceDateTimeMetadataBaking; // ivar: _forceDateTimeMetadataBaking
@property (nonatomic) BOOL forceLegacyPasteboardRepresentation; // ivar: _forceLegacyPasteboardRepresentation
@property (nonatomic) BOOL forceLocationMetadataBaking; // ivar: _forceLocationMetadataBaking
@property (nonatomic) BOOL forceNonCMMActivitiesToBeVisibleForCMM; // ivar: _forceNonCMMActivitiesToBeVisibleForCMM
@property (nonatomic) NSInteger locationBakingComparisonStrategy; // ivar: _locationBakingComparisonStrategy
@property (nonatomic) NSUInteger maxMailPhotoLimit; // ivar: _maxMailPhotoLimit
@property (nonatomic) NSUInteger maxMessagesAssetLimit; // ivar: _maxMessagesAssetLimit
@property (nonatomic) CGFloat maxShadowOffset; // ivar: _maxShadowOffset
@property (nonatomic) NSUInteger maximumNumberOfItems; // ivar: _maximumNumberOfItems
@property (nonatomic) CGFloat minShadowOffset; // ivar: _minShadowOffset
@property (nonatomic) NSUInteger rotationAngle; // ivar: _rotationAngle
@property (nonatomic) BOOL savePhotosBundlesToFilesWithoutExtractingMedia; // ivar: _savePhotosBundlesToFilesWithoutExtractingMedia
@property (nonatomic) BOOL sendAsOriginalsByDefaultWhenSharing; // ivar: _sendAsOriginalsByDefaultWhenSharing
@property (nonatomic) BOOL sendAssetURLsToMessages; // ivar: _sendAssetURLsToMessages
@property (nonatomic) CGFloat shadowOpacity; // ivar: _shadowOpacity
@property (nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius
@property (nonatomic) NSInteger sharingHeaderLocationDisplayStyle; // ivar: _sharingHeaderLocationDisplayStyle
@property (nonatomic) BOOL sharingSuggestionsWidgetAllStreamEnabled; // ivar: _sharingSuggestionsWidgetAllStreamEnabled
@property (nonatomic) BOOL sharingSuggestionsWidgetCoreDuetEnabled; // ivar: _sharingSuggestionsWidgetCoreDuetEnabled
@property (nonatomic) BOOL sharingSuggestionsWidgetHeuristicsEnabled; // ivar: _sharingSuggestionsWidgetHeuristicsEnabled
@property (nonatomic) BOOL sharingSuggestionsWidgetLearningEnabled; // ivar: _sharingSuggestionsWidgetLearningEnabled
@property (nonatomic) BOOL showConfidentialityWarnings; // ivar: _showConfidentialityWarnings
@property (nonatomic) BOOL showFileRadarButtonOnInternalInstalls; // ivar: _showFileRadarButtonOnInternalInstalls
@property (nonatomic) BOOL showGlobalLivenessExclusionSwitch; // ivar: _showGlobalLivenessExclusionSwitch
@property (nonatomic) BOOL showGlobalLocationExclusionSwitch; // ivar: _showGlobalLocationExclusionSwitch
@property (nonatomic) BOOL showInternalGIFExport; // ivar: _showInternalGIFExport
@property (nonatomic) BOOL showSecondaryActionSheet; // ivar: _showSecondaryActionSheet
@property (nonatomic) BOOL showSendAsOriginalsForCMM; // ivar: _showSendAsOriginalsForCMM
@property (nonatomic) BOOL showSendAsOriginalsForIndividualItems; // ivar: _showSendAsOriginalsForIndividualItems
@property (nonatomic) BOOL showSingleVideoDurationInShareSheetHeader; // ivar: _showSingleVideoDurationInShareSheetHeader
@property (nonatomic) BOOL simulateCPLNotReadyError; // ivar: _simulateCPLNotReadyError
@property (nonatomic) BOOL simulateDownloadFailure; // ivar: _simulateDownloadFailure
@property (nonatomic) BOOL simulateError; // ivar: _simulateError
@property (nonatomic) BOOL simulateLowDiskSpaceError; // ivar: _simulateLowDiskSpaceError
@property (nonatomic) BOOL simulateMaxFilesizeLimitForGIFsInSharedAlbumsError; // ivar: _simulateMaxFilesizeLimitForGIFsInSharedAlbumsError
@property (nonatomic) BOOL simulateMismatchedExportCounts; // ivar: _simulateMismatchedExportCounts
@property (nonatomic) BOOL simulateSyndicatedResourceUnavailable; // ivar: _simulateSyndicatedResourceUnavailable
@property (nonatomic) BOOL simulateUserCloudNotAuthenticated; // ivar: _simulateUserCloudNotAuthenticated
@property (nonatomic) NSInteger simulatedErrorType; // ivar: _simulatedErrorType
@property (nonatomic) NSUInteger verticalAdjustment; // ivar: _verticalAdjustment


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)debugDescription;
-(id)parentSettings;
-(void)defaultValueDidChangeForKey:(id)arg0 ;
-(void)setDefaultValues;


@end


#endif