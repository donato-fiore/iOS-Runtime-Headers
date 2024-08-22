// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDMODECONFIGURATIONSERVICE_H
#define DNDMODECONFIGURATIONSERVICE_H

@class NSHashTable, NSString;
@protocol DNDRemoteServiceConnectionEventListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DNDModeConfigurationService : NSObject <DNDRemoteServiceConnectionEventListener>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_listeners;
    BOOL _registeredForUpdates;
}


@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serviceForClientIdentifier:(id)arg0 ;
+(void)initialize;
-(BOOL)_queue_registerForUpdatesIfRequired;
-(BOOL)canRemoveModeConfigurationForModeIdentifier:(id)arg0 ;
-(BOOL)clearAppActionWithIdentifier:(id)arg0 forApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(*id)arg3 ;
-(BOOL)clearAppConfigurationActionWithIdentifier:(id)arg0 forApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(*id)arg3 ;
-(BOOL)clearSystemActionWithIdentifier:(id)arg0 forModeIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)clearSystemConfigurationActionWithIdentifier:(id)arg0 modeIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)getSyncAvailableReturningError:(*id)arg0 ;
-(BOOL)getSyncEnabledReturningError:(*id)arg0 ;
-(BOOL)getSyncPreferenceEnabledReturningError:(*id)arg0 ;
-(BOOL)hasActivelyConfiguredModes:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)hasActivelyConfiguredModesReturningError:(*id)arg0 ;
-(BOOL)isLocalUserAvailableForContactInActiveMode:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeModeConfigurationForModeIdentifier:(id)arg0 deletePlaceholder:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)removeModeConfigurationForModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)setAppAction:(id)arg0 forApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(*id)arg3 ;
-(BOOL)setAppConfigurationAction:(id)arg0 forApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(*id)arg3 ;
-(BOOL)setAppConfigurationPredicate:(id)arg0 forActionIdentifier:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 error:(*id)arg4 ;
-(BOOL)setAppConfigurationTargetContentIdentifierPrefix:(id)arg0 forActionIdentifier:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 error:(*id)arg4 ;
-(BOOL)setModeConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)setSyncPreferenceEnabled:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setSystemAction:(id)arg0 forModeIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)setSystemConfigurationAction:(id)arg0 modeIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)syncModeConfigurationsReturningError:(*id)arg0 ;
-(NSUInteger)_defaultConfigurationTypeForModeSemanticType:(NSInteger)arg0 ;
-(id)_createDefaultModeConfigurationForIdentifier:(id)arg0 withRequestDetails:(id)arg1 error:(*id)arg2 ;
-(id)_createEmptyModeConfigurationForMode:(id)arg0 withRequestDetails:(id)arg1 error:(*id)arg2 ;
-(id)_initWithClientIdentifier:(id)arg0 ;
-(id)allModesReturningError:(*id)arg0 ;
-(id)allowedModesForContactHandle:(id)arg0 error:(*id)arg1 ;
-(id)availableModesReturningError:(*id)arg0 ;
-(id)createDefaultDrivingModeConfigurationWithError:(*id)arg0 ;
-(id)createDefaultSleepingModeConfigurationWithError:(*id)arg0 ;
-(id)createDefaultWorkoutModeConfigurationWithError:(*id)arg0 ;
-(id)createEmptyModeConfigurationForMode:(id)arg0 error:(*id)arg1 ;
-(id)createModeConfigurationUsingTemplateForModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)createModeConfigurationUsingTemplateForModeSemanticType:(NSInteger)arg0 error:(*id)arg1 ;
-(id)getAppActionsForModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)getAppConfigurationActionsForModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)getAppConfigurationPredicateForActionIdentifier:(id)arg0 forApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)getAppConfigurationTargetContentIdentifierPrefixesForCurrentModeReturningError:(*id)arg0 ;
-(id)getAppConfigurationTargetContentIdentifierPrefixesForModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)getSystemActionsForModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)getSystemConfigurationActionsForModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)modeConfigurationForModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)modeConfigurationsReturningError:(*id)arg0 ;
-(id)publishCurrentStatusKitAvailabilityReturningError:(*id)arg0 ;
-(id)silencedModesForContactHandle:(id)arg0 error:(*id)arg1 ;
-(void)addListener:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)remoteService:(id)arg0 didReceiveAppConfigurationContextUpdateForModeIdentifier:(id)arg1 ;
-(void)remoteService:(id)arg0 didReceiveUpdatedAvailableModeIdentifiers:(id)arg1 ;
-(void)removeListener:(id)arg0 ;


@end


#endif