// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _COCLUSTERROLEMONITORSNAPSHOTOBSERVER_H
#define _COCLUSTERROLEMONITORSNAPSHOTOBSERVER_H

@class NSString, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _COClusterRoleMonitorSnapshotObserver : NSObject

@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSString *cluster; // ivar: _cluster
@property (retain, nonatomic) NSSet *lastValue; // ivar: _lastValue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)description;
-(id)initInCluster:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
-(void)notify:(id)arg0 ;


@end


#endif