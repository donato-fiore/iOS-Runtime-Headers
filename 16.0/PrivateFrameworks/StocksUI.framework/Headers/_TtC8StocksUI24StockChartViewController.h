// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8STOCKSUI24STOCKCHARTVIEWCONTROLLER_H
#define _TTC8STOCKSUI24STOCKCHARTVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC8StocksUI24StockChartViewController : UIViewController {
    ? stock;
    ? topDateRangePickerSeparator;
    ? bottomDateRangePickerSeparator;
    ? bottomVolumeChartSeparator;
    ? dateRangePicker;
    ? lineChartViewController;
    ? columnChartViewController;
    ? interactionDisplayView;
    ? activityIndicator;
    ? interactionHandler;
    ? calloutViewProvider;
    ? rangeCalloutViewProvider;
    ? activeCallout;
    ? styler;
    ? eventHandler;
    ? loadingState;
    ? stateMachine;
    ? errorView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;


@end


#endif