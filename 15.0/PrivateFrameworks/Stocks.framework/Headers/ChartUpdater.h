// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHARTUPDATER_H
#define CHARTUPDATER_H

@protocol ChartUpdaterDelegate;


#import "YQLRequest.h"
#import "Stock.h"
#import "StockChartData.h"

@interface ChartUpdater : YQLRequest {
    Stock *_stock;
    StockChartData *_currentChartData;
    id *_updateCompletionHandler;
}


@property (weak, nonatomic) NSObject<ChartUpdaterDelegate> *delegate; // ivar: _delegate
@property (readonly) NSInteger interval; // ivar: _interval


+(id)_rangeStringForInterval:(NSInteger)arg0 ;
-(BOOL)updateChartForStock:(id)arg0 interval:(NSInteger)arg1 ;
-(BOOL)updateChartForStock:(id)arg0 interval:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(id)dataSeries;
-(void)cancel;
-(void)didParseData;
-(void)failWithError:(id)arg0 ;
-(void)parseData:(id)arg0 ;
-(void)parseDataSeriesDictionary:(id)arg0 ;
-(void)parseDataSeriesDictionary:(id)arg0 interval:(NSInteger)arg1 ;


@end


#endif