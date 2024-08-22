// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKPREFERENCES_H
#define EKPREFERENCES_H

@class CalPreferences, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface EKPreferences : NSObject {
    CalPreferences *_preferences;
}


@property (nonatomic) BOOL alertInviteeDeclines;
@property (nonatomic) BOOL alwaysSetArrivedAndSettledForReminders;
@property (readonly) BOOL bypassSplashScreen;
@property (copy, nonatomic) NSDictionary *conferenceRoomTypeIdentifiersByMRU;
@property (readonly, nonatomic) NSArray *deselectedCalendarIdentifiers;
@property (readonly, nonatomic) NSArray *deselectedCalendarSyncHashes;
@property (readonly, nonatomic) NSArray *deselectedCalendarSyncIdentifiers;
@property (nonatomic) NSUInteger lastConfirmedSplashScreenVersion;
@property (nonatomic) BOOL refiringReminderAlarmsEnabled;
@property (copy, nonatomic) NSArray *selectedCalendarIdentifiers;
@property (nonatomic) BOOL showDeclinedEvents;
@property (nonatomic) CGFloat travelEngineThrottlePeriod;
@property (copy, nonatomic) NSArray *unselectedCalendarIdentifiersForFocusMode;
@property (nonatomic) BOOL useShortReminderRefireInterval;
@property (nonatomic) BOOL useShortReminderSnoozeInterval;


+(id)shared;
-(BOOL)_array:(id)arg0 hasSameElementAsArray:(id)arg1 ;
-(id)init;
-(void)_setDeselectedCalendars_iOS:(id)arg0 ;
-(void)setDeselectedCalendars:(id)arg0 reason:(id)arg1 ;


@end


#endif