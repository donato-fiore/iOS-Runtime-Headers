// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _COCLUSTERROLEMONITORMEMBEROBSERVER_H
#define _COCLUSTERROLEMONITORMEMBEROBSERVER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "COClusterRole.h"
#import "COClusterMember.h"

@interface _COClusterRoleMonitorMemberObserver : NSObject

@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSString *cluster; // ivar: _cluster
@property (retain, nonatomic) COClusterRole *lastValue; // ivar: _lastValue
@property (readonly, nonatomic) COClusterMember *member; // ivar: _member
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)description;
-(id)initWithMember:(id)arg0 inCluster:(id)arg1 queue:(id)arg2 block:(id)arg3 ;
-(void)notify:(id)arg0 ;


@end


#endif