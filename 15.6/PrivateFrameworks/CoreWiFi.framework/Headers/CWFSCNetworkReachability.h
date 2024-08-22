// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFSCNETWORKREACHABILITY_H
#define CWFSCNETWORKREACHABILITY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CWFSCNetworkReachability : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    *__SCNetworkReachability _reachabilityRef;
    BOOL _isMonitoringEvents;
}


@property (copy) id *eventHandler; // ivar: _eventHandler


-(BOOL)isMonitoringEvents;
-(id)init;
-(unsigned int)flags;
-(void)dealloc;
-(void)startEventMonitoring;
-(void)stopEventMonitoring;


@end


#endif