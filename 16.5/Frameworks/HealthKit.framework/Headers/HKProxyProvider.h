// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKPROXYPROVIDER_H
#define HKPROXYPROVIDER_H

@class NSString, NSXPCInterface, NSMutableArray;
@protocol HKProxyProviderSource, OS_dispatch_queue, _HKXPCExportable;

#import <Foundation/Foundation.h>

#import "_HKXPCConnection.h"

@interface HKProxyProvider : NSObject {
    id<HKProxyProviderSource> *_source;
    id<HKProxyProviderSource> *_weakSource;
    _HKXPCConnection *_connection;
    NSString *_daemonLaunchNotificationName;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteInterface;
    NSInteger _connectionGeneration;
    BOOL _invalidated;
    id *_lock_automaticProxyReconnectionHandler;
    os_unfair_lock_s _lock;
    int _notifyToken;
    NSMutableArray *_pendingFetchContinuations;
}


@property (copy) id *automaticProxyReconnectionHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, weak, nonatomic) NSObject<_HKXPCExportable> *exportedObject; // ivar: _exportedObject
@property (readonly, copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property BOOL shouldRetryOnInterruption; // ivar: _shouldRetryOnInterruption


+(id)_relaunchQueue;
-(id)_fetchConnectionAndGeneration:(*NSInteger)arg0 error:(*id)arg1 ;
-(id)_lock_fetchConnectionAndGeneration:(*NSInteger)arg0 error:(*id)arg1 ;
-(id)_lock_sourceWithError:(*id)arg0 ;
-(id)clientQueueActionHandlerWithCompletion:(SEL)arg0 ;
-(id)clientQueueDoubleObjectHandlerWithCompletion:(SEL)arg0 ;
-(id)clientQueueObjectHandlerWithCompletion:(SEL)arg0 ;
-(id)clientQueueProgressHandlerWithHandler:(SEL)arg0 ;
-(id)debugIdentifier;
-(id)description;
-(id)initWithSource:(id)arg0 serviceIdentifier:(id)arg1 exportedObject:(id)arg2 exportedInterface:(id)arg3 remoteInterface:(id)arg4 ;
-(id)proxyServiceEndpointFromSource:(id)arg0 serviceIdentifier:(id)arg1 error:(*id)arg2 ;
-(void)_fetchEndpointAndConnectionWithContinuation:(id)arg0 ;
// -(void)_fetchProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)_fetchRetryingProxyWithErrorCount:(NSInteger)arg0 handler:(id)arg1 errorHandler:(unk)arg2  ;
// -(void)_getSynchronousProxyWithErrorCount:(NSInteger)arg0 handler:(id)arg1 errorHandler:(unk)arg2  ;
// -(void)_getSynchronousProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)_handleError:(id)arg0 connectionGeneration:(NSInteger)arg1 ;
-(void)_lock_flushContinuationsWithConnection:(id)arg0 error:(id)arg1 ;
-(void)_lock_setUpConnectionWithEndpoint:(id)arg0 ;
-(void)_resetConnectionWithGeneration:(NSInteger)arg0 ;
-(void)_serverDidFinishLaunching;
-(void)dealloc;
// -(void)fetchProxyServiceEndpointFromSource:(id)arg0 serviceIdentifier:(id)arg1 endpointHandler:(id)arg2 errorHandler:(unk)arg3  ;
// -(void)fetchProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)getSynchronousProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)invalidate;
-(void)referenceSourceWeakly;


@end


#endif