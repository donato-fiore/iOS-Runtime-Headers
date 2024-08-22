// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCXPCSERVER_H
#define VCXPCSERVER_H

@class NSString, NSXPCListenerEndpoint, WFTriggerManager, NSXPCListener;
@protocol NSXPCListenerDelegate, NSXPCConnectionDelegate, WFDatabaseProvider, VCSyncDataEndpoint;

#import <Foundation/Foundation.h>

#import "WFWorkflowRunCoordinator.h"
#import "VCCKShortcutSyncCoordinator.h"
#import "WFTriggerRegistrar.h"
#import "VCVoiceShortcutManager.h"

@interface VCXPCServer : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate>



@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFWorkflowRunCoordinator *runCoordinator; // ivar: _runCoordinator
@property (readonly, nonatomic) BOOL skipEntitlementsCheck; // ivar: _skipEntitlementsCheck
@property (readonly) Class superclass;
@property (readonly, nonatomic) VCCKShortcutSyncCoordinator *syncCoordinator; // ivar: _syncCoordinator
@property (readonly, nonatomic) NSObject<VCSyncDataEndpoint> *syncDataEndpoint; // ivar: _syncDataEndpoint
@property (readonly, nonatomic) WFTriggerManager *triggerManager; // ivar: _triggerManager
@property (readonly, nonatomic) WFTriggerRegistrar *triggerRegistrar; // ivar: _triggerRegistrar
@property (readonly, nonatomic) VCVoiceShortcutManager *voiceShortcutManager; // ivar: _voiceShortcutManager
@property (readonly, nonatomic) NSXPCListener *xpcListener; // ivar: _xpcListener


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithDatabaseProvider:(id)arg0 triggerRegistrar:(id)arg1 syncCoordinator:(id)arg2 syncDataEndpoint:(id)arg3 runCoordinator:(id)arg4 ;
-(id)initWithUnsecuredAnonymousListenerAndDatabaseProvider:(id)arg0 ;
-(id)initWithXPCListener:(id)arg0 databaseProvider:(id)arg1 triggerRegistrar:(id)arg2 syncCoordinator:(id)arg3 syncDataEndpoint:(id)arg4 runCoordinator:(id)arg5 ;


@end


#endif