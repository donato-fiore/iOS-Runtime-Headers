// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSNAPSHOTCATRANSACTIONHANDLER_H
#define HMDSNAPSHOTCATRANSACTIONHANDLER_H

@class HMFObject, BSPortDeathWatcher, NSString, CAContext;
@protocol HMFLogging, OS_dispatch_queue;



@interface HMDSnapshotCATransactionHandler : HMFObject <HMFLogging>



@property (retain, nonatomic) BSPortDeathWatcher *backboardServicesWatcher; // ivar: _backboardServicesWatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CAContext *snapshotContext; // ivar: _snapshotContext
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedHandler;
-(id)_createSlot:(id)arg0 snapshotCATransaction:(id)arg1 ;
-(id)createSlot:(id)arg0 ;
-(id)init;
-(struct CGImage *)createSnapshotCGImageRef:(id)arg0 ;
-(void)_backboardServicesRelaunched;
-(void)_createSnapshotContext;
-(void)_deleteSlot:(id)arg0 filePath:(id)arg1 snapshotCATransaction:(id)arg2 ;
-(void)deleteSlot:(id)arg0 filePath:(id)arg1 ;


@end


#endif