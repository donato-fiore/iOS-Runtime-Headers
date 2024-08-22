// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBPROCESSPOWERASSERTION_H
#define RBPROCESSPOWERASSERTION_H



#import "RBPowerAssertion.h"
#import "RBProcessState.h"
#import "RBProcess.h"

@interface RBProcessPowerAssertion : RBPowerAssertion {
    RBProcessState *_state;
    RBProcess *_process;
}




-(id)_preventIdleSleepIdentifiers;
-(int)_targetPid;


@end


#endif