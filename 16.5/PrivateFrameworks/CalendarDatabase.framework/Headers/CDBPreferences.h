// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDBPREFERENCES_H
#define CDBPREFERENCES_H

@class NSString, CalPreferences;

#import <Foundation/Foundation.h>


@interface CDBPreferences : NSObject

@property (nonatomic, getter=get_LastConfirmedSplashScreenVersionViewed, setter=set_LastConfirmedSplashScreenVersionViewed:) NSInteger LastConfirmedSplashScreenVersionViewed;
@property (copy, nonatomic, getter=get_defaultCalendarChangedReason, setter=set_defaultCalendarChangedReason:) NSString *defaultCalendarChangedReason;
@property (nonatomic, getter=get_defaultCalendarChangedTimestamp, setter=set_defaultCalendarChangedTimestamp:) NSInteger defaultCalendarChangedTimestamp;
@property (nonatomic, getter=get_defaultCalendarDatabaseID, setter=set_defaultCalendarDatabaseID:) NSInteger defaultCalendarDatabaseID;
@property (copy, nonatomic, getter=get_defaultCalendarID, setter=set_defaultCalendarID:) NSString *defaultCalendarID;
@property (copy, nonatomic, getter=get_defaultCalendarName, setter=set_defaultCalendarName:) NSString *defaultCalendarName;
@property (nonatomic, getter=get_defaultCalendarStoreUID, setter=set_defaultCalendarStoreUID:) NSInteger defaultCalendarStoreUID;
@property (nonatomic, getter=get_enableTravelAdvisoriesForAutomaticBehavior, setter=set_enableTravelAdvisoriesForAutomaticBehavior:) BOOL enableTravelAdvisoriesForAutomaticBehavior;
@property (readonly) BOOL has_LastConfirmedSplashScreenVersionViewed;
@property (readonly) BOOL has_defaultCalendarChangedReason;
@property (readonly) BOOL has_defaultCalendarChangedTimestamp;
@property (readonly) BOOL has_defaultCalendarDatabaseID;
@property (readonly) BOOL has_defaultCalendarID;
@property (readonly) BOOL has_defaultCalendarName;
@property (readonly) BOOL has_defaultCalendarStoreUID;
@property (readonly) BOOL has_enableTravelAdvisoriesForAutomaticBehavior;
@property (readonly) BOOL has_kCalPreferredDaysToSyncKey;
@property (readonly) BOOL has_kCalRemindersPreferredDaysToSyncKey;
@property (readonly) BOOL has_overrideParticipantRoleConstraint;
@property (readonly) BOOL has_privacyPaneHasBeenAcknowledgedVersion;
@property (readonly) BOOL has_sqlProfileLoggingEnabled;
@property (readonly) BOOL has_suggestEventLocations;
@property (readonly) BOOL has_suggestedLocationsTestMode;
@property (nonatomic, getter=get_kCalPreferredDaysToSyncKey, setter=set_kCalPreferredDaysToSyncKey:) NSInteger kCalPreferredDaysToSyncKey;
@property (nonatomic, getter=get_kCalRemindersPreferredDaysToSyncKey, setter=set_kCalRemindersPreferredDaysToSyncKey:) NSInteger kCalRemindersPreferredDaysToSyncKey;
@property (nonatomic, getter=get_overrideParticipantRoleConstraint, setter=set_overrideParticipantRoleConstraint:) BOOL overrideParticipantRoleConstraint;
@property (readonly, nonatomic) CalPreferences *preferences; // ivar: _preferences
@property (nonatomic, getter=get_privacyPaneHasBeenAcknowledgedVersion, setter=set_privacyPaneHasBeenAcknowledgedVersion:) NSInteger privacyPaneHasBeenAcknowledgedVersion;
@property (nonatomic, getter=get_sqlProfileLoggingEnabled, setter=set_sqlProfileLoggingEnabled:) BOOL sqlProfileLoggingEnabled;
@property (nonatomic, getter=get_suggestEventLocations, setter=set_suggestEventLocations:) BOOL suggestEventLocations;
@property (nonatomic, getter=get_suggestedLocationsTestMode, setter=set_suggestedLocationsTestMode:) BOOL suggestedLocationsTestMode;


+(id)preferencesForDirectory:(id)arg0 ;
+(id)shared;
+(id)sharedReadOnly;
+(id)sharedReadWrite;
-(id)initWithPreferences:(id)arg0 ;
-(id)initWithReadOnly:(BOOL)arg0 ;


@end


#endif