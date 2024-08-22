// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSACTIVITYMONITOR_H
#define IDSACTIVITYMONITOR_H

@class NSString, NSArray;
@protocol _IDSActivityMonitorXPCConnectorXPCListener, IDSActivityMonitorListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_IDSActivityMonitorXPCConnector.h"

@interface IDSActivityMonitor : NSObject <_IDSActivityMonitorXPCConnectorXPCListener>



@property (retain, nonatomic) _IDSActivityMonitorXPCConnector *XPCConnector; // ivar: _XPCConnector
@property (readonly, nonatomic) NSString *activity; // ivar: _activity
@property (retain, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IDSActivityMonitorListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL listeningForUpdates;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSArray *subscriptions;
@property (readonly) Class superclass;


-(id)initWithActivity:(id)arg0 serviceIdentifier:(id)arg1 ;
-(id)initWithActivity:(id)arg0 serviceIdentifier:(id)arg1 queue:(id)arg2 ;
-(id)initWithActivity:(id)arg0 serviceIdentifier:(id)arg1 queue:(id)arg2 xpcConnector:(id)arg3 ;
-(void)beginBroadcastingWithInfo:(id)arg0 withCompletion:(id)arg1 ;
-(void)dealloc;
-(void)handleIncomingUpdate:(id)arg0 onActivity:(id)arg1 completion:(id)arg2 ;
-(void)stopBroadcastingForSubActivity:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif