// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STOCKMANAGER_H
#define STOCKMANAGER_H

@class NSMutableArray, NSUbiquitousKeyValueStore;

#import <Foundation/Foundation.h>


@interface StockManager : NSObject {
    NSMutableArray *_defaultListStockSymbols;
    BOOL _shouldPostSyncNotifications;
    NSMutableArray *_stocksList;
    NSMutableArray *_chartDataLRUCache;
    CGFloat _lastModifiedTime;
    BOOL _needRemoteAddNotification;
    BOOL _needRemoteDeleteNotification;
    BOOL _needRemoteMoveNotification;
    NSUbiquitousKeyValueStore *_syncedKVStore;
}




+(id)sharedManager;
+(void)clearSharedManager;
-(BOOL)anyMarketOpen;
-(BOOL)setLocalStockListFromSyncableStockList:(id)arg0 ;
-(id)_defaultStockDictionaries;
-(id)init;
-(id)makeSyncableStockListFromList:(id)arg0 ;
-(id)stockForURL:(id)arg0 ;
-(id)stockWithSymbol:(id)arg0 ;
-(id)stocksList;
-(void)DeleteChartData:(id)arg0 ;
-(void)RemoveChartDataFromLRU:(id)arg0 ;
-(void)UpdateChartDataInLRU:(id)arg0 ;
-(void)_addStock:(id)arg0 withRemoteNotification:(BOOL)arg1 ;
-(void)_checkForAddedStocks;
-(void)_checkForDeletedStocks;
-(void)_checkForMovedStocks;
-(void)_removeStock:(id)arg0 withRemoteNotification:(BOOL)arg1 ;
-(void)_saveDataChangesWithStockDictionaries:(id)arg0 ;
-(void)addStock:(id)arg0 ;
-(void)clearCachedChartData;
-(void)clearCachedChartDataImageSets;
-(void)dealloc;
-(void)handleSyncedDataChanged:(id)arg0 ;
-(void)moveStockFromIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;
-(void)purgeTransientData;
-(void)reloadStocksFromDefaults;
-(void)removeStock:(id)arg0 ;
-(void)saveDataChanges;
-(void)saveListChanges;


@end


#endif