// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYFIRMWAREUPDATEMANAGER_H
#define HMDACCESSORYFIRMWAREUPDATEMANAGER_H

@class NSMutableDictionary, NSString, UARPController, NSURL, NSMapTable, HMFTimer;
@protocol HMFTimerDelegate, HMDAccessoryFirmwareUpdateManagerWingman, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDDefaultUARPControllerDelegate.h"
#import "HMDHomeManager.h"
#import "HMDAccessoryFirmwareUpdateConcurrencyLogEventManager.h"
#import "HMDMatterUARPControllerDelegate.h"

@interface HMDAccessoryFirmwareUpdateManager : NSObject <HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSMutableDictionary *accessoryRetries; // ivar: _accessoryRetries
@property (retain, nonatomic) NSMutableDictionary *activeSessions; // ivar: _activeSessions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UARPController *defaultUARPController;
@property (readonly, nonatomic) HMDDefaultUARPControllerDelegate *defaultUARPControllerDelegate; // ivar: _defaultUARPControllerDelegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *documentationPath; // ivar: _documentationPath
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) HMDAccessoryFirmwareUpdateConcurrencyLogEventManager *logEventManager; // ivar: _logEventManager
@property (readonly, nonatomic) HMDMatterUARPControllerDelegate *matterUARPControllerDelegate; // ivar: _matterUARPControllerDelegate
@property (retain, nonatomic) NSMapTable *registeredAccessories; // ivar: _registeredAccessories
@property (retain, nonatomic) HMFTimer *statusTimer; // ivar: _statusTimer
@property (readonly) Class superclass;
@property (readonly) BOOL supportsFirmwareUpdate;
@property (readonly) NSObject<HMDAccessoryFirmwareUpdateManagerWingman> *wingman; // ivar: _wingman
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_registerAccessory:(id)arg0 source:(NSInteger)arg1 path:(id)arg2 ;
-(BOOL)checkForUpdateForAccessory:(id)arg0 ;
-(BOOL)hasReachedMaximumFirmwareUpdateRetriesForAccessory:(id)arg0 assetID:(id)arg1 ;
-(BOOL)isAccessoryRegistered:(id)arg0 ;
-(BOOL)isFirmwareUpdateRetryAllowedForAccessory:(id)arg0 forAsset:(id)arg1 ;
-(BOOL)registerAccessory:(id)arg0 ;
-(BOOL)startUARPPacketCapture:(id)arg0 ;
-(NSInteger)defaultProductDataUpdateAssetSource;
-(NSInteger)defaultUpdateAssetSourceWithAccessory:(id)arg0 ;
-(id)UARPAccessoryForHMDAccessory:(id)arg0 ;
-(id)UARPControllerForAccessory:(id)arg0 ;
-(id)addSessionForUARPAccessory:(id)arg0 ;
-(id)availableSoftwareAssetForMatterAccessory:(id)arg0 error:(*id)arg1 ;
-(id)changeAccessory:(id)arg0 source:(NSInteger)arg1 path:(id)arg2 documentationPath:(id)arg3 userInitiatedStaging:(BOOL)arg4 ;
-(id)findHMDHAPAccessoryWithUARPAccessory:(id)arg0 ;
-(id)init;
-(id)initWithHomeManager:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 wingman:(id)arg1 ;
-(id)matterUARPController;
-(id)sessionForAccessory:(id)arg0 ;
-(id)sessionForUARPAccessory:(id)arg0 ;
-(void)_handleAccessoryFirmwareVersionUpdateNotification:(id)arg0 ;
-(void)_handleHomeAccessoryRemovedNotification:(id)arg0 ;
-(void)_handleMatterSettingsUpdateNotification:(id)arg0 ;
-(void)dealloc;
-(void)handleAccessoryFirmwareVersionUpdateNotification:(id)arg0 ;
-(void)handleHomeAccessoryRemovedNotification:(id)arg0 ;
-(void)handleMatterSettingsUpdateNotification:(id)arg0 ;
-(void)removeSession:(id)arg0 ;
-(void)rescindStagedAsset:(id)arg0 completion:(id)arg1 ;
-(void)resetFirmwareUpdateAccessoryRetryTracking:(id)arg0 forAsset:(id)arg1 ;
-(void)startStatusTimer;
-(void)stopUARPPacketCapture;
-(void)timerDidFire:(id)arg0 ;
-(void)unregisterAccessory:(id)arg0 ;


@end


#endif