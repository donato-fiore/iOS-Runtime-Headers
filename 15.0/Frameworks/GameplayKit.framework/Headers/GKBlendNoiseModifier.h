// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKBLENDNOISEMODIFIER_H
#define GKBLENDNOISEMODIFIER_H



#import "GKNoiseModifier.h"

@interface GKBlendNoiseModifier : GKNoiseModifier {
    CGFloat _lowerBound;
    CGFloat _upperBound;
    CGFloat _blendDistance;
}




-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithInputModuleCount:(NSUInteger)arg0 ;
-(id)initWithSelectionRangeLowerBound:(CGFloat)arg0 selectionRangeUpperBound:(CGFloat)arg1 selectionBoundaryBlendDistance:(CGFloat)arg2 ;
-(int)requiredInputModuleCount;


@end


#endif