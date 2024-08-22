// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYFIRMWAREUPDATEPROFILE_H
#define HMDACCESSORYFIRMWAREUPDATEPROFILE_H

@class HMFObject, HMFSoftwareVersion, NSString, NSNotificationCenter;
@protocol HMFLogging, OS_dispatch_queue;


#import "HMDHAPAccessory.h"
#import "HMDService.h"

@interface HMDAccessoryFirmwareUpdateProfile : HMFObject <HMFLogging>



@property (readonly, weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) HMFSoftwareVersion *currentVersion; // ivar: _currentVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, getter=notificationsEnabled) BOOL notificationsEnabled; // ivar: _notificationsEnabled
@property (readonly, weak) HMDService *service; // ivar: _service
@property (retain, nonatomic) HMFSoftwareVersion *stagedFirmwareVersion; // ivar: _stagedFirmwareVersion
@property (nonatomic) NSUInteger stagingNotReadyReasons; // ivar: _stagingNotReadyReasons
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger updateDuration; // ivar: _updateDuration
@property (nonatomic) NSUInteger updateNotReadyReasons; // ivar: _updateNotReadyReasons
@property (nonatomic) NSInteger updateState; // ivar: _updateState
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)characteristics;
-(id)firmwareVersionCharacteristic;
-(id)initWithAccessory:(id)arg0 service:(id)arg1 workQueue:(id)arg2 ;
-(id)logIdentifier;
-(id)privateDescription;
-(id)readinessCharacteristic;
-(id)statusCharacteristic;
-(void)__handleAccessoryIsReachable;
-(void)__handleFirmwareUpdateReadinessUpdate:(id)arg0 ;
-(void)__handleFirmwareUpdateStatusUpdate:(id)arg0 ;
-(void)__handleFirmwareVersionUpdate:(id)arg0 ;
-(void)__handleStagedFirmwareVersionUpdate:(id)arg0 ;
-(void)_enableCharacteristicsNotifications:(BOOL)arg0 ;
-(void)_handleCharacteristicChanges:(id)arg0 ;
-(void)_registerForNotifications;
-(void)_updateAccessoryFirmwareVersion:(id)arg0 ;
-(void)_updateFirmwareStagingNotReadyReasons:(NSUInteger)arg0 ;
-(void)_updateFirmwareUpdateDuration:(NSUInteger)arg0 ;
-(void)_updateFirmwareUpdateNotReadyReasons:(NSUInteger)arg0 ;
-(void)_updateFirmwareUpdateState:(NSInteger)arg0 ;
-(void)_updateStagedFirmwareVersion:(id)arg0 ;
-(void)configure;
-(void)dealloc;
-(void)handleAccessoryIsReachable:(id)arg0 ;
-(void)handleCharacteristicValuesChanged:(id)arg0 ;
-(void)monitorCharacteristics:(BOOL)arg0 ;
-(void)readAndProcessCharacteristics:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateProfileWithCompletion:(id)arg0 ;
-(void)updateProfileWithStagedFirmwareVersion:(id)arg0 ;


@end


#endif