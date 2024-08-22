// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCAMERAOBJECTFETCHSERVER_H
#define HMCAMERAOBJECTFETCHSERVER_H

@class HMFObject, NSUUID, NSMutableArray, NSString, HMFMessageTransport;
@protocol HMFLogging, OS_dispatch_queue;



@interface HMCameraObjectFetchServer : HMFObject <HMFLogging>



@property (readonly) BOOL canHandleMoreFetchedObjects;
@property (readonly, copy) NSUUID *clientUUID; // ivar: _clientUUID
@property (readonly) NSMutableArray *currentlyBatchedFetchedObjects; // ivar: _currentlyBatchedFetchedObjects
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSUInteger fetchedObjectsBatchLimit; // ivar: _fetchedObjectsBatchLimit
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property NSUInteger totalFetchedObjectsCount; // ivar: _totalFetchedObjectsCount
@property NSUInteger totalFetchedObjectsLimit; // ivar: _totalFetchedObjectsLimit
@property (weak) HMFMessageTransport *transport; // ivar: _transport
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithClientUUID:(id)arg0 transport:(id)arg1 workQueue:(id)arg2 ;
-(id)initWithFetchMessage:(id)arg0 workQueue:(id)arg1 ;
-(id)logIdentifier;
-(void)_notifyTransport:(id)arg0 ofFetchedObjects:(id)arg1 forClientUUID:(id)arg2 responseHandler:(id)arg3 ;
-(void)handleFetchedObject:(id)arg0 ;
-(void)sendCurrentlyBatchedFetchedObjectsWithCompletion:(id)arg0 ;


@end


#endif