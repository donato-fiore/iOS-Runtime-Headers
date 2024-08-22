// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSNAPSHOTCACHEREQUESTHANDLER_H
#define HMDSNAPSHOTCACHEREQUESTHANDLER_H

@class HMFObject, NSMutableDictionary, NSString;
@protocol HMFLogging, HMFTimerDelegate, HMDSnapshotRequestHandlerProtocol, OS_dispatch_queue;



@interface HMDSnapshotCacheRequestHandler : HMFObject <HMFLogging, HMFTimerDelegate, HMDSnapshotRequestHandlerProtocol>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_snapshotCacheMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)isSnapshotPresentForCharacteristicEventUUID:(id)arg0 ;
-(id)initWithWorkQueue:(id)arg0 logID:(id)arg1 ;
-(void)addSnapshotFileToCache:(id)arg0 ;
-(void)removeSnapshotFileToCache:(id)arg0 error:(id)arg1 ;
-(void)requestSnapshot:(id)arg0 streamingTierType:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)setSnapshotFileToCache:(id)arg0 snapshotCharacteristicEventUUID:(id)arg1 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif