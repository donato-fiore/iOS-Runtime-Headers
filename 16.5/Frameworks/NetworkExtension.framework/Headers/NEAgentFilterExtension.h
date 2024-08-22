// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEAGENTFILTEREXTENSION_H
#define NEAGENTFILTEREXTENSION_H

@class NSString, NSExtension, NSUUID, NSXPCListenerEndpoint, NSArray, NSXPCInterface;
@protocol NEFilterExtensionProviderHostDelegate, NEAgentSessionDelegate, NEFilterPluginDriver, NEPluginManagerObjectFactory, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NEFilterExtensionProviderHostContext.h"
#import "NEFilterControlExtensionProviderHostContext.h"
#import "NEFilterProviderConfiguration.h"

@interface NEAgentFilterExtension : NSObject <NEFilterExtensionProviderHostDelegate, NEAgentSessionDelegate, NEFilterPluginDriver>

 {
    BOOL _dataExtensionInitialized;
    BOOL _controlExtensionInitialized;
    BOOL _appsUpdateStarted;
    BOOL _appsUpdateEnding;
    int _crypto_kernel_salt;
    id<NEPluginManagerObjectFactory> *_managerObjectFactory;
    NSString *_pluginType;
    NSExtension *_dataExtension;
    NSExtension *_controlExtension;
    NEFilterExtensionProviderHostContext *_dataSessionContext;
    NEFilterControlExtensionProviderHostContext *_controlSessionContext;
    NSUUID *_dataSessionRequestIdentifier;
    NSUUID *_controlSessionRequestIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_dataExtensionIdentifier;
    NSString *_controlExtensionIdentifier;
    NSXPCListenerEndpoint *_clientListenerEndpoint;
    NEFilterProviderConfiguration *_configuration;
    NSArray *_extensionUUIDs;
    NSObject<OS_dispatch_source> *_sendFailedTimer;
    *cfil_crypto_state _crypto_state;
    id *_pendingDisposeCompletion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCInterface *driverInterface;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCInterface *managerInterface;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *uuids;


+(BOOL)authenticateFlowWithState:(struct cfil_crypto_state *)arg0 crypto_key:(id)arg1 flow:(id)arg2 salt:(unsigned int)arg3 isKernelSocket:(BOOL)arg4 ;
-(id)initWithPluginType:(id)arg0 pluginClass:(NSInteger)arg1 pluginEndpoint:(id)arg2 pluginProcessIdentity:(id)arg3 queue:(id)arg4 factory:(id)arg5 ;
-(id)initWithPluginType:(id)arg0 pluginClass:(NSInteger)arg1 pluginInfo:(id)arg2 queue:(id)arg3 factory:(id)arg4 ;
-(void)applySettings:(id)arg0 completionHandler:(id)arg1 ;
-(void)createPacketChannelForExtension:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)extension:(id)arg0 didFailWithError:(id)arg1 ;
-(void)extension:(id)arg0 didStartWithError:(id)arg1 ;
-(void)extensionDidStop:(id)arg0 ;
-(void)fetchCurrentRulesForFlow:(id)arg0 completionHandler:(id)arg1 ;
-(void)getFilterClientConnectionWithCompletionHandler:(int)arg0 completionHandler:(id)arg1 ;
-(void)handleAppsUninstalled:(id)arg0 ;
-(void)handleAppsUpdateBegins:(id)arg0 ;
-(void)handleAppsUpdateEnding:(id)arg0 ;
-(void)handleAppsUpdateEnds:(id)arg0 ;
-(void)handleCancel;
-(void)handleDisposeWithCompletionHandler:(id)arg0 ;
-(void)handleInitWithCompletionHandler:(id)arg0 ;
-(void)notifyRulesChanged;
-(void)provideRemediationMap:(id)arg0 ;
-(void)provideURLAppendStringMap:(id)arg0 ;
-(void)report:(id)arg0 ;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;
-(void)sleepWithCompletionHandler:(id)arg0 ;
-(void)startFilter;
-(void)startWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateConfiguration:(id)arg0 ;
-(void)wakeup;


@end


#endif