// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKTERRACENOISEMODIFIER_H
#define GKTERRACENOISEMODIFIER_H



#import "GKNoiseModifier.h"

@interface GKTerraceNoiseModifier : GKNoiseModifier {
    *CGFloat _controlPoints;
    int _count;
    BOOL _inverted;
}




-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithInputModuleCount:(NSUInteger)arg0 ;
-(id)initWithPeakInputValues:(id)arg0 terracesInverted:(BOOL)arg1 ;
-(int)requiredInputModuleCount;
-(void)dealloc;


@end


#endif