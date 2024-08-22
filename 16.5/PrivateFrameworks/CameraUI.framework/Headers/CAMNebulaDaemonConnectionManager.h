// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMNEBULADAEMONCONNECTIONMANAGER_H
#define CAMNEBULADAEMONCONNECTIONMANAGER_H

@class NSXPCConnection, NSString, NSMutableArray, NSMutableDictionary, Protocol;
@protocol NSXPCConnectionDelegate, CAMNebulaDaemonClientProtocol, CAMNebulaDaemonBundleIdentifierProtocol, OS_dispatch_queue, CAMNebulaDaemonConnectionManagerDelegate;

#import <Foundation/Foundation.h>


@interface CAMNebulaDaemonConnectionManager : NSObject <NSXPCConnectionDelegate, CAMNebulaDaemonClientProtocol, CAMNebulaDaemonBundleIdentifierProtocol>



@property (readonly, nonatomic) NSXPCConnection *_connection; // ivar: __connection
@property (readonly, copy, nonatomic) NSString *_name; // ivar: __name
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue; // ivar: __queue
@property (readonly, nonatomic) NSMutableArray *_registeredProtocols; // ivar: __registeredProtocols
@property (readonly, nonatomic) NSMutableArray *_registeredTargets; // ivar: __registeredTargets
@property (readonly, nonatomic) NSMutableDictionary *_tasksPerIdentifier; // ivar: __tasksPerIdentifier
@property (readonly, copy, nonatomic) Protocol *allowedProtocol; // ivar: _allowedProtocol
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *clientAccess; // ivar: _clientAccess
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMNebulaDaemonConnectionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_clientProtocolInterface;
+(id)_daemonProtocolInterface;
-(id)_targetsForSelector:(SEL)arg0 ;
-(id)initWithConnection:(id)arg0 name:(id)arg1 bundleIdentifier:(id)arg2 queue:(id)arg3 clientAccess:(id)arg4 allowedProtocol:(id)arg5 ;
-(void)_getProxyForExecutingBlock:(id)arg0 ;
-(void)addTarget:(id)arg0 forProtocol:(id)arg1 ;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)forceStopTimelapseCaptureWithReasons:(NSInteger)arg0 ;
-(void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)arg0 ;
-(void)pingAfterInterruption;


@end


#endif