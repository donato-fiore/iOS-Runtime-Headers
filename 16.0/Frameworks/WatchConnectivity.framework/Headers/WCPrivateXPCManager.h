// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WCPRIVATEXPCMANAGER_H
#define WCPRIVATEXPCMANAGER_H

@class NSXPCConnection, NSString;
@protocol NSXPCConnectionDelegate, WCXPCPrivateManagerClientProtocol, WCPrivateXPCManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WCPrivateXPCManager : NSObject <NSXPCConnectionDelegate, WCXPCPrivateManagerClientProtocol>



@property (readonly) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WCPrivateXPCManagerDelegate> *delegate; // ivar: _delegate
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property int listenerResumedToken; // ivar: _listenerResumedToken
@property int privateServiceShouldConnectToken; // ivar: _privateServiceShouldConnectToken
@property (readonly) Class superclass;


+(id)privateClientInterface;
+(id)privateDaemonInterface;
+(id)sharedManager;
+(void)initialize;
-(id)init;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)dealloc;
-(void)fakeIncomingPayloadOnSubService:(id)arg0 ofType:(id)arg1 clientData:(id)arg2 resource:(id)arg3 resourceSandboxToken:(id)arg4 completionHandler:(id)arg5 ;
-(void)handlePairedSyncComplicationsStartedWithCompletionHandler:(id)arg0 ;
-(void)handlePingForExtensionBundleID:(id)arg0 ;
-(void)isExtensionPrivileged:(id)arg0 completionHandler:(id)arg1 ;
-(void)setupConnection;


@end


#endif