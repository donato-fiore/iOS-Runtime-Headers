// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLXPCRESPONDEROPERATORCOMPOSITION_H
#define PLXPCRESPONDEROPERATORCOMPOSITION_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLOperator.h"

@interface PLXPCResponderOperatorComposition : NSObject

@property (weak) PLOperator *operator; // ivar: _operator
@property (copy, nonatomic) id *operatorBlock; // ivar: _operatorBlock
@property (readonly) NSDictionary *registration; // ivar: _registration
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)description;
-(id)initWithOperator:(id)arg0 withRegistration:(id)arg1 withBlock:(id)arg2 ;
-(id)initWithWorkQueue:(id)arg0 withRegistration:(id)arg1 withBlock:(id)arg2 ;
-(id)respondToRequestForClientID:(short)arg0 withProcessName:(id)arg1 withKey:(id)arg2 withPayload:(id)arg3 ;


@end


#endif