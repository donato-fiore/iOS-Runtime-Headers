// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDCLIENTXPCCONNECTION_H
#define PLASSETSDCLIENTXPCCONNECTION_H

@class NSXPCConnection, NSString;
@protocol PLXPCProxyCreating, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLXPCMessageLogger.h"
#import "PLAssetsdClientService.h"

@interface PLAssetsdClientXPCConnection : NSObject <PLXPCProxyCreating>

 {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_externalNotificationQueue;
    NSXPCConnection *_connection;
    PLXPCMessageLogger *_connectionLogger;
    PLAssetsdClientService *_assetsdClientService;
    BOOL _isShuttingDown;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_primitiveSynchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_unboostingRemoteObjectProxy;
-(id)connectionWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_postInterruptedNotification;
-(void)addBarrierBlock:(id)arg0 ;
-(void)addPhotoLibraryUnavailabilityHandler:(id)arg0 ;
-(void)handleInterruption;
-(void)handleInvalidation;
-(void)prepareToShutdown;


@end


#endif