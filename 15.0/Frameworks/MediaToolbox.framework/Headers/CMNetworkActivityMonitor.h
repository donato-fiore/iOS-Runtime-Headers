// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMNETWORKACTIVITYMONITOR_H
#define CMNETWORKACTIVITYMONITOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CMNetworkActivityObserver.h"

@interface CMNetworkActivityMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic, setter=setCMObserver:) CMNetworkActivityObserver *cmObserver; // ivar: _cmObserver
@property (nonatomic) NSInteger monitoringActiveCount; // ivar: _monitoringActiveCount
@property (nonatomic) BOOL networkIsActive; // ivar: _networkIsActive
@property (nonatomic) NSInteger showingNetworkActivityCount; // ivar: _showingNetworkActivityCount


+(id)sharedActivityMonitor;
-(id)init;
-(void)beginMonitoring;
-(void)dealloc;
-(void)endMonitoring;


@end


#endif