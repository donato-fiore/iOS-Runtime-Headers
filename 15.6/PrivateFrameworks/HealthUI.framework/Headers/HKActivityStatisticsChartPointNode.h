// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKACTIVITYSTATISTICSCHARTPOINTNODE_H
#define HKACTIVITYSTATISTICSCHARTPOINTNODE_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "HKValueRange.h"

@interface HKActivityStatisticsChartPointNode : NSObject

@property (readonly, nonatomic) HKValueRange *dateRange; // ivar: _dateRange
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSNumber *value; // ivar: _value


-(id)initWithRange:(id)arg0 type:(NSInteger)arg1 value:(id)arg2 ;


@end


#endif