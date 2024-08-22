// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPSENDERETACONTROLLER_H
#define MSPSENDERETACONTROLLER_H

@class NSMutableSet, NSArray, NSString;
@protocol MSPNavigationListenerDelegate, MSPSharedTripGroupSessionDelegate, MSPSenderMessageStrategyDelegate, OS_os_transaction, MSPSenderETAControllerDelegate;

#import <Foundation/Foundation.h>

#import "MSPNavigationListener.h"
#import "MSPSharedTripRelay.h"
#import "MSPSharedTripGroupSession.h"
#import "MSPSenderMinimalStrategy.h"
#import "MSPSenderLiveStrategy.h"
#import "MSPSenderMessageStrategy.h"
#import "MSPGroupSessionStorage.h"
#import "MSPSharedTripStorageController.h"
#import "MSPSharingRestorationStorage.h"

@interface MSPSenderETAController : NSObject <MSPNavigationListenerDelegate, MSPSharedTripGroupSessionDelegate, MSPSenderMessageStrategyDelegate>

 {
    NSObject<OS_os_transaction> *_transaction;
    MSPNavigationListener *_navigationListener;
    NSMutableSet *_destinations;
    MSPSharedTripRelay *_idsRelay;
    MSPSharedTripGroupSession *_groupSession;
    MSPSenderMinimalStrategy *_minimalSender;
    MSPSenderLiveStrategy *_liveSender;
    MSPSenderMessageStrategy *_messageSender;
    MSPGroupSessionStorage *_sessionStorage;
    MSPSharedTripStorageController *_storageController;
}


@property (readonly, nonatomic) NSArray *activeHandles;
@property (readonly, copy, nonatomic) MSPSharingRestorationStorage *archivedSharingState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MSPSenderETAControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_validateNavigationState:(*id)arg0 ;
-(BOOL)startSharingWith:(id)arg0 error:(*id)arg1 ;
-(BOOL)startSharingWithGroup:(id)arg0 error:(*id)arg1 ;
-(BOOL)startSharingWithMessages:(id)arg0 error:(*id)arg1 ;
-(id)initWithRelay:(id)arg0 ;
-(id)rulesForParticipant:(id)arg0 ;
-(void)_cleanObjects;
-(void)_createGroupSessionIfNeededWithIdentifier:(id)arg0 ;
-(void)_invalidateActiveHandles;
-(void)_invalidateSharedTripWithError:(id)arg0 ;
-(void)_restoreLastSession;
-(void)_sendFinishedToIdentifiers:(id)arg0 ;
-(void)_startNavigationListener;
-(void)_startingGroupSession;
-(void)_stopNavigationListener;
-(void)_updateStorage;
-(void)dealloc;
-(void)groupSession:(id)arg0 participantDidJoin:(id)arg1 ;
-(void)groupSession:(id)arg0 participantDidLeave:(id)arg1 ;
-(void)groupSessionEnded:(id)arg0 withError:(id)arg1 ;
-(void)navigationListenerArrived:(id)arg0 ;
-(void)navigationListenerETAUpdated:(id)arg0 ;
-(void)navigationListenerIsReady:(id)arg0 ;
-(void)navigationListenerResumed:(id)arg0 ;
-(void)navigationListenerRouteUpdated:(id)arg0 ;
-(void)navigationListenerStopped:(id)arg0 ;
-(void)navigationListenerTrafficUpdated:(id)arg0 ;
-(void)navigationListenerWaypointsUpdated:(id)arg0 ;
-(void)stopSharing;
-(void)stopSharingWith:(id)arg0 ;
-(void)stopSharingWithGroup:(id)arg0 ;
-(void)touchedRules;


@end


#endif