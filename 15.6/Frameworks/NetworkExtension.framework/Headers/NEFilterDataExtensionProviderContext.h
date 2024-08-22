// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEFILTERDATAEXTENSIONPROVIDERCONTEXT_H
#define NEFILTERDATAEXTENSIONPROVIDERCONTEXT_H

@class NSDictionary, NSMutableDictionary, NSString, NSXPCListenerEndpoint, NSMutableArray;
@protocol NEAppInfoCacheLookupDelegate, NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol, OS_xpc_object, OS_dispatch_source;


#import "NEFilterExtensionProviderContext.h"

@interface NEFilterDataExtensionProviderContext : NEFilterExtensionProviderContext <NEAppInfoCacheLookupDelegate, NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol>



@property (retain, nonatomic) NSDictionary *URLAppendStringMap; // ivar: _URLAppendStringMap
@property (retain, nonatomic) NSMutableDictionary *browserFlows; // ivar: _browserFlows
@property (retain, nonatomic) NSMutableDictionary *channelFlows; // ivar: _channelFlows
@property (retain, nonatomic) NSObject<OS_xpc_object> *clientListener; // ivar: _clientListener
@property (nonatomic) BOOL controlProviderExists; // ivar: _controlProviderExists
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // ivar: _listenerEndpoint
@property (retain, nonatomic) NSMutableArray *pendingConnections; // ivar: _pendingConnections
@property (retain, nonatomic) NSDictionary *remediationMap; // ivar: _remediationMap
@property (retain, nonatomic) NSMutableArray *socketExceptions; // ivar: _socketExceptions
@property (retain, nonatomic) NSMutableDictionary *socketFlows; // ivar: _socketFlows
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source; // ivar: _source
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(BOOL)blessClient:(id)arg0 ;
-(Class)requiredProviderSuperClass;
-(id)adjustDataToFilter:(id)arg0 startOffset:(*NSUInteger)arg1 flow:(id)arg2 direction:(NSInteger)arg3 ;
-(id)extensionPoint;
-(id)findFlowWithFlow:(id)arg0 ;
-(void)acceptNewClientConnection:(id)arg0 ;
-(void)applySettings:(id)arg0 completionHandler:(id)arg1 ;
-(void)closeBrowserFilterFlow:(id)arg0 ;
-(void)closeChannelFlow:(id)arg0 ;
-(void)closeFlow:(id)arg0 ;
-(void)closePendingConnections;
-(void)closeSocketFlow:(id)arg0 socketID:(NSUInteger)arg1 ;
-(void)fetchAppInfoForPID:(int)arg0 UUID:(id)arg1 bundleID:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchCurrentRulesForFlow:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchProviderConnectionWithCompletionHandler:(id)arg0 ;
-(void)handleAddDataMessage:(id)arg0 filloutReply:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleChannelMessageFlowFinish:(id)arg0 filloutReply:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleChannelMessageMoreData:(id)arg0 filloutReply:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleChannelMessageStatsReport:(id)arg0 filloutReply:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleClientMessage:(id)arg0 filloutReply:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleData:(id)arg0 offset:(NSUInteger)arg1 forFlow:(id)arg2 direction:(NSInteger)arg3 reply:(id)arg4 controlSocket:(int)arg5 completionHandler:(id)arg6 ;
-(void)handleDataCompleteForFlow:(id)arg0 direction:(NSInteger)arg1 reply:(id)arg2 controlSocket:(int)arg3 completionHandler:(id)arg4 ;
-(void)handleDataCompleteMessage:(id)arg0 filloutReply:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleNewChannelFlowMessage:(id)arg0 filloutReply:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleNewFlow:(id)arg0 reply:(id)arg1 controlSocket:(int)arg2 completionHandler:(id)arg3 ;
-(void)handleNewFlowMessage:(id)arg0 filloutReply:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleRemediationMessage:(id)arg0 filloutReply:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleRulesChanged;
-(void)handleSocketSourceEventWithSocket:(int)arg0 ;
-(void)provideRemediationMap:(id)arg0 ;
-(void)provideURLAppendStringMap:(id)arg0 ;
-(void)providerControlSocketFileHandle:(id)arg0 ;
-(void)purgeData:(int)arg0 size:(int)arg1 buf:(char *)arg2 bufSize:(int)arg3 ;
-(void)report:(id)arg0 ;
-(void)reportFlow:(id)arg0 forVerdict:(id)arg1 absoluteVerdict:(id)arg2 ;
-(void)reportFlow:(id)arg0 forVerdict:(id)arg1 event:(NSInteger)arg2 ;
-(void)reportFlowClosed:(id)arg0 ;
-(void)reportFlowStats:(id)arg0 ;
-(void)resumeFlow:(id)arg0 withVerdict:(id)arg1 ;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;
-(void)setupSocketContentFilterWithControlSocket:(int)arg0 ;
-(void)setupSocketSourceWithControlSocket:(int)arg0 ;
-(void)startFilterWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopWithReason:(int)arg0 ;
-(void)tearDownConnection:(id)arg0 ;
-(void)teardownSocketSource;
-(void)updateFlow:(id)arg0 withVerdict:(id)arg1 forDirection:(NSInteger)arg2 ;


@end


#endif