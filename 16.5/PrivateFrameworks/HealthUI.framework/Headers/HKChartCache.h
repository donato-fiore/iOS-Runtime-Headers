// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCHARTCACHE_H
#define HKCHARTCACHE_H

@class NSHashTable, NSMutableDictionary, NSArray;
@protocol HKChartCacheDataSource, HKChartCachePriorityDelegate;

#import <Foundation/Foundation.h>

#import "_HKChartCachePendingFetchOperationManager.h"
#import "HKOutstandingFetchOperationManager.h"

@interface HKChartCache : NSObject {
    NSHashTable *_observers;
    NSMutableDictionary *_cachedResultsByIdentifier;
    _HKChartCachePendingFetchOperationManager *_pendingFetchOperationsManager;
    NSMutableDictionary *_resultsLoadedByIdentifier;
}


@property (retain, nonatomic) NSArray *bufferedIdentifiers; // ivar: _bufferedIdentifiers
@property (retain, nonatomic) NSObject<HKChartCacheDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) id *dataSourceRespectingType;
@property (nonatomic) NSInteger maxRetryCount; // ivar: _maxRetryCount
@property (retain, nonatomic) HKOutstandingFetchOperationManager *operationManager; // ivar: _operationManager
@property (weak, nonatomic) NSObject<HKChartCachePriorityDelegate> *priorityDelegateForBufferedIdentifiers; // ivar: _priorityDelegateForBufferedIdentifiers
@property (nonatomic) BOOL shouldBufferFetchOperations; // ivar: _shouldBufferFetchOperations


-(NSUInteger)stateForIdentifier:(id)arg0 ;
-(id)_operationForIdentifier:(id)arg0 priorityDelegate:(id)arg1 ;
-(id)cachedResultsForIdentifier:(id)arg0 ;
-(id)init;
-(void)_addFetchOperationsForIdentifiers:(id)arg0 priorityDelegate:(id)arg1 ;
-(void)_alertObserversDidUpdateResults;
-(void)_handleOperationCompletionWithOperation:(id)arg0 identifier:(id)arg1 priorityDelegate:(id)arg2 results:(id)arg3 error:(id)arg4 ;
-(void)_removeFetchOperationsForIdentifiers:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)fetchResultsForIdentifiers:(id)arg0 priorityDelegate:(id)arg1 ;
-(void)invalidateCache;
-(void)invalidateResultsForIdentifiers:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif