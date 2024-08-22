// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSEVENT_H
#define CLSEVENT_H

@class NSArray, NSDate, CLLocation, NSString;


#import "CLSPrimitive.h"

@interface CLSEvent : CLSPrimitive

@property (nonatomic, getter=isAccepted) BOOL accepted; // ivar: _accepted
@property (retain, nonatomic) NSArray *attendees; // ivar: _attendees
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (nonatomic, getter=hasMeetingRoom) BOOL meetingRoom; // ivar: _meetingRoom
@property (nonatomic, getter=isOrganizedByMe) BOOL organizedByMe; // ivar: _organizedByMe
@property (retain, nonatomic) NSArray *performers; // ivar: _performers
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)event;
-(BOOL)isEqualToEvent:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif