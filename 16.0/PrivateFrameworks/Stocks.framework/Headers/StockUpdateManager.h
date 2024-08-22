// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STOCKUPDATEMANAGER_H
#define STOCKUPDATEMANAGER_H

@class NSMutableArray, NSHashTable, NSString;
@protocol StockUpdaterDelegate;

#import <Foundation/Foundation.h>


@interface StockUpdateManager : NSObject <StockUpdaterDelegate>

 {
    BOOL _postingRemoteUpdateNotification;
    NSMutableArray *_activeUpdaters;
    NSMutableArray *_inactiveUpdaters;
    NSHashTable *_updateObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)hadError;
-(BOOL)isLoading;
-(id)availableStockUpdater;
-(id)init;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg0 usingBlock:(id)arg1 ;
-(void)_kickoffUpdater:(id)arg0 forStocks:(id)arg1 comprehensive:(BOOL)arg2 forceUpdate:(BOOL)arg3 completion:(id)arg4 ;
-(void)_stocksDidReload;
-(void)_updateStocksBasic:(id)arg0 forced:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_updaterDidCancelOrFinish:(id)arg0 ;
-(void)addUpdateObserver:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)failWithError:(id)arg0 ;
-(void)removeUpdateObserver:(id)arg0 ;
-(void)reset;
-(void)resetUpdaters;
-(void)stockUpdater:(id)arg0 didFailWithError:(id)arg1 whileUpdatingStocks:(id)arg2 comprehensive:(BOOL)arg3 ;
-(void)stockUpdater:(id)arg0 didRequestUpdateForStocks:(id)arg1 isComprehensive:(BOOL)arg2 ;
-(void)stockUpdater:(id)arg0 didUpdateStocks:(id)arg1 isComprehensive:(BOOL)arg2 ;
-(void)stocksDidUpdateRemotely;
-(void)updateAllStocksBasic;
-(void)updateAllStocksBasic:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateAllStocksBasicWithCompletion:(id)arg0 ;
-(void)updateStaleStocksBasicWithCompletion:(id)arg0 ;
-(void)updateStockBasicWithCompletion:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateStockComprehensive:(id)arg0 ;
-(void)updateStockComprehensive:(id)arg0 forced:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)updateStockComprehensive:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateStocksComprehensive:(id)arg0 ;


@end


#endif