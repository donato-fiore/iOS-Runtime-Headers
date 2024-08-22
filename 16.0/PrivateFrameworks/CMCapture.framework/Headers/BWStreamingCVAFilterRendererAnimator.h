// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTREAMINGCVAFILTERRENDERERANIMATOR_H
#define BWSTREAMINGCVAFILTERRENDERERANIMATOR_H


#import <Foundation/Foundation.h>

#import "BWRamp.h"

@interface BWStreamingCVAFilterRendererAnimator : NSObject {
    ? _currentFrame;
    int _mostRecentEffectStatus;
    BWRamp *_simulatedApertureRamp;
}


@property (readonly, nonatomic, getter=isDepthAvailable) BOOL depthAvailable;


+(void)initialize;
-(id)init;
-(id)initWithEffectStatus:(int)arg0 ;
-(struct ? *)simulateNextFrameWithEffectStatus:(int)arg0 portraitStability:(float)arg1 clientSuppliedSimulatedAperture:(float)arg2 ;
-(void)dealloc;


@end


#endif