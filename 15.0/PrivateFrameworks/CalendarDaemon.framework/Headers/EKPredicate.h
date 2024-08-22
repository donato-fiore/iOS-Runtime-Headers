// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKPREDICATE_H
#define EKPREDICATE_H

@class NSString, NSTimeZone, NSArray, NSDate, NSSet;
@protocol NSSecureCoding;


#import "CADPredicate.h"

@interface EKPredicate : CADPredicate <NSSecureCoding>

 {
    NSString *_uuid;
    NSTimeZone *_timeZone;
}


@property (retain, nonatomic) NSArray *calendars; // ivar: _calendars
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSSet *restrictedCalendarRowIDs; // ivar: _restrictedCalendarRowIDs
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithCalendars:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif