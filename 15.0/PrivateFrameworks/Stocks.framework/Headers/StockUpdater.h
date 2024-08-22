// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STOCKUPDATER_H
#define STOCKUPDATER_H

@class NSError, NSArray;
@protocol StockUpdaterDelegate;


#import "YQLRequest.h"

@interface StockUpdater : YQLRequest {
    NSError *_lastError;
}


@property (weak, nonatomic) NSObject<StockUpdaterDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL forceUpdate; // ivar: _forceUpdate
@property (readonly, nonatomic) BOOL isComprehensive; // ivar: _isComprehensive
@property (retain, nonatomic) NSArray *pendingStocks; // ivar: _pendingStocks
@property (retain, nonatomic) NSArray *requestStocks; // ivar: _requestStocks
@property (copy, nonatomic) id *updateCompletionHandler; // ivar: _updateCompletionHandler


-(BOOL)_updateStocks:(id)arg0 comprehensive:(BOOL)arg1 forceUpdate:(BOOL)arg2 ;
-(BOOL)hadError;
-(void)_parseExchangeDictionaries:(id)arg0 ;
-(void)_parseQuoteDictionaries:(id)arg0 withDataSourceDictionaries:(id)arg1 ;
-(void)didParseData;
-(void)failWithError:(id)arg0 ;
-(void)parseData:(id)arg0 ;


@end


#endif