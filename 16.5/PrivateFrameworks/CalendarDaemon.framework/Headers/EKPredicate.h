// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKPREDICATE_H
#define EKPREDICATE_H

@class NSString, NSTimeZone, NSDictionary, NSMutableDictionary, NSArray, NSDate;
@protocol NSSecureCoding;


#import "CADPredicate.h"

@interface EKPredicate : CADPredicate <NSSecureCoding>

 {
    NSString *_uuid;
    NSTimeZone *_timeZone;
    NSDictionary *_databaseToCalendarRowIDs;
    NSMutableDictionary *_databaseToRestrictedCalendarRowIDs;
}


@property (retain, nonatomic) NSArray *calendars; // ivar: _calendars
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)calendarRowIDsForDatabaseID:(int)arg0 ;
-(id)databasesToQuery;
-(id)initWithCalendars:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)predicateFormat;
-(id)restrictedCalendarRowIDsForDatabaseID:(int)arg0 ;
-(void)createCalendarMaps;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setRestrictedCalendarRowIDs:(id)arg0 forDatabaseID:(int)arg1 ;


@end


#endif