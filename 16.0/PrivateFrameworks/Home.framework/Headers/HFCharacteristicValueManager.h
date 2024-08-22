// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCHARACTERISTICVALUEMANAGER_H
#define HFCHARACTERISTICVALUEMANAGER_H

@class NSSet, NSMutableDictionary, NSMutableSet, NSMutableArray, NSString, NAFuture, NACancelationToken, NSRecursiveLock;
@protocol HFLightProfileValueSource, HFCharacteristicValueSource, HFCharacteristicOperationContextProviding, HFCharacteristicValueReader, HFCharacteristicValueWriter;

#import <Foundation/Foundation.h>

#import "HFCharacteristicValueCacheManager.h"
#import "HFCharacteristicValueTransaction.h"
#import "HFCharacteristicReadLogger.h"

@interface HFCharacteristicValueManager : NSObject <HFLightProfileValueSource, HFCharacteristicValueSource>



@property (nonatomic) NSInteger _debug_totalNumberOfIssuedBatchReadRequests; // ivar: __debug_totalNumberOfIssuedBatchReadRequests
@property (readonly, copy, nonatomic) NSSet *allReadCharacteristics;
@property (retain, nonatomic) HFCharacteristicValueCacheManager *cacheManager; // ivar: _cacheManager
@property (retain, nonatomic) NSMutableDictionary *cachedExecutionErrorsKeyedByActionSetIdentifier; // ivar: _cachedExecutionErrorsKeyedByActionSetIdentifier
@property (retain, nonatomic) NSMutableDictionary *cachedReadErrorsKeyedByCharacteristicIdentifier; // ivar: _cachedReadErrorsKeyedByCharacteristicIdentifier
@property (retain, nonatomic) NSMutableDictionary *cachedWriteErrorsKeyedByCharacteristicIdentifier; // ivar: _cachedWriteErrorsKeyedByCharacteristicIdentifier
@property (retain, nonatomic) NSMutableSet *characteristicsWithCachedValues; // ivar: _characteristicsWithCachedValues
@property (readonly, copy, nonatomic) NSSet *characteristicsWithPendingReads;
@property (readonly, copy, nonatomic) NSSet *characteristicsWithPendingWrites;
@property (retain, nonatomic) NSMutableArray *completionHandlersForReadTransactionsToExecuteOnNextRunLoop; // ivar: _completionHandlersForReadTransactionsToExecuteOnNextRunLoop
@property (readonly, nonatomic) NSObject<HFCharacteristicOperationContextProviding> *contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NAFuture *firstReadCompleteFuture; // ivar: _firstReadCompleteFuture
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NACancelationToken *inFlightReadCancelationToken; // ivar: _inFlightReadCancelationToken
@property (retain, nonatomic) NSMutableSet *mutableAllReadCharacteristics; // ivar: _mutableAllReadCharacteristics
@property (retain, nonatomic) HFCharacteristicValueTransaction *openTransaction; // ivar: _openTransaction
@property (retain, nonatomic) NSMutableArray *readTransactionsToExecuteOnNextRunLoop; // ivar: _readTransactionsToExecuteOnNextRunLoop
@property (retain, nonatomic) HFCharacteristicReadLogger *readsCompleteLogger; // ivar: _readsCompleteLogger
@property (retain, nonatomic) NSMutableArray *runningTransactions; // ivar: _runningTransactions
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSRecursiveLock *transactionLock; // ivar: _transactionLock
@property (retain, nonatomic) NSObject<HFCharacteristicValueReader> *valueReader; // ivar: _valueReader
@property (retain, nonatomic) NSObject<HFCharacteristicValueWriter> *valueWriter; // ivar: _valueWriter


+(BOOL)_shouldTrackReadsCompleteForPerformanceTesting;
+(id)na_identity;
-(BOOL)hasCachedReadErrorForAccessory:(id)arg0 passingTest:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNaturalLightingEnabledForProfile:(id)arg0 ;
-(BOOL)isNaturalLightingSupportedForProfile:(id)arg0 ;
-(NSUInteger)loadingStateForCharacteristics:(id)arg0 actionSets:(id)arg1 ;
-(id)_transactionLock_characteristicsWithPendingWritesInTransacton:(id)arg0 includeDirectWrites:(BOOL)arg1 includeActionSets:(BOOL)arg2 includeActions:(BOOL)arg3 ;
-(id)cachedErrorForExecutionOfActionSet:(id)arg0 ;
-(id)cachedErrorForWriteToCharacteristic:(id)arg0 ;
-(id)cachedReadErrorForCharacteristic:(id)arg0 ;
-(id)cachedValueForCharacteristic:(id)arg0 ;
-(id)executeActionSet:(id)arg0 ;
-(id)executeActions:(id)arg0 ;
-(id)initWithValueReader:(id)arg0 valueWriter:(id)arg1 ;
-(id)readValueForCharacteristic:(id)arg0 ;
-(id)readValuesForCharacteristicTypes:(id)arg0 inServices:(id)arg1 ;
-(id)readValuesForCharacteristics:(id)arg0 ;
// -(id)readValuesForCharacteristicsPassingTest:(id)arg0 inServices:(unk)arg1  ;
-(id)writeNaturalLightEnabledState:(BOOL)arg0 forProfile:(id)arg1 ;
-(id)writeValue:(id)arg0 forCharacteristic:(id)arg1 ;
-(id)writeValuesForCharacteristics:(id)arg0 ;
-(void)_beginReadsCompleteTrackingForCharacteristics:(id)arg0 withLogger:(id)arg1 ;
-(void)_endReadsCompleteTrackingForCharacteristic:(id)arg0 withLogger:(id)arg1 didRead:(BOOL)arg2 ;
-(void)_transactionLock_executeActionSetTransaction:(id)arg0 completionHandler:(id)arg1 ;
-(void)_transactionLock_executeActionsTransaction:(id)arg0 completionHandler:(id)arg1 ;
-(void)_transactionLock_executeReadTransaction:(id)arg0 completionHandler:(id)arg1 ;
-(void)_transactionLock_executeWriteTransaction:(id)arg0 completionHandler:(id)arg1 ;
-(void)beginTransactionWithReason:(id)arg0 ;
-(void)beginTransactionWithReason:(id)arg0 readPolicy:(id)arg1 logger:(id)arg2 ;
-(void)cancelInFlightReadRequests;
-(void)commitTransactionWithReason:(id)arg0 ;
-(void)executeActionSet:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchNaturalLightColorTemperatureForBrightness:(NSInteger)arg0 lightProfile:(id)arg1 completion:(id)arg2 ;
-(void)invalidateAllCachedErrors;
-(void)invalidateCachedErrorForExecutionOfActionSet:(id)arg0 ;
-(void)invalidateCachedValueForCharacteristic:(id)arg0 ;
-(void)invalidateCachedValuesForAccessory:(id)arg0 ;


@end


#endif