// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDNOTIFICATIONSSERVICE_H
#define DNDNOTIFICATIONSSERVICE_H

@class DNDModeAssertionService, DNDStateService, DNDSettingsService, DNDModeConfigurationService, NSDate, DNDState, DNDBehaviorSettings, UNUserNotificationCenter, ATXActivitySuggestionClient, NSString;
@protocol DNDStateUpdateListener, DNDSettingsUpdateListener, UNUserNotificationCenterDelegate, ATXActivitySuggestionClientObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DNDNotificationsService : NSObject <DNDStateUpdateListener, DNDSettingsUpdateListener, UNUserNotificationCenterDelegate, ATXActivitySuggestionClientObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    DNDModeAssertionService *_notificationsAssertionService;
    DNDStateService *_notificationsStateService;
    DNDSettingsService *_notificationsSettingsService;
    DNDModeConfigurationService *_notificationsModeConfigurationService;
    BOOL _doNotDisturbActive;
    BOOL _basicActive;
    BOOL _sleepActive;
    BOOL _windDownActive;
    BOOL _clockBedtimeActive;
    BOOL _settingsBedtimeActive;
    BOOL _drivingActive;
    BOOL _workoutActive;
    NSDate *_transitionDate;
    NSUInteger _transitionLifetimeType;
    DNDState *_currentState;
    DNDBehaviorSettings *_currentBehaviorSettings;
    UNUserNotificationCenter *_notificationsCenter;
    ATXActivitySuggestionClient *_activitySuggestionClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)_modeConfigurationForIdentifier:(id)arg0 ;
-(id)_modeForIdentifier:(id)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 ;
-(void)_setModeConfiguration:(id)arg0 ;
-(void)activitySuggestionClient:(id)arg0 didSuggestSettingUpActivity:(id)arg1 ;
-(void)activitySuggestionClient:(id)arg0 didSuggestTriggersForConfiguredActivity:(id)arg1 ;
-(void)resume;
-(void)settingsService:(id)arg0 didReceiveUpdatedBehaviorSettings:(id)arg1 ;
-(void)stateService:(id)arg0 didReceiveDoNotDisturbStateUpdate:(id)arg1 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif