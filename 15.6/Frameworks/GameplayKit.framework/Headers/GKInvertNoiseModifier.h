// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKINVERTNOISEMODIFIER_H
#define GKINVERTNOISEMODIFIER_H



#import "GKNoiseModifier.h"

@interface GKInvertNoiseModifier : GKNoiseModifier



-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(int)requiredInputModuleCount;


@end


#endif