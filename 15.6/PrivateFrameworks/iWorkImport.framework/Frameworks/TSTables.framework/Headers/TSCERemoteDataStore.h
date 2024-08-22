// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEREMOTEDATASTORE_H
#define TSCEREMOTEDATASTORE_H

@class TSPObject, NSMutableDictionary, NSMutableSet, NSOperationQueue;
@protocol TSCERemoteDataStoreDelegate, OS_dispatch_queue, OS_dispatch_semaphore;


#import "TSCECalculationEngine.h"
#import "TSCERemoteDataCoordinator.h"
#import "TSCERemoteDataSpecifierSet.h"
#import "TSCERemoteDataValueMap.h"

@interface TSCERemoteDataStore : TSPObject

@property (readonly, nonatomic) NSMutableDictionary *cachedStocks; // ivar: _cachedStocks
@property (weak, nonatomic) TSCECalculationEngine *calculationEngine; // ivar: _calculationEngine
@property (readonly, nonatomic) TSCERemoteDataCoordinator *coordinator;
@property (weak, nonatomic) NSObject<TSCERemoteDataStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasArchivableState;
@property (readonly, nonatomic) BOOL hasFullyPopulatedCache;
@property (nonatomic) BOOL hasInterestingKeys; // ivar: _hasInterestingKeys
@property (readonly, nonatomic) TSCERemoteDataSpecifierSet *interestingKeys; // ivar: _interestingKeys
@property (readonly, nonatomic) NSMutableDictionary *ownerMap; // ivar: _ownerMap
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL registeredWithCoordinator; // ivar: _registeredWithCoordinator
@property (readonly, nonatomic) TSCERemoteDataValueMap *remoteDataMap; // ivar: _remoteDataMap
@property (nonatomic) CGFloat remoteDataSyncKey; // ivar: _remoteDataSyncKey
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *tspSemaphore; // ivar: _tspSemaphore
@property (retain, nonatomic) NSMutableSet *unSyncedStocks; // ivar: _unSyncedStocks
@property (readonly, nonatomic) NSOperationQueue *updateQueue; // ivar: _updateQueue


-(BOOL)p_isInCollaborationMode;
-(id)allQuotes;
-(id)allRemoteData;
-(id)cachedQuoteForSymbol:(id)arg0 ;
-(id)initWithContext:(id)arg0 calculationEngine:(id)arg1 ;
-(id)p_dictionaryForRemoteData:(id)arg0 ;
-(id)p_updateCachesWithMap:(id)arg0 quotes:(id)arg1 overwriteValues:(BOOL)arg2 ;
-(struct TSCEValue )p_tsceValueFromTsceCellValue:(id)arg0 ;
-(struct TSCEValue )valueForRemoteData:(id)arg0 ;
-(void)addRemoteDataInterest:(id)arg0 forOwner:(struct TSKUIDStruct *)arg1 ;
-(void)dealloc;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_initializeQueue;
-(void)p_recursiveWriteWillModify:(BOOL)arg0 withBlock:(id)arg1 ;
-(void)registerWithCoordinator;
-(void)remoteDataDidUpdateValues:(id)arg0 quotes:(id)arg1 ;
-(void)removeRemoteDataInterest:(id)arg0 forOwner:(struct TSKUIDStruct *)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)unregisterWithCoordinator;
-(void)updateCachedStocksFromKnownStocks:(id)arg0 ;
-(void)updateCachedStocksIntoStore:(id)arg0 ;
-(void)updateWithRemoteDataMap:(id)arg0 quotes:(id)arg1 syncKey:(CGFloat)arg2 ;


@end


#endif