// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEAGENTEXTENSION_H
#define NEAGENTEXTENSION_H

@class NSUUID, NSString, NSExtension, NSArray, NSXPCInterface;
@protocol NEAgentSessionDelegate, NEExtensionProviderHostDelegate, NEPluginDriver, NEPluginManagerObjectFactory, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NEExtensionProviderHostContext.h"

@interface NEAgentExtension : NSObject <NEAgentSessionDelegate, NEExtensionProviderHostDelegate, NEPluginDriver>

 {
    NSUUID *_sessionRequestIdentifier;
    NSString *_extensionPointIdentifier;
    NSExtension *_extension;
    NSArray *_extensionUUIDs;
    id *_pendingDisposeCompletion;
}


@property BOOL appsUpdateEnding; // ivar: _appsUpdateEnding
@property BOOL appsUpdateStarted; // ivar: _appsUpdateStarted
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCInterface *driverInterface;
@property (readonly) NSXPCInterface *driverProtocol; // ivar: _driverProtocol
@property (readonly, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCInterface *managerInterface;
@property (readonly, weak) NSObject<NEPluginManagerObjectFactory> *managerObjectFactory; // ivar: _managerObjectFactory
@property (readonly) NSXPCInterface *managerProtocol; // ivar: _managerProtocol
@property (readonly, nonatomic) NSString *pluginType; // ivar: _pluginType
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSObject<OS_dispatch_source> *sendFailedTimer; // ivar: _sendFailedTimer
@property (retain, nonatomic) NEExtensionProviderHostContext *sessionContext; // ivar: _sessionContext
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *uuids;


-(id)initWithPluginType:(id)arg0 pluginClass:(NSInteger)arg1 pluginEndpoint:(id)arg2 pluginProcessIdentity:(id)arg3 queue:(id)arg4 factory:(id)arg5 ;
-(id)initWithPluginType:(id)arg0 pluginClass:(NSInteger)arg1 pluginInfo:(id)arg2 queue:(id)arg3 factory:(id)arg4 ;
-(void)dealloc;
-(void)extension:(id)arg0 didFailWithError:(id)arg1 ;
-(void)extension:(id)arg0 didStartWithError:(id)arg1 ;
-(void)extensionDidStop:(id)arg0 ;
-(void)handleAppsUninstalled:(id)arg0 ;
-(void)handleAppsUpdateBegins:(id)arg0 ;
-(void)handleAppsUpdateEnding:(id)arg0 ;
-(void)handleAppsUpdateEnds:(id)arg0 ;
-(void)handleCancel;
-(void)handleDisposeWithCompletionHandler:(id)arg0 ;
-(void)handleExtensionStartedWithCompletionHandler:(id)arg0 ;
-(void)handleInitWithCompletionHandler:(id)arg0 ;
-(void)sendExtensionFailed;
-(void)sleepWithCompletionHandler:(id)arg0 ;
-(void)startWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateConfiguration:(id)arg0 ;
-(void)wakeup;


@end


#endif