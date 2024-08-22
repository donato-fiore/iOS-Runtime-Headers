// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSPROCESSMONITOR_H
#define RBSPROCESSMONITOR_H

@class NSMutableDictionary, NSSet;
@protocol RBSProcessMonitorConfiguring, NSCopying, RBSServiceLocalProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RBSProcessMonitorConfiguration.h"

@interface RBSProcessMonitor : NSObject <RBSProcessMonitorConfiguring, NSCopying>

 {
    os_unfair_lock_s _lock;
    id<RBSServiceLocalProtocol> *_service;
    BOOL _valid;
    BOOL _configuring;
    NSMutableDictionary *_stateByIdentity;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // ivar: _calloutQueue
@property (readonly, nonatomic) RBSProcessMonitorConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSUInteger events;
@property (readonly, nonatomic) unsigned int serviceClass;
@property (readonly, copy, nonatomic) NSSet *states;


+(id)_monitorWithService:(id)arg0 ;
+(id)_monitorWithService:(id)arg0 configuration:(id)arg1 ;
+(id)monitor;
+(id)monitorWithConfiguration:(id)arg0 ;
+(id)monitorWithPredicate:(id)arg0 updateHandler:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)stateForIdentity:(id)arg0 ;
-(void)_handleExitEvent:(id)arg0 ;
-(void)_handlePreventLaunchUpdate:(id)arg0 ;
-(void)_handleProcessStateChange:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)setPredicates:(id)arg0 ;
-(void)setPreventLaunchUpdateHandle:(id)arg0 ;
-(void)setStateDescriptor:(id)arg0 ;
-(void)setUpdateHandler:(id)arg0 ;
-(void)updateConfiguration:(id)arg0 ;


@end


#endif