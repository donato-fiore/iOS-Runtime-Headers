// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBNETWORKPATHMONITOR_H
#define MBNETWORKPATHMONITOR_H

@protocol OS_nw_path_monitor, OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MBCellularDataSubscriptionMonitor.h"

@interface MBNetworkPathMonitor : NSObject {
    NSObject<OS_nw_path_monitor> *_wifiPathMonitor;
    NSObject<OS_nw_path_monitor> *_wiredPathMonitor;
    NSObject<OS_nw_path_monitor> *_cellularPathMonitor;
    ? _wifiPathState;
    ? _wiredPathState;
    ? _cellularPathState;
    ? _lastUpdateCellularPathState;
}


@property (readonly) NSInteger backupOnCellularSupport;
@property (retain) MBCellularDataSubscriptionMonitor *dataSubscriptionMonitor; // ivar: _dataSubscriptionMonitor
@property (retain) NSObject<OS_dispatch_group> *initialCellularStateGroup; // ivar: _initialCellularStateGroup
@property (retain) NSObject<OS_dispatch_group> *initialWiFiStateGroup; // ivar: _initialWiFiStateGroup
@property (retain) NSObject<OS_dispatch_group> *initialWiredStateGroup; // ivar: _initialWiredStateGroup
@property (copy, nonatomic) id *networkPathUpdateHandler; // ivar: _networkPathUpdateHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(char *)_pathTypeStringWithPathType:(int)arg0 ;
-(BOOL)_updateState:(struct ? *)arg0 path:(id)arg1 pathType:(int)arg2 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(struct ? )networkConnectivity;
-(void)_cancelMonitors;
-(void)_handleCellularStateChange:(struct ? )arg0 backupOnCellularSupport:(NSInteger)arg1 ;
-(void)_handleWiFiStateChange;
-(void)_performBlock:(id)arg0 ;
-(void)_startCellularMonitor;
-(void)_startWiFiMonitor;
-(void)cancel;
-(void)dealloc;
-(void)fetchNetworkConnectivityWithBlock:(id)arg0 ;
-(void)start;


@end


#endif