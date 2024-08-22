// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDPAIREDSYNC_H
#define HMDPAIREDSYNC_H

@class HMFObject, PSYSyncCoordinator, NSString;
@protocol PSYSyncCoordinatorDelegate, HMDPairedSyncDelegate, OS_dispatch_queue;



@interface HMDPairedSync : HMFObject <PSYSyncCoordinatorDelegate>



@property (readonly, nonatomic) PSYSyncCoordinator *coordinator; // ivar: _coordinator
@property (nonatomic) NSUInteger currentOperationCount; // ivar: _currentOperationCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDPairedSyncDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)restrictionAsString:(NSUInteger)arg0 ;
-(void)_callStartSync;
-(void)needToSync;
-(void)syncComplete;
-(void)syncCoordinator:(id)arg0 beginSyncSession:(id)arg1 ;
-(void)syncCoordinator:(id)arg0 didInvalidateSyncSession:(id)arg1 ;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg0 ;
-(void)syncPartiallyComplete;


@end


#endif