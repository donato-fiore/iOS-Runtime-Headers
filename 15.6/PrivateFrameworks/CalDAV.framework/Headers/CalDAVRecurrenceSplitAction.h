// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVRECURRENCESPLITACTION_H
#define CALDAVRECURRENCESPLITACTION_H

@class NSDate, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface CalDAVRecurrenceSplitAction : NSObject

@property (readonly, nonatomic) BOOL isAllDay; // ivar: _isAllDay
@property (readonly, nonatomic) BOOL isFloating; // ivar: _isFloating
@property (readonly, nonatomic) NSDate *recurrenceDate; // ivar: _recurrenceDate
@property (readonly, nonatomic) NSURL *resourceURL; // ivar: _resourceURL
@property (readonly, nonatomic) NSString *uidForCreatedSeries; // ivar: _uidForCreatedSeries


-(id)initWithResourceURL:(id)arg0 recurrenceDate:(id)arg1 uidForCreatedSeries:(id)arg2 floating:(BOOL)arg3 allday:(BOOL)arg4 ;


@end


#endif