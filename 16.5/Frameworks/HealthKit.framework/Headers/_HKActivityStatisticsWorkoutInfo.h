// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKACTIVITYSTATISTICSWORKOUTINFO_H
#define _HKACTIVITYSTATISTICSWORKOUTINFO_H

@class NSDate;
@protocol _HKJSONObject, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKSource.h"

@interface _HKActivityStatisticsWorkoutInfo : NSObject <_HKJSONObject, NSSecureCoding>



@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) HKSource *source; // ivar: _source
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 source:(id)arg2 ;
-(id)jsonObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif