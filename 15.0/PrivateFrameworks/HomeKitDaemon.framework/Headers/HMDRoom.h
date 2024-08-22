// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDROOM_H
#define HMDROOM_H

@class HMFObject, NSDictionary, NSString, NSSet, NSUUID, HMFMessageDispatcher;
@protocol HMFLogging, HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol, OS_dispatch_queue;


#import "HMDApplicationData.h"
#import "HMDHome.h"

@interface HMDRoom : HMFObject <HMFLogging, HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol>



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
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *serializedIdentifier;
@property (readonly, copy) NSUUID *spiClientIdentifier; // ivar: _spiClientIdentifier
@property (readonly) Class superclass;
@property (readonly, copy) NSString *urlString;
@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)attributeDescriptions;
-(id)backingStoreObjects:(NSInteger)arg0 ;
-(id)dumpState;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 uuid:(id)arg1 home:(id)arg2 ;
-(id)logIdentifier;
-(id)messageDestination;
-(id)privateDescription;
-(void)_handleRemoveAppDataModel:(id)arg0 message:(id)arg1 ;
-(void)_handleRenameRequest:(id)arg0 ;
-(void)_handleUpdateAppDataModel:(id)arg0 message:(id)arg1 ;
-(void)_handleUpdateRoomModel:(id)arg0 message:(id)arg1 ;
-(void)_registerForMessages;
-(void)configure:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif