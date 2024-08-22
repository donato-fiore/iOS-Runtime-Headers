// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMNETWORKCONNECTIONMONITOR_H
#define IMNETWORKCONNECTIONMONITOR_H

@protocol IMSystemMonitorListener, IMReachabilityDelegate;


#import "IMConnectionMonitor.h"
#import "IMReachability.h"

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate>



@property (nonatomic) NSUInteger _hostFlags; // ivar: _hostFlags
@property (retain, nonatomic) IMReachability *_hostReachability; // ivar: _hostReachability
@property (nonatomic) NSUInteger _ipFlags; // ivar: _ipFlags
@property (retain, nonatomic) IMReachability *_ipReachability; // ivar: _ipReachability
@property (nonatomic) BOOL _isConnected; // ivar: _isConnected
@property (nonatomic) BOOL _isSleeping; // ivar: _isSleeping


-(BOOL)isImmediatelyReachable;
-(void)_clearReachability:(*id)arg0 flags:(*NSUInteger)arg1 ;
-(void)_doCallbackLater;
-(void)_doCallbackNow;
-(void)_networkManagedUpdated:(id)arg0 ;
-(void)_setup;
-(void)_setupReachability;
-(void)clear;
-(void)dealloc;
-(void)goConnectedWithLocalSocketAddress:(id)arg0 remoteSocketAddress:(id)arg1 ;
-(void)goDisconnected;
-(void)reachabilityDidChange:(id)arg0 ;
-(void)systemDidWake;
-(void)systemWillSleep;


@end


#endif