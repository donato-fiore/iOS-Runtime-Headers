// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCURVENOISEMODIFIER_H
#define GKCURVENOISEMODIFIER_H



#import "GKNoiseModifier.h"

@interface GKCurveNoiseModifier : GKNoiseModifier {
    *CGFloat _parameters;
    *CGFloat _controlPoints;
    int _count;
}




-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithControlPoints:(id)arg0 ;
-(id)initWithInputModuleCount:(NSUInteger)arg0 ;
-(int)requiredInputModuleCount;
-(void)dealloc;


@end


#endif