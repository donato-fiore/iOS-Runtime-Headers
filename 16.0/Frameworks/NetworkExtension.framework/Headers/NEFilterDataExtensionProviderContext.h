// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEFILTERDATAEXTENSIONPROVIDERCONTEXT_H
#define NEFILTERDATAEXTENSIONPROVIDERCONTEXT_H

@class NSDictionary, NSXPCListenerEndpoint, NSMutableDictionary, NSMutableArray, NSString;
@protocol NEAppInfoCacheLookupDelegate, NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol, OS_xpc_object, OS_dispatch_source;


#import "NEFilterExtensionProviderContext.h"

@interface NEFilterDataExtensionProviderContext : NEFilterExtensionProviderContext <NEAppInfoCacheLookupDelegate, NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol>

 {
    BOOL _controlProviderExists;
    NSDictionary *_remediationMap;
    NSDictionary *_URLAppendStringMap;
    NSObject<OS_xpc_object> *_clientListener;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSMutableDictionary *_browserFlows;
    NSMutableDictionary *_socketFlows;
    NSMutableDictionary *_channelFlows;
    NSMutableArray *_socketExceptions;
    NSObject<OS_dispatch_source> *_source;
    NSMutableArray *_pendingConnections;
}


@property (readonly, nonatomic) NSDictionary *URLAppendStringMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *remediationMap;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(Class)requiredProviderSuperClass;
-(id)extensionPoint;
-(void)applySettings:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchAppInfoForPID:(int)arg0 UUID:(id)arg1 bundleID:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchCurrentRulesForFlow:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchProviderConnectionWithCompletionHandler:(id)arg0 ;
-(void)handleClientMessage:(id)arg0 filloutReply:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleRulesChanged;
-(void)provideRemediationMap:(id)arg0 ;
-(void)provideURLAppendStringMap:(id)arg0 ;
-(void)providerControlSocketFileHandle:(id)arg0 ;
-(void)report:(id)arg0 ;
-(void)resumeFlow:(id)arg0 withVerdict:(id)arg1 ;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;
-(void)startFilterWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopWithReason:(int)arg0 ;
-(void)updateFlow:(id)arg0 withVerdict:(id)arg1 forDirection:(NSInteger)arg2 ;


@end


#endif