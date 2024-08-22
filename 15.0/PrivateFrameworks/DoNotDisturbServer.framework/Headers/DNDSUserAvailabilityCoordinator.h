// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSUSERAVAILABILITYCOORDINATOR_H
#define DNDSUSERAVAILABILITYCOORDINATOR_H

@class SKStatusPublishingService;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DNDSModeConfigurationManager.h"
#import "DNDSStateProvider.h"

@interface DNDSUserAvailabilityCoordinator : NSObject {
    BOOL _active;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_extensionLaunchQueue;
    DNDSModeConfigurationManager *_modeConfigurationManager;
    DNDSStateProvider *_stateProvider;
    SKStatusPublishingService *_statusService;
}




-(BOOL)_isLocalUserAvailableForAppId:(id)arg0 modeIdentifier:(id)arg1 withError:(*id)arg2 ;
-(BOOL)_isTCCUserAvailabilityGrantedForMessages;
-(BOOL)isLocalUserAvailableForApplicationIdentifier:(id)arg0 withError:(*id)arg1 ;
-(BOOL)isTCCUserAvailabilityGrantedForBundleId:(id)arg0 ;
-(BOOL)userAvailabilityInActiveModeForContactHandle:(id)arg0 withError:(*id)arg1 ;
-(id)_entitlementRecordForApplicationRecord:(id)arg0 ;
-(id)_userAvailabilityTCCApprovedBundleIds;
-(id)allowedModesForContactHandle:(id)arg0 withError:(*id)arg1 ;
-(id)initWithConfigurationManger:(id)arg0 stateProvider:(id)arg1 ;
-(id)publishStatusKitAvailabilityForced:(BOOL)arg0 error:(*id)arg1 ;
-(id)publishStatusKitAvailabilityReturningError:(*id)arg0 ;
-(void)_publishStatusKitAvailability:(BOOL)arg0 activityIdentifier:(id)arg1 forced:(BOOL)arg2 completion:(id)arg3 ;
-(void)_publishStatusKitAvailability:(BOOL)arg0 activityIdentifier:(id)arg1 local:(BOOL)arg2 scheduled:(BOOL)arg3 date:(id)arg4 forced:(BOOL)arg5 completion:(id)arg6 ;
-(void)_publishStatusKitCurrentAvailabilityForced:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_queue_notifyIntentExtensionsOfUserAvailability:(id)arg0 completionHandler:(id)arg1 ;
-(void)_queue_updateAvailabilityKit:(id)arg0 fromConfiguration:(id)arg1 toConfiguration:(id)arg2 ;
-(void)coordinateUserAvailability:(id)arg0 fromConfiguration:(id)arg1 toConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)resume;
-(void)sendStatusKitInvitationsForContacts:(id)arg0 ;
-(void)suspend;


@end


#endif