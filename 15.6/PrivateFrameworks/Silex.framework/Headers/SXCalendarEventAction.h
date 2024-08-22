// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCALENDAREVENTACTION_H
#define SXCALENDAREVENTACTION_H

@class NSURL, NSString, NSDate, NSTimeZone;
@protocol SXAction;

#import <Foundation/Foundation.h>

#import "SXJSONDictionary.h"
#import "SXFormattedText.h"

@interface SXCalendarEventAction : NSObject <SXAction>



@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) BOOL allDay; // ivar: _allDay
@property (readonly, nonatomic) SXJSONDictionary *analytics; // ivar: analytics
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *location; // ivar: _location
@property (copy, nonatomic) SXFormattedText *notes; // ivar: _notes
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *type;


-(id)initWithStartDate:(id)arg0 ;


@end


#endif