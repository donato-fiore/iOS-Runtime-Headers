// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIKAVAILABILITYDESCRIPTIONGENERATOR_H
#define CUIKAVAILABILITYDESCRIPTIONGENERATOR_H


#import <Foundation/Foundation.h>


@interface CUIKAvailabilityDescriptionGenerator : NSObject



+(id)allInviteesCanAttendString;
+(id)attendeeProposedANewTime:(id)arg0 attendeeName:(id)arg1 ;
+(id)failedString;
+(id)proposeANewTimePlaceholderString;
+(id)showMoreString;
+(id)someInviteesCanAttendString;
+(id)timeRangeStringWithStartDate:(id)arg0 withEndDate:(id)arg1 ;
+(id)waitingForAvailabilityQueryString;
+(id)weekdayMonthDayString:(id)arg0 ;
+(id)youProposedString;


@end


#endif