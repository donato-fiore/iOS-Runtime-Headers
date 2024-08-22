// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCLAMPNOISEMODIFIER_H
#define GKCLAMPNOISEMODIFIER_H



#import "GKNoiseModifier.h"

@interface GKClampNoiseModifier : GKNoiseModifier {
    CGFloat _lowerBound;
    CGFloat _upperBound;
}




-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithInputModuleCount:(NSUInteger)arg0 ;
-(id)initWithLowerBound:(CGFloat)arg0 upperBound:(CGFloat)arg1 ;
-(int)requiredInputModuleCount;


@end


#endif