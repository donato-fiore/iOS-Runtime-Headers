// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKDEVICEMANAGER_H
#define FBKDEVICEMANAGER_H

@class NSArray, NSMutableDictionary, NSString, NSMutableArray;
@protocol DEDPairingProtocol;

#import <Foundation/Foundation.h>


@interface FBKDeviceManager : NSObject <DEDPairingProtocol>



@property (retain) NSArray *_notConfiguredDevicesCache; // ivar: __notConfiguredDevicesCache
@property (retain) NSMutableDictionary *_notConfiguredDevicesMatchingPlatformCache; // ivar: __notConfiguredDevicesMatchingPlatformCache
@property (retain) NSMutableDictionary *beginPairingBlocks; // ivar: _beginPairingBlocks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableDictionary *devicePinAttemptCount; // ivar: _devicePinAttemptCount
@property BOOL hasScannedAtLeastOnce; // ivar: _hasScannedAtLeastOnce
@property (readonly) NSUInteger hash;
@property BOOL hidesNotConfiguredDevices; // ivar: _hidesNotConfiguredDevices
@property BOOL isScanning; // ivar: _isScanning
@property (retain) NSMutableArray *postScanTaskQueue; // ivar: _postScanTaskQueue
@property NSInteger scanRequestCount; // ivar: _scanRequestCount
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *tryPinBlocks; // ivar: _tryPinBlocks


+(id)sharedInstance;
+(id)supportedPlatforms;
-(BOOL)canStopScan;
-(BOOL)hasAnyConfiguredDevicesMatchingPlatform:(id)arg0 ;
-(NSUInteger)_pinAttemptCountForDevice:(id)arg0 ;
-(id)_allDevicesFromDEDDevices:(id)arg0 ;
-(id)_availableDevicesWithUserVisiblePlatforms:(id)arg0 ;
-(id)_configuredDevicesWithAvailableDevices:(id)arg0 ;
-(id)_preferredTargetDevicesForFollowup:(id)arg0 withConfiguredDevices:(id)arg1 ;
-(id)allDevices;
-(id)availableDevices;
-(id)configuredDevices;
-(id)ded;
-(id)dedDevicesSortDescriptors;
-(id)devicesFromDefaults;
-(id)devicesMatchingPlatform:(id)arg0 withDevices:(id)arg1 ;
-(id)groupedDeviceForDEDDevice:(id)arg0 ;
-(id)groupedDeviceWithIdentifier:(id)arg0 ;
-(id)groupedDevicesSortDescriptors;
-(id)init;
-(id)notConfiguredDevices;
-(id)notConfiguredDevicesMatchingPlatform:(id)arg0 ;
-(id)preferredTargetDevicesForFollowup:(id)arg0 ;
-(id)thisDevice;
-(void)_drainPostScanTaskQueue;
-(void)_failedPinChallengeForDevice:(id)arg0 ;
-(void)_incrementPinChallengeAttemptForDevice:(id)arg0 ;
-(void)_invalidateCaches;
-(void)_postDeviceChangeNotification;
-(void)_reportPinAttemptForDevice:(id)arg0 success:(BOOL)arg1 ;
-(void)_showPinChallengeForDevice:(id)arg0 ;
-(void)_updateStoredDevices;
-(void)_updateStoredDevicesWithConfiguredDevices:(id)arg0 ;
-(void)beginPairingDevice:(id)arg0 showUIBlock:(id)arg1 ;
-(void)beginScanning;
-(void)decrementScanRequest;
-(void)incrementScanRequest;
-(void)promptPINForDevice:(id)arg0 ;
-(void)runAfterScan:(id)arg0 ;
-(void)stopScanning;
-(void)successPINForDevice:(id)arg0 ;
-(void)tryPairingDevice:(id)arg0 withPin:(id)arg1 completion:(id)arg2 ;


@end


#endif