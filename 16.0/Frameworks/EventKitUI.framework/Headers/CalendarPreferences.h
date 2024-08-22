// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALENDARPREFERENCES_H
#define CALENDARPREFERENCES_H

@class CalPreferences, NSArray, NSNumber, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface CalendarPreferences : NSObject {
    CalPreferences *_preferences;
}


@property (nonatomic) BOOL allowSubscribedCalendarSpamDetection;
@property (retain, nonatomic) NSArray *calendarUUIDsExcludedFromNotifications;
@property (retain, nonatomic) NSNumber *dayViewFirstVisibleSecond;
@property (retain, nonatomic) NSNumber *dayViewHourScale;
@property (nonatomic) NSUInteger debugOccurrenceViewIconOverload;
@property (readonly, nonatomic) NSArray *deselectedCalendarSyncHashes;
@property (nonatomic) BOOL disableContinuity;
@property (nonatomic) BOOL disableTodayPushes;
@property (nonatomic) BOOL displayedSubscribedCalendarSpamDetectionPrivacyNotice;
@property (nonatomic) BOOL drawDebugViewColors; // ivar: _drawDebugViewColors
@property (nonatomic) BOOL enableAvatars;
@property (nonatomic) BOOL enableMultiwindowAsserts;
@property (nonatomic) BOOL eventAutocompleteEnabled;
@property (nonatomic) BOOL hideCalendarsFilteredByFocus;
@property (nonatomic) BOOL hideInlineDayViewInEventDetails;
@property (nonatomic) BOOL highColorCarplayEnabled;
@property (nonatomic) BOOL immediateAlarmCreation;
@property (nonatomic) BOOL largeListViewDisclosingEventDetails;
@property (retain, nonatomic) NSNumber *lastSidebarMode;
@property (retain, nonatomic) NSNumber *lastSuspendTime;
@property (retain, nonatomic) NSNumber *lastViewMode;
@property (retain, nonatomic) NSNumber *lastViewedDate;
@property (retain, nonatomic) NSDate *lastViewedOccurrenceDate;
@property (retain, nonatomic) NSString *lastViewedOccurrenceUID;
@property (retain, nonatomic) NSNumber *locationSearchResultLimit;
@property (retain, nonatomic) NSString *overlayCalendarID;
@property (nonatomic) BOOL overrideLocaleWeekends;
@property (nonatomic) NSUInteger promptForCommentWhenDeclining;
@property (nonatomic) BOOL promptToDisableFilterByFocus;
@property (nonatomic) BOOL requestSyncOnApplicationLaunch;
@property (nonatomic) BOOL scanForDiscoveredVirtualConferences;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic, getter=isShortResumeToTodayTimeout) BOOL shortResumeToTodayTimeout;
@property (nonatomic) BOOL showDetailedListView;
@property (nonatomic) BOOL showEventsInPhoneMonthView;
@property (nonatomic) BOOL showExperimentalUI;
@property (nonatomic) BOOL showListView;
@property (nonatomic) BOOL showMonthDividedListView;
@property (nonatomic) BOOL showWeekNumbers;
@property (nonatomic) BOOL showWindowDebugButton;
@property (retain, nonatomic) NSDate *simulatedCurrentDate;
@property (retain, nonatomic) NSString *sourceIdentifierForSelectedIdentity;
@property (nonatomic) BOOL swipeToDeleteEnabled;
@property (nonatomic) BOOL useMoonForCheckboxForCalendarsFilteredByFocus;
@property (nonatomic) BOOL viewedTimeZoneAutomatic;
@property (retain, nonatomic) NSNumber *weekStart;
@property (retain, nonatomic) NSNumber *weekViewHourScale;
@property (nonatomic) BOOL weekViewStartsOnToday;


+(id)sharedPreferences;
-(id)init;
-(void)resetSubscribedCalendarSpamDetectionToNull;


@end


#endif