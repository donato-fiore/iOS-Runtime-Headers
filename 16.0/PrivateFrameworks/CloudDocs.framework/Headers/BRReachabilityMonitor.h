// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRREACHABILITYMONITOR_H
#define BRREACHABILITYMONITOR_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRReachabilityMonitor : NSObject {
    NSHashTable *_reachabilityObservers;
    *__SCNetworkReachability _reachabilityRef;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) BOOL isNetworkReachable;
@property (nonatomic) unsigned int reachabilityFlags; // ivar: _reachabilityFlags


+(BOOL)isNetworkReachableForFlags:(unsigned int)arg0 ;
+(id)sharedReachabilityMonitor;
+(unsigned int)getReachabilityFlagsByCheckingNetwork;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;


@end


#endif