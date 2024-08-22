// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXROOTSETTINGS_H
#define PXROOTSETTINGS_H



#import "PXSettings.h"
#import "PXAlbumsDebugUISettings.h"
#import "PXApplicationSettings.h"
#import "PXDisplayAssetViewDemoSettings.h"
#import "PXAssetsSceneSettings.h"
#import "PXAudioSettings.h"
#import "PXCompleteMyMomentSettings.h"
#import "PXContentPrivacySettings.h"
#import "PXContentSyndicationSettings.h"
#import "PXCPLStatusSettings.h"
#import "PXCuratedLibrarySettings.h"
#import "PXCursorInteractionSettings.h"
#import "PXDiagnosticsSettings.h"
#import "PXDocumentMenuSettings.h"
#import "PXDragAndDropSettings.h"
#import "PXPasteboardAssetSettings.h"
#import "PXDuplicatesSettings.h"
#import "PXFocusSettings.h"
#import "PXFooterSettings.h"
#import "PXForYouSettings.h"
#import "PXGridSettings.h"
#import "PXImageModulationSettings.h"
#import "PXImportSettings.h"
#import "PXInlineVideoStabilizationSettings.h"
#import "PXKeyboardSettings.h"
#import "PXKitSettings.h"
#import "PXMediaProviderSettings.h"
#import "PXMemoriesRelatedSettings.h"
#import "PXMemoriesFeedSettings.h"
#import "PXMessagesUISettings.h"
#import "PXModelSettings.h"
#import "PXOneUpSettings.h"
#import "PXPeopleDetailSettings.h"
#import "PXPeopleUISettings.h"
#import "PXPhotoPickerSettings.h"
#import "PXPhotosDataSourceSettings.h"
#import "PXPhotosDetailsSettings.h"
#import "PXPhotosDetailsHeaderTileSettings.h"
#import "PXPhotosGridSettings.h"
#import "PXSearchSettings.h"
#import "PXSharedLibrarySettings.h"
#import "PXSharingSettings.h"
#import "PXStorySettings.h"
#import "PXSwipeDownSettings.h"
#import "PXSystemNavigationSettings.h"
#import "PXTilingSettings.h"
#import "PXGPPTSettings.h"
#import "PXTungstenSettings.h"
#import "PXUpNextSettings.h"
#import "PXAssetVariationsSettings.h"
#import "PXVideoPlaybackSettings.h"
#import "PXWorkaroundSettings.h"
#import "PXZoomablePhotosSettings.h"

@interface PXRootSettings : PXSettings

@property (retain, nonatomic) PXAlbumsDebugUISettings *albumsDebugUISettings; // ivar: _albumsDebugUISettings
@property (retain, nonatomic) PXApplicationSettings *applicationSettings; // ivar: _applicationSettings
@property (retain, nonatomic) PXDisplayAssetViewDemoSettings *assetViewDemoSettings; // ivar: _assetViewDemoSettings
@property (retain, nonatomic) PXAssetsSceneSettings *assetsScene; // ivar: _assetsScene
@property (retain, nonatomic) PXAudioSettings *audioSettings; // ivar: _audioSettings
@property (retain, nonatomic) PXCompleteMyMomentSettings *completeMyMoment; // ivar: _completeMyMoment
@property (retain, nonatomic) PXContentPrivacySettings *contentPrivacySettings; // ivar: _contentPrivacySettings
@property (retain, nonatomic) PXContentSyndicationSettings *contentSyndicationSettings; // ivar: _contentSyndicationSettings
@property (retain, nonatomic) PXCPLStatusSettings *cplStatusSettings; // ivar: _cplStatusSettings
@property (retain, nonatomic) PXCuratedLibrarySettings *curatedLibrarySettings; // ivar: _curatedLibrarySettings
@property (retain, nonatomic) PXCursorInteractionSettings *cursorInteractionSettings; // ivar: _cursorInteractionSettings
@property (retain, nonatomic) PXDiagnosticsSettings *diagnostics; // ivar: _diagnostics
@property (retain, nonatomic) PXDocumentMenuSettings *documentMenuSettings; // ivar: _documentMenuSettings
@property (retain, nonatomic) PXDragAndDropSettings *dragAndDrop; // ivar: _dragAndDrop
@property (retain, nonatomic) PXPasteboardAssetSettings *dragDropSettings; // ivar: _dragDropSettings
@property (retain, nonatomic) PXDuplicatesSettings *duplicatesSettings; // ivar: _duplicatesSettings
@property (retain, nonatomic) PXFocusSettings *focusSettings; // ivar: _focusSettings
@property (retain, nonatomic) PXFooterSettings *footerSettings; // ivar: _footerSettings
@property (retain, nonatomic) PXForYouSettings *forYou; // ivar: _forYou
@property (retain, nonatomic) PXGridSettings *grid; // ivar: _grid
@property (nonatomic) BOOL hideWIPAlerts;
@property (retain, nonatomic) PXImageModulationSettings *imageModulationSettings; // ivar: _imageModulationSettings
@property (retain, nonatomic) PXImportSettings *importSettings; // ivar: _importSettings
@property (retain, nonatomic) PXInlineVideoStabilizationSettings *inlineVideoStabilizationSettings; // ivar: _inlineVideoStabilizationSettings
@property (retain, nonatomic) PXKeyboardSettings *keyboardSettings; // ivar: _keyboardSettings
@property (retain, nonatomic) PXKitSettings *kit; // ivar: _kit
@property (retain, nonatomic) PXMediaProviderSettings *mediaProviderSettings; // ivar: _mediaProviderSettings
@property (retain, nonatomic) PXMemoriesRelatedSettings *memoriesRelated; // ivar: _memoriesRelated
@property (retain, nonatomic) PXMemoriesFeedSettings *memoryFeed; // ivar: _memoryFeed
@property (retain, nonatomic) PXMessagesUISettings *messagesUISettings; // ivar: _messagesUISettings
@property (retain, nonatomic) PXModelSettings *model; // ivar: _model
@property (retain, nonatomic) PXOneUpSettings *oneUpSettings; // ivar: _oneUpSettings
@property (retain, nonatomic) PXPeopleDetailSettings *peopleDetail; // ivar: _peopleDetail
@property (retain, nonatomic) PXPeopleUISettings *peopleUISettings; // ivar: _peopleUISettings
@property (retain, nonatomic) PXPhotoPickerSettings *photoPickerSettings; // ivar: _photoPickerSettings
@property (retain, nonatomic) PXPhotosDataSourceSettings *photosDataSource; // ivar: _photosDataSource
@property (retain, nonatomic) PXPhotosDetailsSettings *photosDetails; // ivar: _photosDetails
@property (retain, nonatomic) PXPhotosDetailsHeaderTileSettings *photosDetailsHeaderTile; // ivar: _photosDetailsHeaderTile
@property (retain, nonatomic) PXPhotosGridSettings *photosGridSettings; // ivar: _photosGridSettings
@property (nonatomic) BOOL private_wantsInternalUI; // ivar: _private_wantsInternalUI
@property (retain, nonatomic) PXSearchSettings *searchSettings; // ivar: _searchSettings
@property (retain, nonatomic) PXSharedLibrarySettings *sharedLibrarySettings; // ivar: _sharedLibrarySettings
@property (retain, nonatomic) PXSharingSettings *sharingSettings; // ivar: _sharingSettings
@property (nonatomic) BOOL showLibraryFilterTip; // ivar: _showLibraryFilterTip
@property (nonatomic) BOOL showWIPAlertRadar; // ivar: _showWIPAlertRadar
@property (retain, nonatomic) PXStorySettings *storySettings; // ivar: _storySettings
@property (retain, nonatomic) PXSwipeDownSettings *swipeDownSettings; // ivar: _swipeDownSettings
@property (retain, nonatomic) PXSystemNavigationSettings *systemNavigationSettings; // ivar: _systemNavigationSettings
@property (retain, nonatomic) PXTilingSettings *tiling; // ivar: _tiling
@property (retain, nonatomic) PXGPPTSettings *tungstenPPTSettings; // ivar: _tungstenPPTSettings
@property (retain, nonatomic) PXTungstenSettings *tungstenSettings; // ivar: _tungstenSettings
@property (retain, nonatomic) PXUpNextSettings *upNextSettings; // ivar: _upNextSettings
@property (retain, nonatomic) PXAssetVariationsSettings *variationsSettings; // ivar: _variationsSettings
@property (retain, nonatomic) PXVideoPlaybackSettings *videoPlaybackSettings; // ivar: _videoPlaybackSettings
@property (retain, nonatomic) PXWorkaroundSettings *workaroundSettings; // ivar: _workaroundSettings
@property (retain, nonatomic) PXZoomablePhotosSettings *zoomablePhotosSettings; // ivar: _zoomablePhotosSettings


+(id)settingsControllerModule;
+(id)sharedInstance;
-(BOOL)canShowInternalUI;
-(id)parentSettings;
-(void)createChildren;
-(void)setCanShowInternalUI:(BOOL)arg0 ;
-(void)setDefaultValues;


@end


#endif