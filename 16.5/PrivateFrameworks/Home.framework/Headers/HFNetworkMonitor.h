// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFNETWORKMONITOR_H
#define HFNETWORKMONITOR_H

@protocol OS_nw_path_monitor;

#import <Foundation/Foundation.h>


@interface HFNetworkMonitor : NSObject

@property (nonatomic) int currentNetworkPathStatus; // ivar: _currentNetworkPathStatus
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *networkPathMonitor; // ivar: _networkPathMonitor


+(id)networkMonitorWithStatusBlock:(id)arg0 ;
-(id)initWithStatusBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif