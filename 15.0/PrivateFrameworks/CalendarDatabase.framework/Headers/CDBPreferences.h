// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDBPREFERENCES_H
#define CDBPREFERENCES_H

@class CalPreferences;

#import <Foundation/Foundation.h>


@interface CDBPreferences : NSObject {
    CalPreferences *_preferences;
}


@property (nonatomic, getter=get_LastConfirmedSplashScreenVersionViewed, setter=set_LastConfirmedSplashScreenVersionViewed:) NSInteger LastConfirmedSplashScreenVersionViewed;
@property (nonatomic, getter=get_enableTravelAdvisoriesForAutomaticBehavior, setter=set_enableTravelAdvisoriesForAutomaticBehavior:) BOOL enableTravelAdvisoriesForAutomaticBehavior;
@property (readonly) BOOL has_LastConfirmedSplashScreenVersionViewed;
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
@property (nonatomic, getter=get_privacyPaneHasBeenAcknowledgedVersion, setter=set_privacyPaneHasBeenAcknowledgedVersion:) NSInteger privacyPaneHasBeenAcknowledgedVersion;
@property (nonatomic, getter=get_sqlProfileLoggingEnabled, setter=set_sqlProfileLoggingEnabled:) BOOL sqlProfileLoggingEnabled;
@property (nonatomic, getter=get_suggestEventLocations, setter=set_suggestEventLocations:) BOOL suggestEventLocations;
@property (nonatomic, getter=get_suggestedLocationsTestMode, setter=set_suggestedLocationsTestMode:) BOOL suggestedLocationsTestMode;


+(id)shared;
-(BOOL)needsMigration;
-(NSUInteger)_version;
-(id)init;
-(void)_setVersion:(NSUInteger)arg0 ;
-(void)migrateIfNeededWithOptions:(NSUInteger)arg0 ;


@end


#endif