// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSPUBLICEVENT_H
#define CLSPUBLICEVENT_H

@class NSArray, NSDateInterval, NSString, NSTimeZone;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLSPublicEvent : NSObject <NSSecureCoding>



@property (nonatomic) CLLocationCoordinate2D businessItemCoordinates; // ivar: _businessItemCoordinates
@property (nonatomic) NSUInteger businessItemMuid; // ivar: _businessItemMuid
@property (retain, nonatomic) NSArray *categories; // ivar: _categories
@property (nonatomic) NSInteger expectedAttendance; // ivar: _expectedAttendance
@property (readonly, nonatomic) BOOL hasExpectedAttendance;
@property (readonly, nonatomic) BOOL isEnriched;
@property (retain, nonatomic) NSDateInterval *localDateInterval; // ivar: _localDateInterval
@property (nonatomic) CGFloat localEndTime; // ivar: _localEndTime
@property (nonatomic) CGFloat localStartTime; // ivar: _localStartTime
@property (nonatomic) NSUInteger muid; // ivar: _muid
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSArray *performers; // ivar: _performers
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (readonly, nonatomic) NSDateInterval *universalDateIntervalIncludingTime;


+(BOOL)supportsSecureCoding;
+(id)supportedCategories;
-(id)_calculateUniversalDateFromLocalDate:(id)arg0 includingTimeZone:(id)arg1 localStartTime:(CGFloat)arg2 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif