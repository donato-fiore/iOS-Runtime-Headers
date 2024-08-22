// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIP2PAWDLSTATEMONITOR_H
#define WIFIP2PAWDLSTATEMONITOR_H

@class NSXPCConnection, NSString;
@protocol WiFiP2PAWDLStateMonitorXPCDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WiFiP2PAWDLStateMonitor : NSObject <WiFiP2PAWDLStateMonitorXPCDelegate>

 {
    NSObject<OS_dispatch_source> *_connectionRetryTimer;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *stateUpdatedHandler; // ivar: _stateUpdatedHandler
@property (readonly) Class superclass;


-(id)init;
-(int)queryAverageRSSIForPeer:(id)arg0 ;
-(void)beginMonitoring;
-(void)dealloc;
-(void)endMonitoring;
-(void)resetState;
-(void)retryConnection;
-(void)updatedAWDLState:(id)arg0 ;


@end


#endif