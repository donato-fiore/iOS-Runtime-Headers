// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUROOTSETTINGS_H
#define PUROOTSETTINGS_H

@class PXSettings, NSString, UIImage, PXImportSettings, PXSharingSettings;
@protocol PXFavoritesSettingsDelegate;


#import "PUAirPlaySettings.h"
#import "PUAlbumListSettings.h"
#import "PUAudioClassificationSettings.h"
#import "PUCompositeVideoSettings.h"
#import "PUCurationSettings.h"
#import "PUFeedSettings.h"
#import "PUIrisSettings.h"
#import "PUMedusaSettings.h"
#import "PUMomentsSettings.h"
#import "PUOneUpSettings.h"
#import "PUPerformanceDiagnosticsSettings.h"
#import "PUPhotoEditProtoSettings.h"
#import "PUPhotosGridSettings.h"
#import "PUSceneSettings.h"
#import "PUSlideshowSettings.h"
#import "PUSuggestionsSettings.h"
#import "PUTabbedLibrarySettings.h"
#import "PUTilingViewSettings.h"
#import "PUWelcomeSettings.h"
#import "PUWorkaroundSettings.h"

@interface PURootSettings : PXSettings <PXFavoritesSettingsDelegate>

 {
    BOOL _enforceDisableIrisUI;
}


@property (retain, nonatomic) NSString *_internal_libraryStateBriefDescription; // ivar: __internal_libraryStateBriefDescription
@property (retain, nonatomic) UIImage *_internal_libraryStateImage; // ivar: __internal_libraryStateImage
@property (retain, nonatomic) PUAirPlaySettings *airPlaySettings; // ivar: _airPlaySettings
@property (retain, nonatomic) PUAlbumListSettings *albumListSettings; // ivar: _albumListSettings
@property (nonatomic) BOOL allowIrisUI; // ivar: _allowIrisUI
@property (retain, nonatomic) PUAudioClassificationSettings *audioClassificationSettings; // ivar: _audioClassificationSettings
@property (retain, nonatomic) PUCompositeVideoSettings *compositeVideoSettings; // ivar: _compositeVideoSettings
@property (retain, nonatomic) PUCurationSettings *curation; // ivar: _curation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PUFeedSettings *feedSettings; // ivar: _feedSettings
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXImportSettings *importSettings; // ivar: _importSettings
@property (retain, nonatomic) Class interfaceThemeClass; // ivar: _interfaceThemeClass
@property (retain, nonatomic) PUIrisSettings *irisSettings; // ivar: _irisSettings
@property (retain, nonatomic) PUMedusaSettings *medusaSettings; // ivar: _medusaSettings
@property (retain, nonatomic) PUMomentsSettings *momentsSettings; // ivar: _momentsSettings
@property (retain, nonatomic) PUOneUpSettings *oneUpSettings; // ivar: _oneUpSettings
@property (retain, nonatomic) PUPerformanceDiagnosticsSettings *performanceDiagnosticsSettings; // ivar: _performanceDiagnosticsSettings
@property (retain, nonatomic) PUPhotoEditProtoSettings *photoEditingSettings; // ivar: _photoEditingSettings
@property (retain, nonatomic) PUPhotosGridSettings *photosGridSettings; // ivar: _photosGridSettings
@property (retain, nonatomic) PUSceneSettings *sceneSettings; // ivar: _sceneSettings
@property (retain, nonatomic) PXSharingSettings *sharingSettings; // ivar: _sharingSettings
@property (retain, nonatomic) PUSlideshowSettings *slideshowSettings; // ivar: _slideshowSettings
@property (retain, nonatomic) PUSuggestionsSettings *suggestions; // ivar: _suggestions
@property (readonly) Class superclass;
@property (retain, nonatomic) PUTabbedLibrarySettings *tabbedLibrarySettings; // ivar: _tabbedLibrarySettings
@property (retain, nonatomic) PUTilingViewSettings *tilingViewSettings; // ivar: _tilingViewSettings
@property (retain, nonatomic) PUWelcomeSettings *welcomeSettings; // ivar: _welcomeSettings
@property (retain, nonatomic) PUWorkaroundSettings *workaroundSettings; // ivar: _workaroundSettings


+(id)_debugRowsForViewControllerStack:(id)arg0 ;
+(id)_photoKitSettings;
+(id)_photosUIAppsSettings;
+(id)_photosUICoreSettings;
+(id)_saveScreenshot:(id)arg0 ;
+(id)currentAsset;
+(id)photosUITesterRootViewController;
+(id)settingsControllerModule;
+(id)sharedInstance;
+(void)_deleteAllDiagnosticFiles;
+(void)_presentTapToRadar;
+(void)_setCurrentAsset:(id)arg0 ;
+(void)_setDebugRows:(id)arg0 ;
+(void)dismissSettingsController:(id)arg0 ;
+(void)presentSettingsController;
+(void)setupStatusBarDoubleTapOnInternalDevices;
+(void)setupStatusBarInternalSettingsGestureOnInternalDevices;
-(BOOL)irisUIEnabled;
-(id)archiveValueForKey:(id)arg0 ;
-(id)favoritesSettings;
-(id)parentSettings;
-(id)reparentedRootSettings;
-(void)_setObservationEnabled:(BOOL)arg0 ;
-(void)applyArchiveValue:(id)arg0 forKey:(id)arg1 ;
-(void)createChildren;
-(void)favoritesSettings:(id)arg0 loadAccessorySettingsWithCompletionHandler:(id)arg1 ;
-(void)favoritesSettingsDidChangeFavorites:(id)arg0 ;
-(void)restoreDefaultValues;
-(void)setDefaultValues;
-(void)setEnforceDisableIrisUI:(BOOL)arg0 ;


@end


#endif