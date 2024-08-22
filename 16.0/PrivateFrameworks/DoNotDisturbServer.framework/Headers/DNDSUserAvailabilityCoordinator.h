// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSUSERAVAILABILITYCOORDINATOR_H
#define DNDSUSERAVAILABILITYCOORDINATOR_H

@class SKStatusPublishingService;
@protocol OS_dispatch_queue, DNDSModeConfigurationProviding, DNDSStateProviding, DNDSUserAvailabilityTCCProviding;

#import <Foundation/Foundation.h>


@interface DNDSUserAvailabilityCoordinator : NSObject {
    BOOL _active;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_extensionLaunchQueue;
    id<DNDSModeConfigurationProviding> *_configurationProvider;
    id<DNDSStateProviding> *_stateProvider;
    id<DNDSUserAvailabilityTCCProviding> *_tccProvider;
    SKStatusPublishingService *_statusService;
}




-(BOOL)_isLocalUserAvailableForAppId:(id)arg0 modeIdentifier:(id)arg1 withError:(*id)arg2 ;
-(BOOL)_isLocalUserAvailableForMessagesWithModeIdentifier:(id)arg0 withError:(*id)arg1 ;
-(BOOL)_isTCCUserAvailabilityGrantedForMessages;
-(BOOL)_queue_didAppAvailabilityChangeForApplicationIdentifier:(id)arg0 fromConfiguration:(id)arg1 toConfiguration:(id)arg2 ;
-(BOOL)isLocalUserAvailableForApplicationIdentifier:(id)arg0 withError:(*id)arg1 ;
-(BOOL)isTCCUserAvailabilityGrantedForBundleId:(id)arg0 ;
-(BOOL)userAvailabilityInActiveModeForContactHandle:(id)arg0 withError:(*id)arg1 ;
-(id)_entitlementRecordForApplicationRecord:(id)arg0 ;
-(id)allowedModesForContactHandle:(id)arg0 withError:(*id)arg1 ;
-(id)exceptionalModesForContactHandle:(id)arg0 withError:(*id)arg1 ;
-(id)initWithConfigurationProvider:(id)arg0 stateProvider:(id)arg1 ;
-(id)initWithConfigurationProvider:(id)arg0 stateProvider:(id)arg1 userAvailabilityTCCProvider:(id)arg2 ;
-(id)publishStatusKitAvailabilityForced:(BOOL)arg0 error:(*id)arg1 ;
-(id)publishStatusKitAvailabilityForced:(BOOL)arg0 override:(NSInteger)arg1 error:(*id)arg2 ;
-(id)publishStatusKitAvailabilityReturningError:(*id)arg0 ;
-(id)silencedModesForContactHandle:(id)arg0 withError:(*id)arg1 ;
-(void)_publishStatusKitAvailability:(BOOL)arg0 activityIdentifier:(id)arg1 forced:(BOOL)arg2 completion:(id)arg3 ;
-(void)_publishStatusKitAvailability:(BOOL)arg0 activityIdentifier:(id)arg1 local:(BOOL)arg2 scheduled:(BOOL)arg3 date:(id)arg4 forced:(BOOL)arg5 completion:(id)arg6 ;
-(void)_publishStatusKitCurrentAvailabilityForced:(BOOL)arg0 override:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)_queue_notifyIntentExtensionsOfUserAvailability:(id)arg0 applicationIdentifiers:(id)arg1 completionHandler:(id)arg2 ;
-(void)_queue_updateAvailabilityKit:(id)arg0 fromConfiguration:(id)arg1 toConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)coordinateUserAvailability:(id)arg0 fromConfiguration:(id)arg1 toConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)resume;
-(void)sendStatusKitInvitationsForContacts:(id)arg0 completionHandler:(id)arg1 ;
-(void)suspend;


@end


#endif