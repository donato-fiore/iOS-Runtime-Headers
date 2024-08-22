// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEREMOTEDATACOORDINATOR_H
#define TSCEREMOTEDATACOORDINATOR_H

@class NSMutableDictionary, TSUIntToIntDictionary, NSMutableSet, TSUPointerKeyDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSCERemoteDataValueMap.h"

@interface TSCERemoteDataCoordinator : NSObject

@property (readonly, nonatomic) NSMutableDictionary *cachedQuotes; // ivar: _cachedQuotes
@property (readonly, nonatomic) TSCERemoteDataValueMap *cachedSpecifiers; // ivar: _cachedSpecifiers
@property (readonly, nonatomic) TSUIntToIntDictionary *dataKindStatus; // ivar: _dataKindStatus
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSMutableSet *sourceFetchers; // ivar: _sourceFetchers
@property (readonly, nonatomic) TSUPointerKeyDictionary *storeMap; // ivar: _storeMap


+(id)sharedCoordinator;
-(BOOL)isOnlineForDataKind:(NSInteger)arg0 ;
-(BOOL)p_canUpdateStore:(id)arg0 ;
-(id)cachedQuoteForSingleSymbol:(id)arg0 ;
-(id)init;
-(id)p_actionMapForKeys:(id)arg0 quotes:(id)arg1 ;
-(id)p_dataSourceFetcherForRemoteData:(id)arg0 ;
-(id)p_defaultStockList;
-(id)p_fetcherForDataKind:(NSInteger)arg0 ;
-(id)p_localeStocks;
-(id)valueForSingleKey:(id)arg0 ;
-(void)addRemoteDataInterest:(id)arg0 forStore:(id)arg1 ;
-(void)autoCompleteQuotesWithInput:(id)arg0 completion:(id)arg1 ;
-(void)fetchQuotesWithTickers:(id)arg0 completion:(id)arg1 ;
-(void)p_removeRemoteDataInterest:(id)arg0 forStore:(id)arg1 ;
-(void)p_revalidateOnlineStatus;
-(void)registerStore:(id)arg0 ;
-(void)removeRemoteDataInterest:(id)arg0 forStore:(id)arg1 ;
-(void)sourceFetcherDidGoOffline:(id)arg0 forKeys:(id)arg1 ;
-(void)sourceFetcherDidGoOnline:(id)arg0 forKeys:(id)arg1 ;
-(void)sourceFetcherDidUpdate:(id)arg0 withValues:(id)arg1 quotes:(id)arg2 ;
-(void)unregisterStore:(id)arg0 ;
-(void)updateKnownCachedStocksInStore:(id)arg0 ;


@end


#endif