// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCBATCHEDRECORDCHAINFETCHOPERATION_H
#define FCBATCHEDRECORDCHAINFETCHOPERATION_H

@class NSArray, NSDictionary, NSError, NSMutableArray, NSMutableDictionary;
@protocol FCContentContext;


#import "FCOperation.h"

@interface FCBatchedRecordChainFetchOperation : FCOperation

@property (retain, nonatomic) NSArray *additionalRecordSources; // ivar: _additionalRecordSources
@property (copy, nonatomic) NSDictionary *cachePoliciesByRecordType; // ivar: _cachePoliciesByRecordType
@property (copy, nonatomic) id *cachedRecordsLookupBlock; // ivar: _cachedRecordsLookupBlock
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (copy, nonatomic) id *dynamicCachePolicyBlock; // ivar: _dynamicCachePolicyBlock
@property (copy, nonatomic) NSDictionary *linkKeysByRecordType; // ivar: _linkKeysByRecordType
@property (nonatomic) NSUInteger maxBatchSize; // ivar: _maxBatchSize
@property (retain, nonatomic) NSError *operationError; // ivar: _operationError
@property (copy, nonatomic) id *recordChainCompletionHandler; // ivar: _recordChainCompletionHandler
@property (retain, nonatomic) NSMutableArray *remainingRecordIDBatches; // ivar: _remainingRecordIDBatches
@property (retain, nonatomic) NSMutableDictionary *resultHeldRecordsByType; // ivar: _resultHeldRecordsByType
@property (copy, nonatomic) NSArray *topLevelRecordIDs; // ivar: _topLevelRecordIDs


-(BOOL)validateOperation;
-(id)init;
-(void)_continueRefreshing;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)resetForRetry;


@end


#endif