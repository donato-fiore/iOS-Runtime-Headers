// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NETDIAGNOSTICSSHIM_H
#define NETDIAGNOSTICSSHIM_H

@class NSString;
@protocol OS_xpc_object, OS_dispatch_queue, NetDiagnosticsShimDelegate;

#import <Foundation/Foundation.h>


@interface NetDiagnosticsShim : NSObject {
    NSObject<OS_xpc_object> *_netDiagServiceConnection;
    NSObject<OS_xpc_object> *_netDiagNotificationListener;
    NSObject<OS_xpc_object> *_netDiagNotificationConnection;
    NSObject<OS_dispatch_queue> *_netDiagConnQueue;
    NSObject<OS_dispatch_queue> *_netDiagMsgQueue;
}


@property (retain, nonatomic) NSObject<NetDiagnosticsShimDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *taskName; // ivar: _taskName


-(BOOL)netDiagnosticTaskStatusWithReply:(id)arg0 ;
-(BOOL)startNetDiagnosticTaskWithOptions:(id)arg0 reply:(id)arg1 ;
-(BOOL)stopNetDiagnosticTaskWithReply:(id)arg0 ;
-(id)_connectionForServiceNamed:(char *)arg0 queue:(id)arg1 connectionInvalidHandler:(id)arg2 ;
-(id)createNotificationListener;
-(id)initWithTaskName:(id)arg0 queue:(id)arg1 ;
-(void)connectToNetDiagnosticsd;
-(void)dealloc;
-(void)invalidateConnections;
-(void)sendNotificationListener;


@end


#endif