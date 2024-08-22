// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCRECORDCHAINFETCHOPERATION_H
#define FCRECORDCHAINFETCHOPERATION_H

@class NSArray, NSDictionary, NSMutableSet, NSMutableArray;
@protocol FCContentContext;


#import "FCOperation.h"
#import "FCHeldRecords.h"
#import "FCCachePolicy.h"
#import "FCEdgeCacheHint.h"

@interface FCRecordChainFetchOperation : FCOperation {
    NSArray *_recordSources;
    NSDictionary *_recordSourcesByRecordType;
    NSDictionary *_pbRecordTypesByRecordType;
    FCHeldRecords *_cachedRecords;
    NSMutableSet *_actualTopLevelRecordIDs;
    NSMutableSet *_skippedTopLevelRecordIDs;
    NSMutableSet *_missingCachedOnlyTopLevelRecordIDs;
    NSDictionary *_resultHeldRecordsByType;
    NSMutableArray *_mutableNetworkEvents;
}


@property (retain, nonatomic) NSArray *additionalRecordSources; // ivar: _additionalRecordSources
@property (copy, nonatomic) NSDictionary *cachePoliciesByRecordType; // ivar: _cachePoliciesByRecordType
@property (copy, nonatomic) FCCachePolicy *cachePolicy; // ivar: _cachePolicy
@property (copy, nonatomic) id *cachedRecordsLookupBlock; // ivar: _cachedRecordsLookupBlock
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (copy, nonatomic) id *dynamicCachePolicyBlock; // ivar: _dynamicCachePolicyBlock
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint; // ivar: _edgeCacheHint
@property (copy, nonatomic) NSDictionary *linkKeysByRecordType; // ivar: _linkKeysByRecordType
@property (nonatomic) int networkEventType; // ivar: _networkEventType
@property (readonly, copy, nonatomic) NSArray *networkEvents;
@property (copy, nonatomic) id *recordChainCompletionHandler; // ivar: _recordChainCompletionHandler
@property (nonatomic) BOOL shouldBypassRecordSourcePersistence; // ivar: _shouldBypassRecordSourcePersistence
@property (nonatomic) BOOL shouldFailOnLimitExceededError; // ivar: _shouldFailOnLimitExceededError
@property (nonatomic) BOOL shouldReturnErrorWhenSomeRecordsMissing; // ivar: _shouldReturnErrorWhenSomeRecordsMissing
@property (copy, nonatomic) NSArray *topLevelRecordIDs; // ivar: _topLevelRecordIDs


-(BOOL)validateOperation;
-(id)init;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;


@end


#endif