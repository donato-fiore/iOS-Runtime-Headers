// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYSETTINGS_H
#define PXSHAREDLIBRARYSETTINGS_H



#import "PXSettings.h"

@interface PXSharedLibrarySettings : PXSettings

@property (nonatomic) BOOL alwaysConfirmMoveToPersonalLibrary; // ivar: _alwaysConfirmMoveToPersonalLibrary
@property (nonatomic) BOOL alwaysConfirmMoveToSharedLibrary; // ivar: _alwaysConfirmMoveToSharedLibrary
@property (nonatomic) BOOL alwaysConfirmRemoveSharedLibrarySuggestion; // ivar: _alwaysConfirmRemoveSharedLibrarySuggestion
@property (nonatomic) BOOL alwaysHideDuplicatesInRecentsAndAllPhotos; // ivar: _alwaysHideDuplicatesInRecentsAndAllPhotos
@property (nonatomic) BOOL confirmMoveToPersonalLibraryFromSharedLibraryPreview; // ivar: _confirmMoveToPersonalLibraryFromSharedLibraryPreview
@property (nonatomic) BOOL enableAutoShareWithParticipants; // ivar: _enableAutoShareWithParticipants
@property (nonatomic) BOOL enableIncompleteUIElements; // ivar: _enableIncompleteUIElements
@property (nonatomic) BOOL enableOneUpBadge; // ivar: _enableOneUpBadge
@property (nonatomic) NSInteger exitingDataSourceType; // ivar: _exitingDataSourceType
@property (nonatomic) BOOL forceLegacyDevicesFallback; // ivar: _forceLegacyDevicesFallback
@property (nonatomic) BOOL includeNonLegacyDevicesInFallback; // ivar: _includeNonLegacyDevicesInFallback
@property (nonatomic) NSInteger invitationsDataSourceType; // ivar: _invitationsDataSourceType
@property (nonatomic) BOOL mockPersonSuggestionForSetupAssistant; // ivar: _mockPersonSuggestionForSetupAssistant
@property (nonatomic) NSInteger previewDataSourceType; // ivar: _previewDataSourceType
@property (nonatomic) NSInteger sharedLibraryDataSourceType; // ivar: _sharedLibraryDataSourceType
@property (nonatomic) NSInteger sharingSuggestionsBannerUnreadCountThreshold; // ivar: _sharingSuggestionsBannerUnreadCountThreshold
@property (nonatomic) CGFloat sharingSuggestionsLegibilityStrength; // ivar: _sharingSuggestionsLegibilityStrength
@property (nonatomic) CGFloat sharingSuggestionsMinimumTimeSinceLastAsset; // ivar: _sharingSuggestionsMinimumTimeSinceLastAsset
@property (nonatomic) CGFloat sharingSuggestionsMinimumTimeSinceLastBannerDismiss; // ivar: _sharingSuggestionsMinimumTimeSinceLastBannerDismiss
@property (nonatomic) BOOL showDebugAlbums; // ivar: _showDebugAlbums
@property (nonatomic) BOOL showDuplicatesFilter; // ivar: _showDuplicatesFilter
@property (nonatomic) BOOL showMoveToLibraryActionsInShareSheet; // ivar: _showMoveToLibraryActionsInShareSheet
@property (nonatomic) BOOL showPersonalLibraryContentOnly; // ivar: _showPersonalLibraryContentOnly
@property (nonatomic) BOOL showPreviewAssetsOnlyFilter; // ivar: _showPreviewAssetsOnlyFilter
@property (nonatomic) BOOL showPreviewCancelButton; // ivar: _showPreviewCancelButton
@property (nonatomic) BOOL showSampleGadgets; // ivar: _showSampleGadgets
@property (nonatomic) BOOL showSharedLibraryAlbum; // ivar: _showSharedLibraryAlbum
@property (nonatomic) NSInteger simulateErrorType; // ivar: _simulateErrorType
@property (nonatomic) BOOL simulateLegacyDevicesRemoteFailure; // ivar: _simulateLegacyDevicesRemoteFailure
@property (nonatomic) BOOL simulateSlowLegacyDevicesFetchInFallback; // ivar: _simulateSlowLegacyDevicesFetchInFallback
@property (nonatomic) NSInteger sourceLibraryInfoType; // ivar: _sourceLibraryInfoType
@property (nonatomic) BOOL useAppWideLibraryFilterState; // ivar: _useAppWideLibraryFilterState


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif