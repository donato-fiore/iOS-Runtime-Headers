// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKINTERACTIVECHARTMENSTRUATIONDATA_H
#define HKINTERACTIVECHARTMENSTRUATIONDATA_H

@class NSDate, NSString;
@protocol HKGraphSeriesChartData;

#import <Foundation/Foundation.h>


@interface HKInteractiveChartMenstruationData : NSObject <HKGraphSeriesChartData>



@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL startOfCycle; // ivar: _startOfCycle
@property (readonly) Class superclass;
@property (nonatomic) NSInteger value; // ivar: _value




@end


#endif