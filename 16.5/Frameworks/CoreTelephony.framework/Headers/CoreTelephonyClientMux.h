// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CORETELEPHONYCLIENTMUX_H
#define CORETELEPHONYCLIENTMUX_H

@class NSSet, NSXPCConnection, NSXPCListenerEndpoint, NSError;
@protocol MuxNotificationSinkDelegate;

#import <Foundation/Foundation.h>

#import "FrameworkCache.h"
#import "MuxNotificationSink.h"

@interface CoreTelephonyClientMux : NSObject <MuxNotificationSinkDelegate>

 {
    map<__unsafe_unretained id, (anonymous namespace)::DelegateContext, std::less<__unsafe_unretained id>, std::allocator<std::pair<const __unsafe_unretained id, (anonymous namespace)::DelegateContext>>> _delegates;
    NSSet *_currentSelectorSet;
    map<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>, std::less<__CTAssertionType *>, std::allocator<std::pair<__CTAssertionType *const, std::pair<dispatch::queue, void (^)(NSError *)>>>> _clientCallback;
    FrameworkCache *_cache;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (retain, nonatomic) MuxNotificationSink *notificationSink; // ivar: _notificationSink
@property (retain, nonatomic) NSError *reconnectError; // ivar: _reconnectError
@property (nonatomic) queue xpcQueue; // ivar: _xpcQueue


-(NSUInteger)_getAssertionTypeId;
-(id)cachedValueForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithEndpoint:(id)arg0 sink:(id)arg1 ;
-(id)initWithSink:(id)arg0 ;
-(id)proxyWithErrorHandler_sync:(id)arg0 ;
-(id)proxyWithQueue:(struct queue )arg0 errorHandler:(id)arg1 ;
-(id)synchronousProxyWithErrorHandler:(id)arg0 ;
-(struct __CTAssertionType *)createCTAssertionForConnectionType:(int)arg0 allocator:(struct __CFAllocator *)arg1 proxy:(id)arg2 ;
-(void)_computeNotificationSetForced_sync;
-(void)_computeNotificationSetForced_sync:(id)arg0 ;
-(void)_computeNotificationSet_sync:(BOOL)arg0 completion:(id)arg1 ;
-(void)_computeNotificationSet_sync:(id)arg0 ;
-(void)_connect_sync;
-(void)_ensureConnectionSetup_sync;
-(void)_ensureConnectionSetup_sync:(BOOL)arg0 ;
-(void)_initializeConnection_sync;
-(void)_registerForNotifications_sync:(id)arg0 shouldForce:(BOOL)arg1 completion:(id)arg2 ;
-(void)_sendConnectionInvalidatedNotification_sync:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(struct queue )arg1 ;
-(void)cacheValue:(id)arg0 forSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)registerBlockForInvalidationNotification:(struct __CTAssertionType *)arg0 callbackQueue:(struct queue )arg1 callback:(id)arg2 ;
-(void)removeAssertionForInvalidationNotification:(struct __CTAssertionType *)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)sink:(id)arg0 handleNotification:(id)arg1 ;


@end


#endif