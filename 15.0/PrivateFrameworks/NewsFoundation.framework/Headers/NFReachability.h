// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFREACHABILITY_H
#define NFREACHABILITY_H

@protocol OS_nw_path, OS_nw_path_monitor, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NFReachability : NSObject

@property (retain, nonatomic) NSObject<OS_nw_path> *currentNetworkPath; // ivar: _currentNetworkPath
@property NSInteger currentReachabilityStatus; // ivar: _currentReachabilityStatus
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *networkPathMonitor; // ivar: _networkPathMonitor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observationQueue; // ivar: _observationQueue


+(id)sharedInstance;
-(NSInteger)_statusFromNetworkPath:(id)arg0 ;
-(id)init;
-(void)_updateCurrentNetworkPath:(id)arg0 ;
-(void)dealloc;


@end


#endif