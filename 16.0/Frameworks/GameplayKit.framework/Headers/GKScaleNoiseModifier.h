// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKSCALENOISEMODIFIER_H
#define GKSCALENOISEMODIFIER_H



#import "GKNoiseModifier.h"

@interface GKScaleNoiseModifier : GKNoiseModifier {
    ? _factor;
}




-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithFactor;
-(id)initWithInputModuleCount:(NSUInteger)arg0 ;
-(int)requiredInputModuleCount;


@end


#endif