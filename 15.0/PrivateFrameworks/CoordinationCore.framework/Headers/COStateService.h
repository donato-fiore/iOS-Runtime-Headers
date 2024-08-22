// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COSTATESERVICE_H
#define COSTATESERVICE_H

@class NSUserDefaults, NSDictionary, NSString, NSArray;
@protocol COStateAddOnDelegate, COEndpointMonitorDelegate, COStateManagerServiceInterface;


#import "COService.h"
#import "COEndpointMonitor.h"

@interface COStateService : COService <COStateAddOnDelegate, COEndpointMonitorDelegate, COStateManagerServiceInterface>



@property (readonly, nonatomic) NSUserDefaults *SoundBoardDefaults; // ivar: _SoundBoardDefaults
@property (copy, nonatomic) NSDictionary *connectedClients; // ivar: _connectedClients
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat doorbellDelay; // ivar: _doorbellDelay
@property (copy, nonatomic) COEndpointMonitor *endpointMonitor; // ivar: _endpointMonitor
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *mediaObservers; // ivar: _mediaObservers
@property (copy, nonatomic) NSArray *roleObservers; // ivar: _roleObservers
@property (readonly) Class superclass;


+(id)serviceWithDelegate:(id)arg0 ;
-(BOOL)isMediaSystemLeader;
-(id)_roleForCurrentDevice;
-(id)_roleForMember:(id)arg0 inCluster:(id)arg1 ;
-(id)_stateSetByClientsForSuite:(id)arg0 cluster:(id)arg1 ;
-(id)initWithListenerProvider:(id)arg0 addOnProvider:(id)arg1 delegate:(id)arg2 ;
-(void)_addOnAdded:(id)arg0 ;
-(void)_addOnRemoved:(id)arg0 ;
-(void)_cleanupDisconnectedClient:(id)arg0 ;
-(void)_clientLost:(id)arg0 ;
-(void)_configureServiceInterfacesOnConnection:(id)arg0 ;
-(void)_informClientsOfUpdates:(id)arg0 removals:(id)arg1 inCluster:(id)arg2 ;
-(void)_notifyRoleObserver:(id)arg0 roleOfMember:(id)arg1 inCluster:(id)arg2 didChangeTo:(id)arg3 ;
-(void)_notifyRoleObservers;
-(void)_setIsWriting:(BOOL)arg0 forClient:(id)arg1 ;
-(void)addObserverWithPredicate:(id)arg0 ;
-(void)addOn:(id)arg0 receivedUpdates:(id)arg1 removals:(id)arg2 ;
-(void)checkinClientWithSuite:(id)arg0 clusters:(id)arg1 withCallback:(id)arg2 ;
-(void)dealloc;
-(void)doorbellDelayWithCallback:(id)arg0 ;
-(void)endpointAvailableInHomeChanged:(BOOL)arg0 ;
-(void)isMediaSystemLeader:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerForMediaSystemLeaderChange;
-(void)registerForRoleChangesOfMember:(id)arg0 inCluster:(id)arg1 ;
-(void)removeKeyPaths:(id)arg0 clusters:(id)arg1 withCallback:(id)arg2 ;
-(void)removeObserverWithPredicate:(id)arg0 ;
-(void)requestCompositionForCluster:(id)arg0 withCallback:(id)arg1 ;
-(void)setDictionary:(id)arg0 clusters:(id)arg1 withCallback:(id)arg2 ;
-(void)stateForAddOn:(id)arg0 withCallback:(id)arg1 ;
-(void)unregisterForMediaSystemLeaderChange;
-(void)unregisterForRoleChangesOfMember:(id)arg0 inCluster:(id)arg1 ;


@end


#endif