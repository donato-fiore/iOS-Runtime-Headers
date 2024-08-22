// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKTURBULENCENOISEMODIFIER_H
#define GKTURBULENCENOISEMODIFIER_H



#import "GKNoiseModifier.h"

@interface GKTurbulenceNoiseModifier : GKNoiseModifier {
    CGFloat _power;
    CGFloat _frequency;
    CGFloat _roughness;
    int _seed;
    GKPerlinNoiseSource" _perlin;
}




-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithFrequency:(CGFloat)arg0 power:(CGFloat)arg1 roughness:(CGFloat)arg2 seed:(int)arg3 ;
-(id)initWithInputModuleCount:(NSUInteger)arg0 ;
-(int)requiredInputModuleCount;
-(void)dealloc;


@end


#endif