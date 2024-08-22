// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOREFOLLOWUPMANAGER_H
#define HMDCOREFOLLOWUPMANAGER_H

@class HMFObject, NSString, NSOperationQueue;
@protocol HMFLogging, HMDCoreFollowUpManagerDataSource, OS_dispatch_queue;



@interface HMDCoreFollowUpManager : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) NSObject<HMDCoreFollowUpManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSOperationQueue *followUpOperationQueue; // ivar: _followUpOperationQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)allPossibleFollowUpItemIdentifiers;
+(id)logCategory;
-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(void)_startAdvertising:(NSInteger)arg0 ;
-(void)_stopAdvertising:(NSInteger)arg0 ;
-(void)removeAllFollowUpItemsWithCompletion:(id)arg0 ;
-(void)startAdvertising:(NSInteger)arg0 ;
-(void)stopAdvertising:(NSInteger)arg0 ;


@end


#endif