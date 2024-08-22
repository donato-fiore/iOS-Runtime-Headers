// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFVCALENDARFORMATTER_H
#define WFVCALENDARFORMATTER_H


#import <Foundation/Foundation.h>


@interface WFVCalendarFormatter : NSObject



+(id)ICSFromCalendarItems:(id)arg0 ;
+(id)calendarItemsFromICS:(id)arg0 ;
+(id)foldString:(id)arg0 withOctetCount:(NSInteger)arg1 ;
+(id)hexColorFromCGColor:(struct CGColor *)arg0 ;
+(id)stringRepresentationOfParticipant:(id)arg0 ;


@end


#endif