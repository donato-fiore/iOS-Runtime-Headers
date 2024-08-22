// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKROTATENOISEMODIFIER_H
#define GKROTATENOISEMODIFIER_H



#import "GKNoiseModifier.h"

@interface GKRotateNoiseModifier : GKNoiseModifier {
    ? _radians;
}




-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithInputModuleCount:(NSUInteger)arg0 ;
-(id)initWithRadians;
-(int)requiredInputModuleCount;


@end


#endif