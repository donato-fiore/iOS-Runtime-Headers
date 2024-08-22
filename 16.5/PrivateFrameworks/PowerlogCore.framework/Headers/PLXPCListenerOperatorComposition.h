// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLXPCLISTENEROPERATORCOMPOSITION_H
#define PLXPCLISTENEROPERATORCOMPOSITION_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "PLOperator.h"

@interface PLXPCListenerOperatorComposition : NSObject

@property (weak) PLOperator *operator; // ivar: _operator
@property (copy, nonatomic) id *operatorBlock; // ivar: _operatorBlock
@property (readonly) NSDictionary *registration; // ivar: _registration


-(id)description;
-(id)initWithOperator:(id)arg0 withRegistration:(id)arg1 withBlock:(id)arg2 ;
-(void)messageRecievedForClientID:(short)arg0 withProcessName:(id)arg1 withKey:(id)arg2 withPayload:(id)arg3 ;


@end


#endif