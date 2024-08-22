// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRUINETWORKOBSERVER_H
#define TVRUINETWORKOBSERVER_H

@class CBCentralManager, NSString, WFClient, WFWiFiStateMonitor;
@protocol CBCentralManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TVRUINetworkObserver : NSObject <CBCentralManagerDelegate>



@property (retain, nonatomic) CBCentralManager *bluetoothManager; // ivar: _bluetoothManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) id *reachabilityDidUpdate; // ivar: _reachabilityDidUpdate
@property (readonly) Class superclass;
@property (retain, nonatomic) WFClient *wifiClient; // ivar: _wifiClient
@property (retain, nonatomic) WFWiFiStateMonitor *wifiStateMonitor; // ivar: _wifiStateMonitor


-(BOOL)_isNetworkReachable;
-(id)init;
-(void)_updateNetworkReachability:(BOOL)arg0 ;
-(void)_wifiStateUpdatedWithOldState:(NSInteger)arg0 andNewState:(NSInteger)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)dealloc;
-(void)startObserving;
-(void)stopObserving;


@end


#endif