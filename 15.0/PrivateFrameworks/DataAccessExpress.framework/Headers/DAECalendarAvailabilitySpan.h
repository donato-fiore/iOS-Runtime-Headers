// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAECALENDARAVAILABILITYSPAN_H
#define DAECALENDARAVAILABILITYSPAN_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DAECalendarAvailabilitySpan : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 type:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif