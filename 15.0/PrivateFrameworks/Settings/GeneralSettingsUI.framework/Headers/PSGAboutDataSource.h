// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSGABOUTDATASOURCE_H
#define PSGABOUTDATASOURCE_H

@class PSSpecifierDataSource, NSMutableDictionary, PSSpecifier, NSString, NSTimer, NSLock, CoreTelephonyClient, NDOManager, NSArray, NDOACController;
@protocol CoreTelephonyClientCarrierBundleDelegate, NSObject;



@interface PSGAboutDataSource : PSSpecifierDataSource <CoreTelephonyClientCarrierBundleDelegate>

 {
    NSMutableDictionary *_mediaDict;
    PSSpecifier *_headsetSpecifier;
    PSSpecifier *_accessoryDividerSpecifier;
    NSString *_loading;
    NSTimer *_reloadTimer;
    BOOL _isGeneratingNotifications;
    BOOL _threadRunning;
    BOOL _cancel;
    BOOL _loaded;
    BOOL _accessory;
    id<NSObject> *_photoVideoNotificationToken;
    NSLock *_lock;
    BOOL _hasLoadedSpecifiers;
    NSMutableDictionary *_carrierCellState;
    NSMutableDictionary *_simCellState;
}


@property (retain, nonatomic) CoreTelephonyClient *_client; // ivar: __client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceNameToIgnoreOnce; // ivar: _deviceNameToIgnoreOnce
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NDOManager *ndoManager; // ivar: _ndoManager
@property (retain, nonatomic) NSArray *ndoSpecifiers; // ivar: _ndoSpecifiers
@property (retain, nonatomic) NDOACController *sharedNDOController; // ivar: _sharedNDOController
@property (readonly) Class superclass;


-(BOOL)_isUsingBootstrap:(id)arg0 ;
-(BOOL)areSpecifiersLoaded;
-(BOOL)shouldShowSIMSpecifier:(id)arg0 ;
-(id)_CSNString:(id)arg0 ;
-(id)_ERIString:(id)arg0 ;
-(id)_ICCIDString:(id)arg0 ;
-(id)_IMSStatusString:(id)arg0 ;
-(id)_MINString:(id)arg0 ;
-(id)_NAIString:(id)arg0 ;
-(id)_PRLString:(id)arg0 ;
-(id)_bluetoothMACAddress;
-(id)_carrierVersion:(id)arg0 ;
-(id)_macAddress;
-(id)_macAddressSpecifierKey;
-(id)_modelNameString;
-(id)_modelRegionString;
-(id)_myNumber;
-(id)_photos:(id)arg0 ;
-(id)_productBuildVersionString;
-(id)_productVersionString;
-(id)_regulatoryModelNumberString;
-(id)_songs:(id)arg0 ;
-(id)_videos:(id)arg0 ;
-(id)aboutController;
-(id)checkCameraStatus;
-(id)countForKey:(id)arg0 ;
-(id)deviceName:(id)arg0 ;
-(id)getCarrierSpecifierForSlot:(id)arg0 ;
-(id)informationCollectionSpecifier;
-(id)init;
-(id)nonGenuineBatteryURL;
-(id)nonGenuineComponentSpecifierForComponent:(id)arg0 ;
-(id)specifiersForSpecifier:(id)arg0 observer:(id)arg1 ;
-(id)topLevelComponentInfoSpecifiers;
-(id)untrustedComponents;
-(id)valueForSpecifier:(id)arg0 ;
-(void)_accessoryDidUpdate:(id)arg0 ;
-(void)_addKey:(id)arg0 isCopyable:(BOOL)arg1 ;
-(void)_addKey:(id)arg0 value:(id)arg1 isCopyable:(BOOL)arg2 ;
-(void)_loadMediaFinished:(id)arg0 ;
-(void)_loadValues;
-(void)_setValue:(id)arg0 forSpecifier:(id)arg1 ;
-(void)_setValue:(id)arg0 forSpecifierWithKey:(id)arg1 ;
-(void)carrierBundleChange:(id)arg0 ;
-(void)cleanupMLReloadTimer;
-(void)dealloc;
-(void)enableMLUpdates:(BOOL)arg0 ;
-(void)forceReloadMediaStats:(id)arg0 ;
-(void)handleNonGenuineComponentTap:(id)arg0 ;
-(void)loadSpecifiers;
-(void)mediaLibraryDidChange:(id)arg0 ;
-(void)prlVersionChanged:(id)arg0 ;
-(void)prlVersionChangedForSlot:(id)arg0 ;
-(void)reloadDeviceName;
-(void)reloadSpecifiers;
-(void)setDeviceName:(id)arg0 specifier:(id)arg1 ;
-(void)simStatusChangedToReady;
-(void)updateCarrierSpecifier:(id)arg0 ;
-(void)updateNDOSpecifiers;
-(void)updateProductModelSpecifier:(id)arg0 ;
-(void)updateProductVersionSpecifier:(id)arg0 ;
-(void)updateSIMSpecifier:(id)arg0 ;


@end


#endif