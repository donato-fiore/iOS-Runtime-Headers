// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKDEVICE_H
#define CLKDEVICE_H

@class NSNumber, NRDevice, NSUUID, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CLKDevice : NSObject

@property (nonatomic) int cachedKeybagLockState; // ivar: _cachedKeybagLockState
@property (readonly, nonatomic) os_unfair_lock_s capabilitiesLock; // ivar: _capabilitiesLock
@property (nonatomic) NSUInteger collectionType; // ivar: _collectionType
@property (readonly, nonatomic) NSNumber *deviceBrand; // ivar: _deviceBrand
@property (readonly, nonatomic) NSUInteger deviceCategory; // ivar: _deviceCategory
@property (nonatomic) BOOL hasRichMediaComplications; // ivar: _hasRichMediaComplications
@property (nonatomic) BOOL isBridgeActive; // ivar: _isBridgeActive
@property (nonatomic) BOOL isExplorer; // ivar: _isExplorer
@property (readonly, nonatomic) BOOL isLocked;
@property (nonatomic) BOOL isLuxo; // ivar: _isLuxo
@property (readonly, nonatomic) BOOL isPaired;
@property (readonly, nonatomic) BOOL isRunningDaytonaOrLater; // ivar: _isRunningDaytonaOrLater
@property (readonly, nonatomic) BOOL isRunningGloryFOrLater; // ivar: _isRunningGloryFOrLater
@property (readonly, nonatomic) BOOL isRunningGloryGMOrLater; // ivar: _isRunningGloryGMOrLater
@property (nonatomic) BOOL isTinker; // ivar: _isTinker
@property (readonly, nonatomic) BOOL isZeusBlack; // ivar: _isZeusBlack
@property (readonly, nonatomic) BOOL limitedToPreGlory; // ivar: _limitedToPreGlory
@property (readonly, nonatomic) BOOL limitedToPreHunter; // ivar: _limitedToPreHunter
@property (nonatomic) NSUInteger materialType; // ivar: _materialType
@property (retain, nonatomic) NRDevice *nrDevice; // ivar: _nrDevice
@property (readonly, nonatomic) NSUUID *nrDeviceUUID;
@property (readonly, nonatomic) unsigned int nrDeviceVersion;
@property (readonly, nonatomic) int pairedDeviceCapabilitiesChangeNotificationToken; // ivar: _pairedDeviceCapabilitiesChangeNotificationToken
@property (readonly, nonatomic) NSInteger productFamilyType;
@property (nonatomic) NSInteger productType; // ivar: _productType
@property (nonatomic) os_unfair_lock_s protectedLock; // ivar: _protectedLock
@property (readonly, nonatomic, getter=isRunningGraceOrLater) BOOL runningGraceOrLater; // ivar: _runningGraceOrLater
@property (nonatomic) CGRect screenBounds; // ivar: _screenBounds
@property (nonatomic) CGFloat screenCornerRadius; // ivar: _screenCornerRadius
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (nonatomic) NSUInteger sizeClass; // ivar: _sizeClass
@property (retain, nonatomic) NSMutableDictionary *supportedCapabilitiesCache; // ivar: _supportedCapabilitiesCache
@property (nonatomic) BOOL supportsCompanionSync; // ivar: _supportsCompanionSync
@property (nonatomic) BOOL supportsPolaris; // ivar: _supportsPolaris
@property (readonly, nonatomic) BOOL supportsTritium; // ivar: _supportsTritium
@property (nonatomic) BOOL supportsUrsa; // ivar: _supportsUrsa
@property (readonly, nonatomic) BOOL unlockedSinceBoot;
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


+(BOOL)NRDeviceIsRunningDaytonaOrLater:(id)arg0 ;
+(id)CLKDeviceUUIDForNRDevice:(id)arg0 ;
+(id)_cachedDeviceForUUID:(id)arg0 ;
+(id)_createCurrentDeviceWithNRDevice:(id)arg0 ;
+(id)activeNRDevice;
+(id)currentDevice;
+(id)deviceForNRDevice:(id)arg0 ;
+(id)deviceForNRDevice:(id)arg0 forced:(BOOL)arg1 ;
+(id)deviceForNRDeviceUUID:(id)arg0 ;
+(id)nrDeviceForNRDeviceUUID:(id)arg0 ;
+(unsigned int)NRProductVersionForNRDevice:(id)arg0 ;
+(void)_deviceDidBecomeActive:(id)arg0 ;
+(void)_handleNRDeviceChanged:(id)arg0 ;
+(void)_removeCachedDeviceForUUID:(id)arg0 ;
+(void)enumerateSizeClasses:(id)arg0 ;
+(void)initialize;
+(void)resetCurrentDevice;
+(void)setCurrentDevice:(id)arg0 ;
-(BOOL)_checkUpdateFlushCapabilitiesCache_locked;
-(BOOL)_queryAndCacheNanoRegistryDeviceCapabilities;
-(BOOL)_supportsCapabilityUncached:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLimitedToPreGloryDeviceOfProductType:(NSInteger)arg0 ;
-(BOOL)isM8SOCInDeviceOfProductType:(NSInteger)arg0 ;
-(BOOL)supportsCapability:(id)arg0 ;
-(NSInteger)productTypeFromProductTypeString:(id)arg0 ;
-(NSInteger)retrieveProductType;
-(id)initWithNRDevice:(id)arg0 ;
-(id)initWithSizeClass:(NSUInteger)arg0 ;
-(void)_loadDeviceInfo;
-(void)customCompanionSetup;
-(void)customWatchSetup;
-(void)dealloc;
-(void)handleDeviceDidPairNotification;
-(void)updateKeybagLockStateCacheWithState:(int)arg0 ;
-(void)updateTinkerState;


@end


#endif