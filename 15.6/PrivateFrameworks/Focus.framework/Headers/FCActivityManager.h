// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCACTIVITYMANAGER_H
#define FCACTIVITYMANAGER_H

@class DNDModeSelectionService, DNDLifetimeDetailsProvider, DNDStateService, NSHashTable, DNDModeAssertion, DNDStateUpdate, NSMutableDictionary, NSArray, ATXActivitySuggestionClient, NSMapTable, CARAutomaticDNDStatus, NSString;
@protocol DNDModeSelectionServiceListener, DNDLifetimeDetailsProviderDelegate, ATXActivitySuggestionClientObserver, FCActivitySuggestionFeedbackAccepting, FCActivityLifetimeDescribing, FCActivityDescribing;

#import <Foundation/Foundation.h>


@interface FCActivityManager : NSObject <DNDModeSelectionServiceListener, DNDLifetimeDetailsProviderDelegate, ATXActivitySuggestionClientObserver, FCActivitySuggestionFeedbackAccepting>

 {
    DNDModeSelectionService *_modeSelectionService;
    DNDLifetimeDetailsProvider *_lifetimeDetailsProvider;
    DNDStateService *_stateService;
    NSHashTable *_observers;
    DNDModeAssertion *_activeModeAssertion;
    DNDStateUpdate *_activeStateUpdate;
    NSMutableDictionary *_allActivitiesByIdentifier;
    NSArray *_activeLifetimeDetailsCollection;
    id<FCActivityLifetimeDescribing> *_lifetimeOfActiveActivity;
    ATXActivitySuggestionClient *_activitySuggestionClient;
    NSMapTable *_locationsToSuggestedActivitiesOrNull;
    CARAutomaticDNDStatus *_carDNDStatus;
    BOOL _activeModeAssertionIsValid;
}


@property (readonly, copy, nonatomic) NSObject<FCActivityDescribing> *activeActivity; // ivar: _activeActivity
@property (readonly, copy, nonatomic) NSArray *availableActivities; // ivar: _availableActivities
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic, setter=_setDefaultActivity:) NSObject<FCActivityDescribing> *defaultActivity; // ivar: _defaultActivity
@property (readonly, nonatomic, getter=isDefaultConfiguration) BOOL defaultConfiguration;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic, getter=isLifetimeDescriptionsUpdatingEnabled) BOOL lifetimeDescriptionsUpdatingEnabled; // ivar: _lifetimeDescriptionsUpdatingEnabled
@property (readonly, copy, nonatomic) NSString *localizedTerminationDescriptionForActiveActivity;
@property (readonly, nonatomic) NSUInteger maximumActivityCountForUserInterface;
@property (readonly) Class superclass;


+(id)newActivityManager;
+(id)newActivityManagerWithIdentifier:(id)arg0 ;
+(id)sharedActivityManager;
+(void)initialize;
-(BOOL)_doesActivity:(id)arg0 identifySameModeAsActivity:(id)arg1 ;
-(BOOL)_isSyncedAssertion:(id)arg0 ;
-(BOOL)isActivityLocalUserInitiated:(id)arg0 ;
-(id)_activityForATXActivityOrSuggestion:(id)arg0 ;
-(id)_activityForModeIdentifier:(id)arg0 ;
-(id)_activityForUniqueIdentifier:(id)arg0 ;
-(id)_activitySuggestionClient;
-(id)_carDNDStatus;
-(id)_initWithIdentifier:(id)arg0 ;
-(id)_lifetimeDetailsProvider;
-(id)_lifetimeForActiveActivity;
-(id)_lifetimeForLifetimeDetailsIdentifier:(id)arg0 ofActivity:(id)arg1 ;
-(id)_localizedAutomaticDrivingTriggerDescriptionForPreference:(NSUInteger)arg0 ;
-(id)_modeSelectionService;
-(id)_stateService;
-(id)activityWithIdentifier:(id)arg0 ;
-(id)lifetimeOfActivity:(id)arg0 ;
-(id)suggestedActivityFeedbackReceiver;
-(id)suggestedActivityForLocation:(NSInteger)arg0 ;
-(void)_deactivateActivity:(id)arg0 reason:(id)arg1 ;
-(void)_drivingTriggerDidChange;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg0 usingBlock:(id)arg1 ;
-(void)_invalidateActiveModeAssertion;
-(void)_notifyObserversOfAvailableActivitiesChange;
-(void)_notifyObserversOfLifetimeChangeForActivity:(id)arg0 ;
-(void)_setLifetimeForActiveActivity:(id)arg0 ;
-(void)_updateActiveActivity:(id)arg0 ;
-(void)_updateActiveModeAssertionIfNecessary;
-(void)_updateActivitiesWithModes:(id)arg0 ;
-(void)_updateActivity:(id)arg0 withLifetimeDescriptions:(id)arg1 ;
-(void)_updateActivity:(id)arg0 withLifetimeDetails:(id)arg1 ;
-(void)_updateActivity:(id)arg0 withLifetimeDetailsCollection:(id)arg1 ;
-(void)_updateActivitySuggestion:(id)arg0 ;
-(void)_updateCreationDateOfActivity:(id)arg0 ;
-(void)_updateLifetimeForActiveActivity;
-(void)_updateLifetimeForActiveActivityIfNecessary;
-(void)_updateLifetimesAlternativeDescription:(id)arg0 forActivity:(id)arg1 ;
-(void)_updateLifetimesAlternativeDescriptionForActivity:(id)arg0 ;
-(void)_updateLifetimesAlternativeDescriptionsForAvailableActivities;
-(void)_updateSuggestedActivity:(id)arg0 forLocation:(NSInteger)arg1 ;
-(void)_updateSuggestedActivity:(id)arg0 forLocations:(NSUInteger)arg1 ;
-(void)_updateWithActiveModeAssertionIfNecessary:(id)arg0 stateUpdate:(id)arg1 ;
-(void)activitySuggestionClient:(id)arg0 didSuggestConfiguredActivity:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)didShowSuggestedActivity:(id)arg0 location:(NSInteger)arg1 ;
-(void)lifetimeDetailsProvider:(id)arg0 didUpdateAvailableLifetimeDetails:(id)arg1 ;
-(void)modeSelectionService:(id)arg0 didReceiveAvailableModesUpdate:(id)arg1 ;
-(void)modeSelectionService:(id)arg0 didReceiveModesUpdate:(id)arg1 ;
-(void)modeSelectionService:(id)arg0 didReceiveUpdatedActiveModeAssertion:(id)arg1 stateUpdate:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)setActivity:(id)arg0 active:(BOOL)arg1 reason:(id)arg2 ;
-(void)setActivity:(id)arg0 active:(BOOL)arg1 withLifetime:(id)arg2 reason:(id)arg3 ;
-(void)userDidAcceptSuggestedActivity:(id)arg0 location:(NSInteger)arg1 ;
-(void)userDidRejectSuggestedActivity:(id)arg0 location:(NSInteger)arg1 ;
-(void)userDidSeeSuggestedActivity:(id)arg0 location:(NSInteger)arg1 ;


@end


#endif