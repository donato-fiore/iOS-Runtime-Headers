// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKMULTIPLYNOISEMODIFIER_H
#define GKMULTIPLYNOISEMODIFIER_H



#import "GKNoiseModifier.h"

@interface GKMultiplyNoiseModifier : GKNoiseModifier



-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(int)requiredInputModuleCount;


@end


#endif