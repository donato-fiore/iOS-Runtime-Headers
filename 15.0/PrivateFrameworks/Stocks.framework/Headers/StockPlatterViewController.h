// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STOCKPLATTERVIEWCONTROLLER_H
#define STOCKPLATTERVIEWCONTROLLER_H

@class UIViewController, UIButton, NSString, UILabel, UIView, UITableView;
@protocol StockChartViewDelegate, UITableViewDelegate, UITableViewDataSource;


#import "ChartUpdater.h"
#import "StockChartView.h"
#import "StocksLayout.h"
#import "NetPreferences.h"
#import "Stock.h"
#import "StockFetcher.h"
#import "StockManager.h"
#import "StockUpdateManager.h"
#import "StocksStyle.h"

@interface StockPlatterViewController : UIViewController <StockChartViewDelegate, UITableViewDelegate, UITableViewDataSource>



@property (retain, nonatomic) UIButton *attributionButton; // ivar: _attributionButton
@property (nonatomic) NSInteger chartInterval; // ivar: _chartInterval
@property (retain, nonatomic) ChartUpdater *chartUpdater; // ivar: _chartUpdater
@property (retain, nonatomic) StockChartView *chartView; // ivar: _chartView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *exchangeStatusLabel; // ivar: _exchangeStatusLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) StocksLayout *layout; // ivar: _layout
@property (retain, nonatomic) NetPreferences *netPreferences; // ivar: _netPreferences
@property (nonatomic) NSInteger rowDataType; // ivar: _rowDataType
@property (retain, nonatomic) UIView *statusBarView; // ivar: _statusBarView
@property (retain, nonatomic) Stock *stock; // ivar: _stock
@property (retain, nonatomic) StockFetcher *stockFetcher; // ivar: _stockFetcher
@property (retain, nonatomic) StockManager *stockManager; // ivar: _stockManager
@property (retain, nonatomic) NSString *stockTicker; // ivar: _stockTicker
@property (retain, nonatomic) StockUpdateManager *stockUpdateManager; // ivar: _stockUpdateManager
@property (retain, nonatomic) UITableView *stocksTableView; // ivar: _stocksTableView
@property (retain, nonatomic) StocksStyle *style; // ivar: _style
@property (readonly) Class superclass;


-(BOOL)stockChartViewIsCurrentChartView:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithStockTicker:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_attributionButtonPressed:(id)arg0 ;
-(void)_cleanup;
-(void)_setupStockWithTicker:(id)arg0 ;
-(void)_updateExchangeData;
-(void)dealloc;
-(void)stockChartView:(id)arg0 chartIntervalDidChange:(NSInteger)arg1 ;
-(void)stockChartViewNeedsLoadingStatusUpdated:(id)arg0 ;
-(void)updateChartForInterval:(NSInteger)arg0 completion:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif