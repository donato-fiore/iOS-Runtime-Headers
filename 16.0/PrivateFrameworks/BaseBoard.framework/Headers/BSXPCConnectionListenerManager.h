// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSXPCCONNECTIONLISTENERMANAGER_H
#define BSXPCCONNECTIONLISTENERMANAGER_H

@class NSMutableDictionary, NSLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BSXPCConnectionListenerManager : NSObject {
    NSObject<OS_dispatch_queue> *_listeningQueue;
    NSMutableDictionary *_services;
    NSLock *_servicesLock;
    NSObject<OS_dispatch_queue> *_defaultHandlerQueue;
}




+(id)defaultHandlerQueue;
+(void)listenForService:(id)arg0 onQueue:(id)arg1 withHandler:(id)arg2 ;
+(void)stopListeningForService:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif