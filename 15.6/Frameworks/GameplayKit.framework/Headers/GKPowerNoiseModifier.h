// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKPOWERNOISEMODIFIER_H
#define GKPOWERNOISEMODIFIER_H



#import "GKNoiseModifier.h"

@interface GKPowerNoiseModifier : GKNoiseModifier



-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(int)requiredInputModuleCount;


@end


#endif