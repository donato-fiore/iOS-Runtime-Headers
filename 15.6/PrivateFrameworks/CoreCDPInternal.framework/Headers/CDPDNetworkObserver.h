// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPDNETWORKOBSERVER_H
#define CDPDNETWORKOBSERVER_H

@class NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CDPDNetworkObserver : NSObject {
    BOOL _networkIsReachable;
    NSLock *_clientsLock;
    NSMutableDictionary *_clientsByUUID;
    *__SCNetworkReachability _networkReach;
    NSObject<OS_dispatch_queue> *_eventQueue;
}




+(id)sharedInstance;
-(id)addNetworkObserverWithEventHandler:(id)arg0 ;
-(id)init;
-(void)_networkReachabilityDidChangeWithFlags:(unsigned int)arg0 ;
-(void)removeObserverWithToken:(id)arg0 ;
-(void)startObservingNetwork;


@end


#endif