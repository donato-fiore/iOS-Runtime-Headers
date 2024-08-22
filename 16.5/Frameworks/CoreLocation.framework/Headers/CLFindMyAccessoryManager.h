// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLFINDMYACCESSORYMANAGER_H
#define CLFINDMYACCESSORYMANAGER_H

@protocol OS_dispatch_queue, CLFindMyAccessoryManagerDelegate;

#import <Foundation/Foundation.h>

#import "CLFindMyAccessoryFragmentAccumulator.h"

@interface CLFindMyAccessoryManager : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> _connection;
    CLFindMyAccessoryFragmentAccumulator *_accumulator;
}


@property (weak, nonatomic) NSObject<CLFindMyAccessoryManagerDelegate> *delegate; // ivar: _delegate


+(id)checkAvailabilityForPairedOwnerInformationControlPointMessages:(id)arg0 messageName:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg1 ;
+(id)errorFromFragmentationStatus:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(void)configureRangingOnDevice:(id)arg0 macAddress:(id)arg1 countryCode:(unsigned char)arg2 uwbChannel:(unsigned char)arg3 acqPreamble:(unsigned char)arg4 trackingPreamble:(unsigned char)arg5 interval:(unsigned short)arg6 ;
-(void)connectDevice:(id)arg0 ;
-(void)dealloc;
-(void)deinitRangingOnDevice:(id)arg0 ;
-(void)disconnectDevice:(id)arg0 ;
-(void)dumpLogDataOfType:(NSUInteger)arg0 fromDevice:(id)arg1 ;
-(void)fetchAISForTAUnknownBeacon:(id)arg0 macAddress:(id)arg1 deviceType:(id)arg2 ;
-(void)fetchAccelerometerOrientationModeConfigurationForDevice:(id)arg0 ;
-(void)fetchAccelerometerSlopeModeConfigurationForDevice:(id)arg0 ;
-(void)fetchBatteryStatusForDevice:(id)arg0 ;
-(void)fetchConnectionStateForDevice:(id)arg0 ;
-(void)fetchFirmwareVersionFromDevice:(id)arg0 ;
-(void)fetchHawkeyeAISAccessoryCapabilities:(id)arg0 ;
-(void)fetchHawkeyeAISAccessoryCategory:(id)arg0 ;
-(void)fetchHawkeyeAISBatteryType:(id)arg0 ;
-(void)fetchHawkeyeAISFindMyVersion:(id)arg0 ;
-(void)fetchHawkeyeAISManufacturerName:(id)arg0 ;
-(void)fetchHawkeyeAISModelColorCode:(id)arg0 ;
-(void)fetchHawkeyeAISModelName:(id)arg0 ;
-(void)fetchHawkeyeAISProductData:(id)arg0 ;
-(void)fetchHawkeyeCurrentPrimaryKey:(id)arg0 ;
-(void)fetchHawkeyeSerialNumber:(id)arg0 ;
-(void)fetchHawkeyeiCloudIdentifier:(id)arg0 ;
-(void)fetchStatusOfUTEnablementRequirements;
-(void)fetchTxPower:(id)arg0 ;
-(void)fetchTxPowerFromDevice:(id)arg0 asOwner:(BOOL)arg1 ;
-(void)fetchUserStatsWithPersistence:(BOOL)arg0 fromDevice:(id)arg1 ;
-(void)forceSurfaceStagedDetections:(id)arg0 deviceType:(id)arg1 ;
-(void)getMultiPartStatusFromDevice:(id)arg0 ;
-(void)getMultiStatusFromDevice:(id)arg0 ;
-(void)handleInterruption;
-(void)handleMessage:(struct shared_ptr<CLConnectionMessage> )arg0 ;
-(void)induceCrashOnDevice:(id)arg0 ;
-(void)initAccumulator;
-(void)initRangingOnDevice:(id)arg0 macAddress:(id)arg1 ;
-(void)performAggressiveScanForDurianService;
-(void)performAggressiveScanForSeparationAlerts;
-(void)performAggressiveScanForTrackingAvoidance;
-(void)performHELEScanForTrackingAvoidance;
-(void)performLongAggressiveScanForSeparationAlerts;
-(void)prepareRangingOnDevice:(id)arg0 ;
-(void)rollWildKeyOnDevice:(id)arg0 ;
-(void)scanForHELE;
-(void)scanForNearbyDevicesLong;
-(void)scanForNearbyOwner;
-(void)sendMessage:(char *)arg0 ;
-(void)sendMessage:(char *)arg0 withPayload:(id)arg1 ;
-(void)setAccelerometerOrientationModeConfiguration:(id)arg0 forDevice:(id)arg1 ;
-(void)setAccelerometerSlopeModeConfiguration:(id)arg0 forDevice:(id)arg1 ;
-(void)setBatteryStatus:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(void)setDeviceType:(unsigned char)arg0 onDevice:(id)arg1 ;
-(void)setHawkeyeTestMode:(int)arg0 forDevice:(id)arg1 ;
-(void)setHawkeyeUTMotionConfigWithSeparatedUTTimeoutSeconds:(unsigned int)arg0 separatedUTBackoffTimeoutSeconds:(unsigned int)arg1 forDevice:(id)arg2 ;
-(void)setKeyRollInterval:(unsigned int)arg0 onDevice:(id)arg1 ;
-(void)setNearOwnerTimeout:(unsigned short)arg0 onDevice:(id)arg1 ;
-(void)setObfuscatedIdentifier:(id)arg0 onDevice:(id)arg1 ;
-(void)setUnauthorizedPlaySoundRateLimit:(BOOL)arg0 forDevice:(id)arg1 ;
-(void)setWildConfiguration:(id)arg0 onDevice:(id)arg1 ;
-(void)stageTADetection:(id)arg0 deviceType:(id)arg1 ;
-(void)startAggressiveAdvertisingOnDevice:(id)arg0 withTimeout:(unsigned int)arg1 ;
-(void)startEventCounterForDevice:(id)arg0 ;
-(void)startMonitoringForAvengerAdvertisementsForBTFinding;
-(void)startPlayingSoundSequence:(id)arg0 onDevice:(id)arg1 ;
-(void)startPlayingUnauthorizedSoundOnDevice:(id)arg0 ;
-(void)startPlayingUnauthorizedSoundSequence:(id)arg0 onDevice:(id)arg1 ;
-(void)startRangingOnDevice:(id)arg0 targetEventCounter:(unsigned short)arg1 ;
-(void)startUnauthorizedAggressiveAdvertisingOnDevice:(id)arg0 ;
-(void)stopAggressiveAdvertisingOnDevice:(id)arg0 ;
-(void)stopEventCounterForDevice:(id)arg0 ;
-(void)stopLongAggressiveScanForSeparationAlerts;
-(void)stopMonitoringForAvengerAdvertisementsForBTFinding;
-(void)stopPlayingSoundOnDevice:(id)arg0 ;
-(void)stopPlayingUnauthorizedSoundOnDevice:(id)arg0 ;
-(void)stopRangingOnDevice:(id)arg0 ;
-(void)stopScanForNearbyDevicesLong;
-(void)unpairFromDevice:(id)arg0 ;
-(void)unpairFromDeviceWithAddress:(id)arg0 ;


@end


#endif