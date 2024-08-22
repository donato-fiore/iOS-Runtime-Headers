// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSLEEPPERIODCHARTPOINTOFFSET_H
#define HKSLEEPPERIODCHARTPOINTOFFSET_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface HKSleepPeriodChartPointOffset : NSObject

@property (readonly, nonatomic) BOOL continuation; // ivar: _continuation
@property (readonly, nonatomic) NSNumber *value; // ivar: _value


+(id)chartPointOffsetWithValue:(id)arg0 continuation:(BOOL)arg1 ;
-(id)initWithValue:(id)arg0 continuation:(BOOL)arg1 ;


@end


#endif