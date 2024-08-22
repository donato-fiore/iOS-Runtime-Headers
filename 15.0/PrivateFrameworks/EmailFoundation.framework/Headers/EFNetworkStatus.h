// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFNETWORKSTATUS_H
#define EFNETWORKSTATUS_H

@protocol OS_nw_path, OS_dispatch_queue, OS_nw_path_monitor;

#import <Foundation/Foundation.h>


@interface EFNetworkStatus : NSObject {
    os_unfair_lock_s _currentPathLock;
}


@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic, getter=isConstrained) BOOL constrained;
@property (readonly, nonatomic) NSObject<OS_nw_path> *currentPath; // ivar: _currentPath
@property (readonly, nonatomic, getter=isExpensive) BOOL expensive;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue; // ivar: _monitorQueue
@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor; // ivar: _pathMonitor


+(id)cellular;
+(id)external;
+(id)wifi;
+(id)wired;
-(id)initWithInterfaceType:(int)arg0 ;
-(id)initWithPathMonitor:(id)arg0 ;


@end


#endif