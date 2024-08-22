// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKINTERACTIVECHARTNUMBERDATA_H
#define HKINTERACTIVECHARTNUMBERDATA_H

@class NSString, NSNumberFormatter, NSNumber;
@protocol HKGraphSeriesChartData;

#import <Foundation/Foundation.h>


@interface HKInteractiveChartNumberData : NSObject <HKGraphSeriesChartData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter; // ivar: _numberFormatter
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *value; // ivar: _value




@end


#endif