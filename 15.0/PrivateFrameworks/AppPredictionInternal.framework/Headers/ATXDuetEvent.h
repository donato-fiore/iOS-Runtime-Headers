// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXDUETEVENT_H
#define ATXDUETEVENT_H

@class NSDate, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXDuetEvent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSUUID *locationIdentifier; // ivar: _locationIdentifier
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
+(NSInteger)_secondsInDayFromDate:(id)arg0 calendar:(id)arg1 ;
-(BOOL)isEndDateOnWeekday;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isStartDateOnWeekday;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)identifier;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithDKEvent:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)tagWithLocationOfInterestIdentifier:(id)arg0 ;


@end


#endif