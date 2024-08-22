// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BUNETWORKMONITOR_H
#define BUNETWORKMONITOR_H

@class NSString, RadiosPreferences;
@protocol BUNetworkMonitoring, OS_nw_path, OS_dispatch_queue, OS_nw_path_monitor;

#import <Foundation/Foundation.h>


@interface BUNetworkMonitor : NSObject <BUNetworkMonitoring>



@property (retain, nonatomic) NSObject<OS_nw_path> *currentPath; // ivar: _currentPath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue; // ivar: _monitorQueue
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor; // ivar: _pathMonitor
@property (retain, nonatomic) RadiosPreferences *radiosPreferences; // ivar: _radiosPreferences
@property (readonly) Class superclass;


-(BOOL)hasCellularCapability;
-(BOOL)hasCellularConnection;
-(BOOL)hasWAPICapability;
-(BOOL)hasWifiConnection;
-(BOOL)isAirplaneModeEnabled;
-(BOOL)isConnected;
-(id)initWithQueue:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif