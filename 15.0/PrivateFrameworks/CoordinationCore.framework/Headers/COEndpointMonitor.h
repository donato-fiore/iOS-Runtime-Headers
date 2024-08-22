// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COENDPOINTMONITOR_H
#define COENDPOINTMONITOR_H

@class RPCompanionLinkClient;
@protocol OS_dispatch_queue, COEndpointMonitorDelegate;

#import <Foundation/Foundation.h>


@interface COEndpointMonitor : NSObject {
    RPCompanionLinkClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _activeEndpointCount;
}


@property (weak) NSObject<COEndpointMonitorDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)_activateLink;
-(void)startMonitoring;


@end


#endif