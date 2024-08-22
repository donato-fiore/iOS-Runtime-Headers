// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCWATCHSYNCCOORDINATOR_H
#define VCWATCHSYNCCOORDINATOR_H

@class NSString, PSYSyncCoordinator, NSMutableSet;
@protocol PSYSyncCoordinatorDelegate, VCCompanionSyncServiceDelegate, OS_dispatch_queue, VCSyncDataEndpoint;

#import <Foundation/Foundation.h>

#import "VCDaemonXPCEventHandler.h"
#import "VCCompanionSyncService.h"

@interface VCWatchSyncCoordinator : NSObject <PSYSyncCoordinatorDelegate, VCCompanionSyncServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // ivar: _eventHandler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PSYSyncCoordinator *pairedSyncCoordinator; // ivar: _pairedSyncCoordinator
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) VCCompanionSyncService *service; // ivar: _service
@property (readonly, nonatomic) NSMutableSet *startedSessions; // ivar: _startedSessions
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<VCSyncDataEndpoint> *syncDataEndpoint; // ivar: _syncDataEndpoint


-(BOOL)companionSyncServiceShouldStartSession:(id)arg0 ;
-(NSInteger)companionSyncService:(id)arg0 typeForSession:(id)arg1 ;
-(id)initWithSyncDataEndpoint:(id)arg0 eventHandler:(id)arg1 ;
-(void)companionSyncService:(id)arg0 didFinishSyncSession:(id)arg1 withError:(id)arg2 ;
-(void)companionSyncService:(id)arg0 didRejectSessionWithError:(id)arg1 ;
-(void)companionSyncService:(id)arg0 outgoingSyncSession:(id)arg1 didUpdateProgress:(CGFloat)arg2 ;
-(void)companionSyncService:(id)arg0 outgoingSyncSessionDidFinishSendingChanges:(id)arg1 ;
-(void)dealloc;
-(void)handleDeviceDidChangeVersionNotification;
-(void)handleDidUnpairNotification:(id)arg0 ;
-(void)requestSyncIfUnrestricted;
-(void)startObservingWatchChangeNotifications;
-(void)stopObservingWatchChangeNotifications;
-(void)syncCoordinator:(id)arg0 beginSyncSession:(id)arg1 ;
-(void)syncCoordinator:(id)arg0 didInvalidateSyncSession:(id)arg1 ;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg0 ;


@end


#endif