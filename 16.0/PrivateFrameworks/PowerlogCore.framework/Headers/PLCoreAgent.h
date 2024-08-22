// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCOREAGENT_H
#define PLCOREAGENT_H



#import "PLCoreOperator.h"

@interface PLCoreAgent : PLCoreOperator



-(id)init;
-(void)startAgents;
-(void)stopAgents;


@end


#endif