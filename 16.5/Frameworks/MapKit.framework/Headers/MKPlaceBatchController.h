// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLACEBATCHCONTROLLER_H
#define MKPLACEBATCHCONTROLLER_H

@class NSArray, NSString;
@protocol MKPlaceBatchDisplayCoordinator, OS_dispatch_queue, MKPlaceBatchConsumer, MKPlaceBatchFetcher;

#import <Foundation/Foundation.h>


@interface MKPlaceBatchController : NSObject <MKPlaceBatchDisplayCoordinator>

 {
    NSInteger _lastDisplayedIndex;
    NSUInteger _numberOfBatches;
    NSInteger _lastFetchedBatch;
    NSInteger _state;
    NSArray *_batches;
    NSUInteger _totalIdentifiers;
    NSUInteger _totalIdentifiersFetched;
    NSObject<OS_dispatch_queue> *_batchControllerQueue;
}


@property (weak, nonatomic) NSObject<MKPlaceBatchConsumer> *batchConsumer; // ivar: _batchConsumer
@property (weak, nonatomic) NSObject<MKPlaceBatchFetcher> *batchFetcher; // ivar: _batchFetcher
@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger minNumberOfItems; // ivar: _minNumberOfItems
@property (readonly) Class superclass;


-(NSInteger)lastDisplayedIndexForTesting;
-(NSInteger)lastFetchedBatchForTesting;
-(NSInteger)stateForTesting;
-(id)batchesForTesting;
-(id)initWithItemIdentifiers:(id)arg0 withBatchSize:(NSUInteger)arg1 minimumNumberOfItemBeforeFetching:(NSUInteger)arg2 shouldLoadFirstBatchImmediately:(BOOL)arg3 usingBatchFetcher:(id)arg4 usingBatchConsumer:(id)arg5 displayedItemCount:(NSUInteger)arg6 ;
-(void)buildBatchesFromIdentifiers:(id)arg0 ;
-(void)didDisplayItemAtIndex:(NSUInteger)arg0 ;
-(void)fetchBatchItemsWithIdentifiers:(id)arg0 ;
-(void)handleFetchGuidesCompleted:(BOOL)arg0 error:(id)arg1 usingGuides:(id)arg2 ;


@end


#endif