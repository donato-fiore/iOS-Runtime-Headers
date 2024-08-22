// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _COCLUSTERROLEMONITORROLEOBSERVER_H
#define _COCLUSTERROLEMONITORROLEOBSERVER_H

@class NSString, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "COClusterRole.h"

@interface _COClusterRoleMonitorRoleObserver : NSObject

@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSString *cluster; // ivar: _cluster
@property (retain, nonatomic) NSSet *lastValue; // ivar: _lastValue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) COClusterRole *role; // ivar: _role


-(id)description;
-(id)initWithRole:(id)arg0 inCluster:(id)arg1 queue:(id)arg2 block:(id)arg3 ;
-(void)notify:(id)arg0 ;


@end


#endif