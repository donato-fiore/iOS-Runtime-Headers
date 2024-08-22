// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVCALENDARITEMDATA_H
#define CALDAVCALENDARITEMDATA_H

@class CoreDAVLeafDataPayload, NSString;
@protocol CalDAVCalendarItemProtocol;


#import "CalDAVUpdateOwnerItem.h"
#import "CalDAVCalendarServerScheduleChangesItem.h"

@interface CalDAVCalendarItemData : CoreDAVLeafDataPayload <CalDAVCalendarItemProtocol>



@property (retain, nonatomic) CalDAVUpdateOwnerItem *createdBy; // ivar: _createdBy
@property (retain, nonatomic) CalDAVCalendarServerScheduleChangesItem *scheduleChanges; // ivar: _scheduleChanges
@property (retain, nonatomic) NSString *scheduleTag; // ivar: _scheduleTag
@property (retain, nonatomic) CalDAVUpdateOwnerItem *updatedBy; // ivar: _updatedBy




@end


#endif