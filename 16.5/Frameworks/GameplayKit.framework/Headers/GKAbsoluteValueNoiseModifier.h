// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKABSOLUTEVALUENOISEMODIFIER_H
#define GKABSOLUTEVALUENOISEMODIFIER_H



#import "GKNoiseModifier.h"

@interface GKAbsoluteValueNoiseModifier : GKNoiseModifier



-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(int)requiredInputModuleCount;


@end


#endif