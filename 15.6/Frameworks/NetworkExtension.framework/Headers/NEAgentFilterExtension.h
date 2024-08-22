// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEAGENTFILTEREXTENSION_H
#define NEAGENTFILTEREXTENSION_H

@class NSXPCListenerEndpoint, NSExtension, NSString, NSUUID, NSXPCInterface, NSArray;
@protocol NEFilterExtensionProviderHostDelegate, NEAgentSessionDelegate, NEFilterPluginDriver, NEPluginManagerObjectFactory, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NEFilterProviderConfiguration.h"
#import "NEFilterControlExtensionProviderHostContext.h"
#import "NEFilterExtensionProviderHostContext.h"

@interface NEAgentFilterExtension : NSObject <NEFilterExtensionProviderHostDelegate, NEAgentSessionDelegate, NEFilterPluginDriver>



@property BOOL appsUpdateEnding; // ivar: _appsUpdateEnding
@property BOOL appsUpdateStarted; // ivar: _appsUpdateStarted
@property (retain) NSXPCListenerEndpoint *clientListenerEndpoint; // ivar: _clientListenerEndpoint
@property (retain) NEFilterProviderConfiguration *configuration; // ivar: _configuration
@property (retain) NSExtension *controlExtension; // ivar: _controlExtension
@property (retain) NSString *controlExtensionIdentifier; // ivar: _controlExtensionIdentifier
@property BOOL controlExtensionInitialized; // ivar: _controlExtensionInitialized
@property (retain) NEFilterControlExtensionProviderHostContext *controlSessionContext; // ivar: _controlSessionContext
@property (retain) NSUUID *controlSessionRequestIdentifier; // ivar: _controlSessionRequestIdentifier
@property int crypto_kernel_salt; // ivar: _crypto_kernel_salt
@property *cfil_crypto_state crypto_state; // ivar: _crypto_state
@property (retain) NSExtension *dataExtension; // ivar: _dataExtension
@property (retain) NSString *dataExtensionIdentifier; // ivar: _dataExtensionIdentifier
@property BOOL dataExtensionInitialized; // ivar: _dataExtensionInitialized
@property (retain) NEFilterExtensionProviderHostContext *dataSessionContext; // ivar: _dataSessionContext
@property (retain) NSUUID *dataSessionRequestIdentifier; // ivar: _dataSessionRequestIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCInterface *driverInterface;
@property (readonly, nonatomic) NSArray *extensionUUIDs; // ivar: _extensionUUIDs
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCInterface *managerInterface;
@property (readonly, weak) NSObject<NEPluginManagerObjectFactory> *managerObjectFactory; // ivar: _managerObjectFactory
@property (copy) id *pendingDisposeCompletion; // ivar: _pendingDisposeCompletion
@property (readonly, nonatomic) NSString *pluginType; // ivar: _pluginType
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSObject<OS_dispatch_source> *sendFailedTimer; // ivar: _sendFailedTimer
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *uuids;


+(BOOL)authenticateFlowWithState:(struct cfil_crypto_state *)arg0 crypto_key:(id)arg1 flow:(id)arg2 salt:(unsigned int)arg3 isKernelSocket:(BOOL)arg4 ;
-(BOOL)authenticateFlow:(id)arg0 ;
-(BOOL)sendCryptoKeyWithControlSocket:(int)arg0 crypto_key:(id)arg1 ;
-(NSInteger)sanitizeFilterAction:(NSInteger)arg0 ;
-(NSInteger)sanitizeFilterReportEvent:(NSInteger)arg0 ;
-(id)copyProcessIdentities;
-(id)generateClientKey:(int)arg0 salt:(unsigned int)arg1 ;
-(id)initWithPluginType:(id)arg0 pluginClass:(NSInteger)arg1 pluginEndpoint:(id)arg2 pluginProcessIdentity:(id)arg3 queue:(id)arg4 factory:(id)arg5 ;
-(id)initWithPluginType:(id)arg0 pluginClass:(NSInteger)arg1 pluginInfo:(id)arg2 queue:(id)arg3 factory:(id)arg4 ;
-(id)sanitizeFilterFlow:(id)arg0 ;
-(id)sanitizeReport:(id)arg0 ;
-(void)applySettings:(id)arg0 completionHandler:(id)arg1 ;
-(void)cleanupControlExtensionWithRequestIdentifier:(id)arg0 ;
-(void)cleanupDataExtensionWithRequestIdentifier:(id)arg0 ;
-(void)cleanupOnStartFailure;
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
-(void)handleControlExtensionInitWithCompletionHandler:(id)arg0 ;
-(void)handleDataExtensionInitWithCompletionHandler:(id)arg0 ;
-(void)handleDisposeWithCompletionHandler:(id)arg0 ;
-(void)handleExtensionExit:(id)arg0 ;
-(void)handleInitWithCompletionHandler:(id)arg0 ;
-(void)handleStopCompleteWithError:(id)arg0 ;
-(void)notifyRulesChanged;
-(void)provideRemediationMap:(id)arg0 ;
-(void)provideURLAppendStringMap:(id)arg0 ;
-(void)report:(id)arg0 ;
-(void)resetFilterSettings;
-(void)savedConfigurationChanged:(id)arg0 ;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendExtensionFailed;
-(void)sendFilterStatus:(NSInteger)arg0 withError:(NSInteger)arg1 ;
-(void)sendSocketContentFilterRequest;
-(void)sleepWithCompletionHandler:(id)arg0 ;
-(void)startControlExtensionWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)startDataExtensionWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)startFilter;
-(void)startFilterExtension;
-(void)startWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopFilterExtensionWithReason:(int)arg0 ;
-(void)updateConfiguration:(id)arg0 ;
-(void)wakeup;


@end


#endif