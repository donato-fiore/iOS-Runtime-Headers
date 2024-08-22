// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBNETWORKPATHMONITOR_H
#define DBNETWORKPATHMONITOR_H

@class NSMutableSet, CARObserverHashTable;
@protocol OS_nw_path, OS_nw_path_monitor, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DBNetworkPathMonitor : NSObject

@property (readonly, nonatomic) NSMutableSet *activeAssertions; // ivar: _activeAssertions
@property (retain, nonatomic) NSObject<OS_nw_path> *currentPath; // ivar: _currentPath
@property (nonatomic) NSInteger networkPath; // ivar: _networkPath
@property (nonatomic) BOOL networkPathMonitorActive; // ivar: _networkPathMonitorActive
@property (nonatomic, getter=isNetworkReachable) BOOL networkReachable; // ivar: _networkReachable
@property (retain) CARObserverHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor; // ivar: _pathMonitor
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)description;
-(id)init;
-(void)_networkPathUpdated:(id)arg0 ;
-(void)_startNetworkPathMonitorNow;
-(void)_stopNetworkPathMonitorNow;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)startNetworkPathMonitorWithIdentifier:(id)arg0 ;
-(void)stopNetworkPathMonitorWithIdentifier:(id)arg0 ;


@end


#endif