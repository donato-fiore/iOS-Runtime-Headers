// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARITEMCHANGE_H
#define EKCALENDARITEMCHANGE_H

@class NSString;


#import "EKObjectChange.h"
#import "EKObjectID.h"

@interface EKCalendarItemChange : EKObjectChange

@property (readonly, nonatomic) BOOL allDayChanged; // ivar: _allDayChanged
@property (readonly, nonatomic) EKObjectID *calendarID; // ivar: _calendarID
@property (readonly, nonatomic) BOOL endDateChanged; // ivar: _endDateChanged
@property (readonly, nonatomic) BOOL endTimezoneChanged; // ivar: _endTimezoneChanged
@property (readonly, nonatomic) NSString *externalID; // ivar: _externalID
@property (readonly, nonatomic) BOOL locationChanged; // ivar: _locationChanged
@property (readonly, nonatomic) BOOL notesChanged; // ivar: _notesChanged
@property (readonly, nonatomic) EKObjectID *oldCalendarID; // ivar: _oldCalendarID
@property (readonly, nonatomic) NSString *oldExternalID; // ivar: _oldExternalID
@property (readonly, nonatomic) BOOL startDateChanged; // ivar: _startDateChanged
@property (readonly, nonatomic) BOOL startTimezoneChanged; // ivar: _startTimezoneChanged
@property (readonly, nonatomic) BOOL suppressNotificationForChanges; // ivar: _suppressNotificationForChanges
@property (readonly, nonatomic) BOOL titleChanged; // ivar: _titleChanged
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


+(int)entityType;
-(id)initWithChangeProperties:(id)arg0 ;


@end


#endif