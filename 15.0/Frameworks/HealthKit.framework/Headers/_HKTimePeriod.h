// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKTIMEPERIOD_H
#define _HKTIMEPERIOD_H

@class NSString, NSDate;
@protocol NSSecureCoding, NSCopying, _HKDateBounded;

#import <Foundation/Foundation.h>


@interface _HKTimePeriod : NSObject <NSSecureCoding, NSCopying, _HKDateBounded>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)timePeriodWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(BOOL)containsDate:(id)arg0 ;
-(BOOL)containsTimePeriod:(id)arg0 ;
-(BOOL)endsBeforeDate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)overlapsTimePeriod:(id)arg0 ;
-(BOOL)startsAfterDate:(id)arg0 ;
-(NSInteger)compareByEndDate:(id)arg0 ;
-(NSInteger)compareByStartDate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif