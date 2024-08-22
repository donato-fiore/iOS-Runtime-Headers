// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKACCESSIBILITYSPAN_H
#define HKACCESSIBILITYSPAN_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface HKAccessibilitySpan : NSObject

@property (readonly, nonatomic) NSNumber *dataComprehensionMaxYValue; // ivar: _dataComprehensionMaxYValue
@property (readonly, nonatomic) NSNumber *dataComprehensionMinYValue; // ivar: _dataComprehensionMinYValue
@property (readonly, nonatomic) NSString *dataComprehensionUnitForChart; // ivar: _dataComprehensionUnitForChart
@property (readonly, nonatomic) NSString *dataSeriesTitle; // ivar: _dataSeriesTitle
@property (readonly, nonatomic) NSInteger dataSeriesType; // ivar: _dataSeriesType


-(id)description;
-(id)initWithTitle:(id)arg0 seriesType:(NSInteger)arg1 dataComprehensionMinYValue:(id)arg2 dataComprehensionMaxYValue:(id)arg3 dataComprehensionUnitForChart:(id)arg4 ;


@end


#endif