// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DUCALENDAREVENTOBJC_H
#define DUCALENDAREVENTOBJC_H

@class NSDateComponents, NSTimeZone;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding15DUCalendarEvent.h"

@interface DUCalendarEventObjC : NSObject {
    _TtC21DocumentUnderstanding15DUCalendarEvent *_underlying;
}


@property (copy, nonatomic) NSDateComponents *endDateComponents;
@property (copy, nonatomic) NSTimeZone *endTimezone;
@property (nonatomic) BOOL isAllDay;
@property (copy, nonatomic) NSDateComponents *startDateComponents;
@property (copy, nonatomic) NSTimeZone *startTimezone;


-(id)init;


@end


#endif