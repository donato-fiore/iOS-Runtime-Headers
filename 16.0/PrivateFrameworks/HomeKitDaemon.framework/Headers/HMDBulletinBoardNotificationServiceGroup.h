// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDBULLETINBOARDNOTIFICATIONSERVICEGROUP_H
#define HMDBULLETINBOARDNOTIFICATIONSERVICEGROUP_H

@class HMFObject, NSSet, NSArray, NSHashTable, NSString, NSUUID, HMFMessageDispatcher;
@protocol NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState, OS_dispatch_queue;


#import "HMDBulletinBoardNotification.h"

@interface HMDBulletinBoardNotificationServiceGroup : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSSet *associatedServiceUUIDs; // ivar: _associatedServiceUUIDs
@property (retain, nonatomic) NSArray *associatedServices; // ivar: _associatedServices
@property (readonly, copy, nonatomic) NSHashTable *associatedServicesTable; // ivar: _associatedServicesTable
@property (weak) HMDBulletinBoardNotification *bulletinBoardNotification; // ivar: _bulletinBoardNotification
@property (retain, nonatomic) NSSet *cameraProfileUUIDs; // ivar: _cameraProfileUUIDs
@property (retain, nonatomic) NSArray *cameraProfiles; // ivar: _cameraProfiles
@property (readonly, copy, nonatomic) NSHashTable *cameraProfilesTable; // ivar: _cameraProfilesTable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (retain) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_isAlarmService:(id)arg0 ;
-(BOOL)_isDefaultRoom:(id)arg0 ofHome:(id)arg1 ;
-(BOOL)_isNotificationGeneratingService:(id)arg0 ;
-(BOOL)_isSupportedAssociationService:(id)arg0 ;
-(id)_accessoriesInRoom:(id)arg0 ofHome:(id)arg1 ;
-(id)_cameraNotificationGeneratingServicesForAccessory:(id)arg0 ;
-(id)_cameraProfileWithID:(id)arg0 ;
-(id)_prepareServiceGroupPayload;
-(id)actionContextForCameraProfileID:(id)arg0 ;
-(id)dumpState;
-(id)initWithBulletinBoardNotification:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)logIdentifier;
-(void)_configureServices;
-(void)_handleBulletinBoardNotificationServiceGroupRequest:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)_sendNotification:(id)arg0 ;
-(void)_updateAssociatedServices:(id)arg0 associatedCameras:(id)arg1 ;
-(void)_updateAssociatedServicesTable:(id)arg0 ;
-(void)configureBulletinNotification;
-(void)configureWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif