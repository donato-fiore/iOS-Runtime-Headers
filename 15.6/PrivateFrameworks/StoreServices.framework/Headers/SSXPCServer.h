// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSXPCSERVER_H
#define SSXPCSERVER_H

@class NSString, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface SSXPCServer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_entitlementName;
    NSObject<OS_xpc_object> *_listener;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_observers;
    NSString *_serviceName;
    NSMutableSet *_xpcRequestsCache;
}




+(id)mainServer;
-(id)init;
-(id)initWithServiceName:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 entitlement:(id)arg1 queue:(id)arg2 ;
-(void)_dispatchMessage:(id)arg0 connection:(id)arg1 ;
-(void)_recordCoreAnalyticsEventForClient:(id)arg0 andSelector:(id)arg1 ;
-(void)addObserver:(id)arg0 selector:(SEL)arg1 forMessage:(NSInteger)arg2 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 selector:(SEL)arg1 forMessage:(NSInteger)arg2 ;
-(void)start;


@end


#endif