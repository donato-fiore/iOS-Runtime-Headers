// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCONSTANTPOWERNOISEMODIFIER_H
#define GKCONSTANTPOWERNOISEMODIFIER_H



#import "GKNoiseModifier.h"

@interface GKConstantPowerNoiseModifier : GKNoiseModifier {
    CGFloat _power;
}




-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithConstantPower:(CGFloat)arg0 ;
-(id)initWithInputModuleCount:(NSUInteger)arg0 ;
-(int)requiredInputModuleCount;


@end


#endif