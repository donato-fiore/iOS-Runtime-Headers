// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSYSTEMPOWERASSERTION_H
#define RBSYSTEMPOWERASSERTION_H



#import "RBPowerAssertion.h"
#import "RBSystemState.h"

@interface RBSystemPowerAssertion : RBPowerAssertion {
    RBSystemState *_state;
}




-(id)_preventIdleSleepIdentifiers;
-(id)init;
-(int)_targetPid;


@end


#endif