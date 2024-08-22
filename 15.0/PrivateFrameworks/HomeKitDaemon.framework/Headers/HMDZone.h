// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDZONE_H
#define HMDZONE_H

@class HMFObject, HMFUnfairLock, NSMutableArray, NSMutableDictionary, NSDictionary, NSString, NSSet, NSUUID, HMFMessageDispatcher, NSArray;
@protocol HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol, OS_dispatch_queue;


#import "HMDHome.h"

@interface HMDZone : HMFObject <HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol>

 {
    HMFUnfairLock *_lock;
    NSMutableArray *_roomUUIDs;
    NSMutableDictionary *_currentRooms;
}


@property (readonly, copy) NSDictionary *assistantObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (copy) NSString *name; // ivar: _name
@property (readonly, copy) NSArray *roomUUIDs;
@property (readonly, copy) NSUUID *spiClientIdentifier; // ivar: _spiClientIdentifier
@property (readonly) Class superclass;
@property (readonly, copy) NSString *urlString;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
-(id)_checkForAddValidity:(id)arg0 ;
-(id)_handleRenameZoneTransaction:(id)arg0 error:(*id)arg1 ;
-(id)_handleSetRoomsTransactionWithRoomUUIDStrings:(id)arg0 error:(*id)arg1 ;
-(id)backingStoreObjects:(NSInteger)arg0 ;
-(id)dumpState;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 uuid:(id)arg1 home:(id)arg2 queue:(id)arg3 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)rooms;
-(id)updateZoneWithModel:(id)arg0 message:(id)arg1 ;
-(void)_handleAddRoom:(id)arg0 ;
-(void)_handleRemoveRoom:(id)arg0 ;
-(void)_handleRename:(id)arg0 ;
-(void)_registerForMessages;
-(void)configure:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeRoom:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif