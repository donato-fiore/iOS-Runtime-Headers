// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFLOCALELEMENTTIMEPERIODTIMEOFDAY_H
#define MKFLOCALELEMENTTIMEPERIODTIMEOFDAY_H

@class NSNumber;


#import "MKFLocalElementTimePeriod.h"

@interface MKFLocalElementTimePeriodTimeOfDay : MKFLocalElementTimePeriod

@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSNumber *minute;


+(id)fetchRequest;


@end


#endif