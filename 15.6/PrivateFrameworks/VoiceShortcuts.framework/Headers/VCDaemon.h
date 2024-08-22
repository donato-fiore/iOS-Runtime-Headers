// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCDAEMON_H
#define VCDAEMON_H

@class WFRemoteExecutionCoordinator;

#import <Foundation/Foundation.h>

#import "VCDaemonDatabaseProvider.h"
#import "VCCKShortcutSyncCoordinator.h"
#import "VCSpotlightSyncService.h"
#import "VCDaemonSyncDataEndpoint.h"
#import "WFSystemSurfaceWorkflowStatusUpdater.h"
#import "WFTriggerRegistrar.h"
#import "WFSiriWorkflowVocabularyUpdater.h"
#import "VCWatchSyncCoordinator.h"
#import "VCDaemonXPCEventHandler.h"
#import "VCXPCServer.h"

@interface VCDaemon : NSObject

@property (readonly, nonatomic) VCDaemonDatabaseProvider *databaseProvider; // ivar: _databaseProvider
@property (retain, nonatomic) WFRemoteExecutionCoordinator *remoteExecutionCoordinator; // ivar: _remoteExecutionCoordinator
@property (retain, nonatomic) VCCKShortcutSyncCoordinator *shortcutSyncCoordinator; // ivar: _shortcutSyncCoordinator
@property (readonly, nonatomic) VCSpotlightSyncService *spotlightLibrarySyncService; // ivar: _spotlightLibrarySyncService
@property (readonly, nonatomic) VCDaemonSyncDataEndpoint *syncDataEndpoint; // ivar: _syncDataEndpoint
@property (retain, nonatomic) WFSystemSurfaceWorkflowStatusUpdater *systemSurfaceWorkflowStatusUpdater; // ivar: _systemSurfaceWorkflowStatusUpdater
@property (readonly, nonatomic) WFTriggerRegistrar *triggerRegistrar; // ivar: _triggerRegistrar
@property (retain, nonatomic) WFSiriWorkflowVocabularyUpdater *vocabularyUpdater; // ivar: _vocabularyUpdater
@property (readonly, nonatomic) VCWatchSyncCoordinator *watchSyncCoordinator; // ivar: _watchSyncCoordinator
@property (readonly, nonatomic) VCDaemonXPCEventHandler *xpcEventHandler; // ivar: _xpcEventHandler
@property (readonly, nonatomic) VCXPCServer *xpcServer; // ivar: _xpcServer


+(id)sharedDaemon;
-(id)init;
-(void)addSignalHandlers;
-(void)applicationWasUnregistered:(id)arg0 ;
-(void)start;
-(void)startEventObservation;


@end


#endif