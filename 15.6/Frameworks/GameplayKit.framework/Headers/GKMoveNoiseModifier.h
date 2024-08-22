// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKMOVENOISEMODIFIER_H
#define GKMOVENOISEMODIFIER_H



#import "GKNoiseModifier.h"

@interface GKMoveNoiseModifier : GKNoiseModifier {
    ? _delta;
}




-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithDelta;
-(id)initWithInputModuleCount:(NSUInteger)arg0 ;
-(int)requiredInputModuleCount;


@end


#endif