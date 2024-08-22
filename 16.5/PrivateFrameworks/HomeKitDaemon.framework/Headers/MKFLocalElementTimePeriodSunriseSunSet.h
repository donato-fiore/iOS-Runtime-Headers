// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFLOCALELEMENTTIMEPERIODSUNRISESUNSET_H
#define MKFLOCALELEMENTTIMEPERIODSUNRISESUNSET_H

@class NSDateComponents, NSNumber, NSString;


#import "MKFLocalElementTimePeriod.h"

@interface MKFLocalElementTimePeriodSunriseSunSet : MKFLocalElementTimePeriod

@property (retain, nonatomic) NSDateComponents *offset;
@property (copy, nonatomic) NSNumber *offsetSeconds;
@property (copy, nonatomic) NSString *significantEvent;


+(id)fetchRequest;


@end


#endif