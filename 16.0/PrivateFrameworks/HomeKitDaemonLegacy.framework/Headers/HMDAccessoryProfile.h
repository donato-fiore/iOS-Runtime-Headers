// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYPROFILE_H
#define HMDACCESSORYPROFILE_H

@class HMFObject, NSString, NSUUID, NSSet, HMFMessageDispatcher, NSArray;
@protocol HMDBulletinIdentifiers, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding, OS_dispatch_queue;


#import "HMDAccessory.h"

@interface HMDAccessoryProfile : HMFObject <HMDBulletinIdentifiers, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding>



@property (readonly, weak) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, copy, nonatomic) NSString *contextID;
@property (readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly, nonatomic) NSArray *services; // ivar: _services
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)dumpState;
-(id)findServiceWithType:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 uniqueIdentifier:(id)arg1 services:(id)arg2 ;
-(id)initWithAccessory:(id)arg0 uniqueIdentifier:(id)arg1 services:(id)arg2 workQueue:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)runtimeState;
-(void)configureWithMessageDispatcher:(id)arg0 configurationTracker:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleInitialState;
-(void)registerForMessages;
-(void)removeCloudData;
-(void)unconfigure;


@end


#endif