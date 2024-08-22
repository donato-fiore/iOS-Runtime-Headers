// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXPRESENTABLECALENDAREVENT_H
#define SXPRESENTABLECALENDAREVENT_H

@class NSURL, NSDate, NSString, NSTimeZone;

#import <Foundation/Foundation.h>

#import "SXFormattedText.h"

@interface SXPresentableCalendarEvent : NSObject

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) BOOL allDay; // ivar: _allDay
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSString *location; // ivar: _location
@property (copy, nonatomic) SXFormattedText *notes; // ivar: _notes
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithStartDate:(id)arg0 ;


@end


#endif