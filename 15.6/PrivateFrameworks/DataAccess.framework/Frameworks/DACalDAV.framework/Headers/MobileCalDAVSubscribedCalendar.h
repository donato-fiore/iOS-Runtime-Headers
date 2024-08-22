// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MOBILECALDAVSUBSCRIBEDCALENDAR_H
#define MOBILECALDAVSUBSCRIBEDCALENDAR_H

@class NSMutableDictionary, NSSet, NSDictionary, NSURL, NSString, NSArray, NSTimeZone;
@protocol CalDAVSubscribedCalendar, CalDAVPrincipal;


#import "MobileCalDAVCalendar.h"

@interface MobileCalDAVSubscribedCalendar : MobileCalDAVCalendar <CalDAVSubscribedCalendar>

 {
    NSMutableDictionary *_properties;
}


@property (readonly, nonatomic) NSSet *allItemURLs;
@property (nonatomic) BOOL autoprovisioned;
@property (retain, nonatomic) NSDictionary *bulkRequests;
@property (retain, nonatomic) NSURL *calendarURL;
@property (nonatomic) BOOL canBePublished;
@property (nonatomic) BOOL canBeShared;
@property (retain, nonatomic) NSString *color;
@property (retain, nonatomic) NSString *ctag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasAlarmFilter;
@property (nonatomic) BOOL hasAttachmentFilter;
@property (nonatomic) BOOL hasTaskFilter;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *hrefsToModDeleteActions;
@property (nonatomic) BOOL isAffectingAvailability;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isEventContainer;
@property (nonatomic) BOOL isFamilyCalendar;
@property (nonatomic) BOOL isManagedByServer;
@property (nonatomic) BOOL isMarkedImmutableSharees;
@property (nonatomic) BOOL isMarkedUndeletable;
@property (nonatomic) BOOL isNotification;
@property (nonatomic) BOOL isPoll;
@property (nonatomic) BOOL isPublished;
@property (nonatomic) BOOL isRenameable;
@property (nonatomic) BOOL isScheduleInbox;
@property (nonatomic) BOOL isScheduleOutbox;
@property (nonatomic) BOOL isSubscribed;
@property (nonatomic) BOOL isTaskContainer;
@property (readonly, nonatomic) NSArray *itemsToReportAsJunk;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSString *locationCode;
@property (nonatomic) NSInteger maxAttendees;
@property (readonly, nonatomic) BOOL needsIsAffectingAvailabilityUpdate;
@property (readonly, nonatomic) BOOL needsPublishUpdate;
@property (nonatomic) BOOL needsResync;
@property (retain, nonatomic) NSString *notes;
@property (nonatomic) int order;
@property (retain, nonatomic) NSURL *owner;
@property (retain, nonatomic) NSString *ownerDisplayName;
@property (retain, nonatomic) NSURL *prePublishURL;
@property (retain, nonatomic) NSSet *preferredCalendarUserAddresses;
@property (readonly, nonatomic) NSObject<CalDAVPrincipal> *principal;
@property (retain, nonatomic) NSURL *publishURL;
@property (retain, nonatomic) NSString *pushKey;
@property (readonly, nonatomic) NSArray *recurrenceSplitActions;
@property (nonatomic) CGFloat refreshInterval;
@property (readonly, nonatomic) NSArray *shareeActions;
@property (retain, nonatomic) NSSet *sharees;
@property (nonatomic) int sharingStatus;
@property (retain, nonatomic) NSURL *subscriptionURL;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *symbolicColorName;
@property (readonly, nonatomic) NSArray *syncActions;
@property (retain, nonatomic) NSString *syncToken;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDictionary *uuidsToAddActions;
@property (nonatomic) BOOL wasModifiedLocally;


-(BOOL)shouldCalendarBeReadOnly;
-(id)initWithCalendarURL:(id)arg0 calendar:(*void)arg1 properties:(id)arg2 principal:(id)arg3 ;
-(id)properties;
-(void)updatePropertiesFromCalCalendar;


@end


#endif