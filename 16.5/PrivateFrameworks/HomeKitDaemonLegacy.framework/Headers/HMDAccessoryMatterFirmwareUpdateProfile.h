// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYMATTERFIRMWAREUPDATEPROFILE_H
#define HMDACCESSORYMATTERFIRMWAREUPDATEPROFILE_H

@class HMFObject, NSString, NSNumber, NSNotificationCenter;
@protocol HMFLogging, OS_dispatch_queue;


#import "HMDHAPAccessory.h"
#import "HMDMatterSoftwareUpdateProviderDelegate.h"

@interface HMDAccessoryMatterFirmwareUpdateProfile : HMFObject <HMFLogging>



@property (readonly, weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *matterFirmwareRevisionNumber; // ivar: _matterFirmwareRevisionNumber
@property (weak) HMDMatterSoftwareUpdateProviderDelegate *matterSoftwareUpdateProviderDelegate; // ivar: _matterSoftwareUpdateProviderDelegate
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)characteristics;
-(id)initWithAccessory:(id)arg0 workQueue:(id)arg1 ;
-(id)logIdentifier;
-(id)privateDescription;
-(void)__handleAccessoryIsReachable;
-(void)__handleMatterFirmwareRevisionNumberUpdate:(id)arg0 ;
-(void)__handleMatterFirmwareUpdateStatusUpdate:(id)arg0 ;
-(void)_enableCharacteristicsNotifications:(BOOL)arg0 ;
-(void)_handleCharacteristicChanges:(id)arg0 ;
-(void)_registerForNotifications;
-(void)configure;
-(void)configureWithMatterSoftwareUpdateProviderDelegate:(id)arg0 ;
-(void)dealloc;
-(void)handleAccessoryIsReachable:(id)arg0 ;
-(void)handleAccessoryIsRemotelyReachable:(id)arg0 ;
-(void)handleCharacteristicValuesChanged:(id)arg0 ;
-(void)handleFirmwareVersionStringUpdatedNotification:(id)arg0 ;
-(void)handleVIDPIDUpdatedNotification:(id)arg0 ;
-(void)readAndProcessCharacteristics:(id)arg0 withCompletion:(id)arg1 ;
-(void)readMatterFirmwareUpdateCharacteristics;


@end


#endif