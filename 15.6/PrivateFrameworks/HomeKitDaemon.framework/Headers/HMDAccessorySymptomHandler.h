// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYSYMPTOMHANDLER_H
#define HMDACCESSORYSYMPTOMHANDLER_H

@class HMFObject, NSUUID, NSString, NSSet, HMFMessageDispatcher;
@protocol HMDAccessorySymptomsDelegate, NSSecureCoding, HMFLogging, HMDHomeMessageReceiver, OS_dispatch_queue;


#import "HMDAccessory.h"
#import "HMDSymptomManager.h"

@interface HMDAccessorySymptomHandler : HMFObject <HMDAccessorySymptomsDelegate, NSSecureCoding, HMFLogging, HMDHomeMessageReceiver>



@property (readonly, weak, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *localSymptoms; // ivar: _localSymptoms
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (retain, nonatomic) NSUUID *sfDeviceIdentifier; // ivar: _sfDeviceIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMDSymptomManager *symptomManager; // ivar: _symptomManager
@property (readonly, nonatomic) NSSet *symptoms;
@property (retain, nonatomic) NSSet *syncedSymptoms; // ivar: _syncedSymptoms
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)_filteredAccessorySymptomsForSymptoms:(id)arg0 ;
-(id)_filteredMediaSystemSymptomsForSymptoms:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 syncedSymptoms:(id)arg1 ;
-(id)initWithAccessory:(id)arg0 syncedSymptoms:(id)arg1 symptomManager:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)logIdentifier;
-(void)_handleFixErrorMessage:(id)arg0 ;
-(void)_refreshCurrentDeviceSymptoms;
-(void)_registerMessages;
-(void)_sendStatusUpdate;
-(void)_updateBackingStoreModelWithNewSyncedSymptoms:(id)arg0 ;
-(void)_updateStateWithNewBroadcastedSymptoms:(id)arg0 ;
-(void)_updateStateWithNewLocalSymptoms:(id)arg0 ;
-(void)_updateStateWithNewSFDeviceIdentifier:(id)arg0 ;
-(void)configureWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAccessoryDeviceUpdated;
-(void)handleCurrentDeviceSymptomsChangedNotification:(id)arg0 ;
-(void)handleNewSyncedSymptoms:(id)arg0 message:(id)arg1 ;
-(void)refreshCurrentDeviceSymptoms;
-(void)symptomManager:(id)arg0 didChangeBroadcastedSymptoms:(id)arg1 ;
-(void)symptomManager:(id)arg0 didChangeLocalSymptoms:(id)arg1 ;
-(void)symptomManager:(id)arg0 didChangeSFDeviceIdentifier:(id)arg1 ;


@end


#endif