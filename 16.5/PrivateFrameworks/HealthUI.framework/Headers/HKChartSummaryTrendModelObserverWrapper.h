// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCHARTSUMMARYTRENDMODELOBSERVERWRAPPER_H
#define HKCHARTSUMMARYTRENDMODELOBSERVERWRAPPER_H

@protocol HKChartSummaryTrendModelObserver;

#import <Foundation/Foundation.h>


@interface HKChartSummaryTrendModelObserverWrapper : NSObject

@property (weak, nonatomic) NSObject<HKChartSummaryTrendModelObserver> *weakObserver; // ivar: _weakObserver




@end


#endif