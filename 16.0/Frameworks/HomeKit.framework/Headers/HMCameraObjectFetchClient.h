// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCAMERAOBJECTFETCHCLIENT_H
#define HMCAMERAOBJECTFETCHCLIENT_H

@class HMFObject, NSUUID, NSString, HMFMessageDestination, NSMutableArray, NSDictionary;
@protocol HMFLogging, HMFMessageReceiver, OS_dispatch_queue;


#import "_HMContext.h"

@interface HMCameraObjectFetchClient : HMFObject <HMFLogging, HMFMessageReceiver>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (retain) Class classForUnarchiving; // ivar: _classForUnarchiving
@property (readonly) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMFMessageDestination *destination; // ivar: _destination
@property (readonly) NSMutableArray *fetchedObjects; // ivar: _fetchedObjects
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *messageName; // ivar: _messageName
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy) NSDictionary *payload; // ivar: _payload
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithUUID:(id)arg0 context:(id)arg1 messageName:(id)arg2 destination:(id)arg3 ;
-(id)logIdentifier;
-(void)dealloc;
-(void)fetchWithCompletion:(id)arg0 ;
-(void)handleDidFetchObjectsMessage:(id)arg0 ;


@end


#endif