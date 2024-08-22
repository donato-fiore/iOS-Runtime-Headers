// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDOORBELLCHIMECONTROLLERCONTEXT_H
#define HMDDOORBELLCHIMECONTROLLERCONTEXT_H

@class NSUUID, NSString, NSNotificationCenter;
@protocol HMDDoorbellChimeControllerContext, HMMLogEventSubmitting, HMDCOStateManager, HMDCoordinationStateManagerProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDHAPAccessory.h"
#import "HMDCharacteristicsAvailabilityListener.h"

@interface HMDDoorbellChimeControllerContext : NSObject <HMDDoorbellChimeControllerContext>



@property (weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly, getter=isCoordinationPathEnabled) BOOL coordinationPathEnabled;
@property (readonly, copy) NSUUID *currentAccessoryUUID;
@property (readonly, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) Class doorbellBulletinUtilitiesClass;
@property (readonly) CGFloat doorbellChimeMaximumAnnounceDelay;
@property (readonly, getter=isFeatureEnabled) BOOL featureEnabled;
@property (readonly) NSUInteger hash;
@property (readonly) HMDCharacteristicsAvailabilityListener *listener; // ivar: _listener
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventDispatcher;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, weak) NSObject<HMDCOStateManager> *stateManager;
@property (readonly, weak) NSObject<HMDCoordinationStateManagerProviding> *stateManagerProvider; // ivar: _stateManagerProvider
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)accessorySupportsCoordinationDoorbellChime:(id)arg0 ;
-(id)clearCoordinationStateForKeyPaths:(id)arg0 ;
-(id)fetchDoorbellDelay;
-(id)initWithWorkQueue:(id)arg0 accessory:(id)arg1 ;
-(id)keyPathFromComponents:(id)arg0 ;
-(id)postCULiveAction:(id)arg0 ;
-(id)postCoordinationState:(id)arg0 ;


@end


#endif