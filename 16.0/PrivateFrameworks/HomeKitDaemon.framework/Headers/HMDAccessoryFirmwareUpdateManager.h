// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYFIRMWAREUPDATEMANAGER_H
#define HMDACCESSORYFIRMWAREUPDATEMANAGER_H

@class NSMutableDictionary, NSString, NSURL, NSMapTable, HMFTimer, UARPController;
@protocol HMFLogging, UARPControllerDelegateProtocol, HMFTimerDelegate, HMDAccessoryFirmwareUpdateManagerWingman, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDHomeManager.h"
#import "HMDAccessoryFirmwareUpdateConcurrencyLogEventManager.h"

@interface HMDAccessoryFirmwareUpdateManager : NSObject <HMFLogging, UARPControllerDelegateProtocol, HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSMutableDictionary *accessoryRetries; // ivar: _accessoryRetries
@property (retain, nonatomic) NSMutableDictionary *activeSessions; // ivar: _activeSessions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *documentationPath; // ivar: _documentationPath
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) HMDAccessoryFirmwareUpdateConcurrencyLogEventManager *logEventManager; // ivar: _logEventManager
@property (retain, nonatomic) NSMapTable *registeredAccessories; // ivar: _registeredAccessories
@property (retain, nonatomic) HMFTimer *statusTimer; // ivar: _statusTimer
@property (readonly) Class superclass;
@property (readonly, nonatomic) UARPController *uarpController;
@property (readonly) NSObject<HMDAccessoryFirmwareUpdateManagerWingman> *wingman; // ivar: _wingman
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_registerAccessory:(id)arg0 source:(NSInteger)arg1 path:(id)arg2 ;
-(BOOL)checkForUpdateForAccessory:(id)arg0 ;
-(BOOL)deviceSupportsFirmwareUpdate;
-(BOOL)hasAccessoryUsedAllFirmwareUpdateRetries:(id)arg0 forAsset:(id)arg1 ;
-(BOOL)isAccessoryRegistered:(id)arg0 ;
-(BOOL)isFirmwareUpdateRetryAllowedForAccessory:(id)arg0 forAsset:(id)arg1 ;
-(BOOL)registerAccessory:(id)arg0 ;
-(BOOL)sendMessageToAccessory:(id)arg0 uarpMsg:(id)arg1 error:(*id)arg2 ;
-(BOOL)startUARPPacketCapture:(id)arg0 ;
-(NSInteger)defaultProductDataUpdateAssetSource;
-(NSInteger)defaultUpdateAssetSourceWithAccessory:(id)arg0 ;
-(id)UARPAccessoryForHMDAccessory:(id)arg0 ;
-(id)addSessionForUARPAccessory:(id)arg0 ;
-(id)changeAccessory:(id)arg0 source:(NSInteger)arg1 path:(id)arg2 documentationPath:(id)arg3 userInitiatedStaging:(BOOL)arg4 ;
-(id)findHMDHAPAccessoryWithUARPAccessory:(id)arg0 ;
-(id)init;
-(id)initWithHomeManager:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 wingman:(id)arg1 ;
-(id)sessionForAccessory:(id)arg0 ;
-(id)sessionForUARPAccessory:(id)arg0 ;
-(void)_handleAccessoryFirmwareVersionUpdateNotification:(id)arg0 ;
-(void)_handleHomeAccessoryRemovedNotification:(id)arg0 ;
-(void)assetAvailablityUpdateForAccessoryID:(id)arg0 assetID:(id)arg1 ;
-(void)assetSolicitationComplete:(id)arg0 assetID:(id)arg1 withStatus:(NSUInteger)arg2 ;
-(void)assetSolicitationProgress:(id)arg0 assetID:(id)arg1 bytesReceived:(NSUInteger)arg2 bytesTotal:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)firmwareStagingComplete:(id)arg0 assetID:(id)arg1 withStatus:(NSUInteger)arg2 ;
-(void)firmwareStagingProgress:(id)arg0 assetID:(id)arg1 bytesSent:(NSUInteger)arg2 bytesTotal:(NSUInteger)arg3 ;
-(void)firmwareUpdateResult:(id)arg0 vendorSpecificStatus:(unsigned int)arg1 error:(id)arg2 ;
-(void)handleAccessoryFirmwareVersionUpdateNotification:(id)arg0 ;
-(void)handleHomeAccessoryRemovedNotification:(id)arg0 ;
-(void)removeSession:(id)arg0 ;
-(void)rescindStagedAsset:(id)arg0 completion:(id)arg1 ;
-(void)resetFirmwareUpdateAccessoryRetryTracking:(id)arg0 forAsset:(id)arg1 ;
-(void)stagedFirmwareApplicationComplete:(id)arg0 withStatus:(NSUInteger)arg1 ;
-(void)startStatusTimer;
-(void)stopUARPPacketCapture;
-(void)timerDidFire:(id)arg0 ;
-(void)unregisterAccessory:(id)arg0 ;


@end


#endif