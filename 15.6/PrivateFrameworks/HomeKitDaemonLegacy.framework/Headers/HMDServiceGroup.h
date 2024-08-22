// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSERVICEGROUP_H
#define HMDSERVICEGROUP_H

@class HMFObject, HMFUnfairLock, NSMutableArray, NSDictionary, NSString, NSSet, NSUUID, HMFMessageDispatcher, NSMutableDictionary, NSArray;
@protocol HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol, OS_dispatch_queue;


#import "HMDApplicationData.h"
#import "HMDHome.h"

@interface HMDServiceGroup : HMFObject <HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol>

 {
    HMFUnfairLock *_lock;
    NSMutableArray *_serviceUUIDs;
}


@property (retain, nonatomic) HMDApplicationData *appData; // ivar: _appData
@property (readonly, copy) NSDictionary *assistantObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableDictionary *serviceMapping; // ivar: _serviceMapping
@property (readonly, copy) NSArray *serviceUUIDs;
@property (readonly, copy) NSUUID *spiClientIdentifier; // ivar: _spiClientIdentifier
@property (readonly) Class superclass;
@property (readonly, copy) NSString *urlString;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
-(id)backingStoreObjects:(NSInteger)arg0 ;
-(id)dumpState;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 uuid:(id)arg1 home:(id)arg2 queue:(id)arg3 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)updateServiceGroupWithModel:(id)arg0 message:(id)arg1 ;
-(void)_handleAddServiceRequest:(id)arg0 ;
-(void)_handleRemoveAppDataModel:(id)arg0 message:(id)arg1 ;
-(void)_handleRemoveServiceRequest:(id)arg0 ;
-(void)_handleRenameRequest:(id)arg0 ;
-(void)_handleUpdateAppDataModel:(id)arg0 message:(id)arg1 ;
-(void)_handleUpdateServicesTransaction:(id)arg0 ;
-(void)_registerForMessages;
-(void)_transactionServiceGroupUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)configure:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fixupServiceGroup;
-(void)fixupServicesForReplacementAccessory:(id)arg0 ;
-(void)removeService:(id)arg0 ;
-(void)removeServicesForAccessory:(id)arg0 ;
-(void)setServiceIfPresent:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif