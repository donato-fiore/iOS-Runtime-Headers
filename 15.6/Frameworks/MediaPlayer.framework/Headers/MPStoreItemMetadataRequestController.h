// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTOREITEMMETADATAREQUESTCONTROLLER_H
#define MPSTOREITEMMETADATAREQUESTCONTROLLER_H

@class NSOperationQueue, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPStoreItemMetadataRequestController : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSOperationQueue *_operationQueue;
    NSUInteger _lastExpiredMetadataPurgeMachTime;
    NSMutableDictionary *_itemCaches;
    os_unfair_lock_s _transactionLock;
    NSInteger _transactionCount;
}


@property (nonatomic) NSInteger cacheSize; // ivar: _cacheSize


+(NSUInteger)optimalBatchSize;
+(id)sharedStoreItemMetadataRequestController;
-(id)getStoreItemMetadataForRequest:(id)arg0 includeBatchResponseError:(BOOL)arg1 responseHandler:(id)arg2 ;
-(id)getStoreItemMetadataForRequest:(id)arg0 responseHandler:(id)arg1 ;
-(id)init;
-(void)_removeExpiredItemsPeriodically;
-(void)addStoreItemMetadata:(id)arg0 ;
-(void)addStoreItemMetadata:(id)arg0 forUserIdentity:(id)arg1 ;
-(void)beginTransaction;
-(void)endTransaction;
-(void)requestStoreItemMetadataForReason:(NSUInteger)arg0 withItemIdentifiers:(id)arg1 responseHandler:(id)arg2 ;


@end


#endif