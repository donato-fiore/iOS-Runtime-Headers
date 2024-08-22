// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUVELOCITYSAMPLER_H
#define HUVELOCITYSAMPLER_H


#import <Foundation/Foundation.h>

#import "HUVelocitySample.h"

@interface HUVelocitySampler : NSObject

@property (retain, nonatomic) HUVelocitySample *currentSample; // ivar: _currentSample
@property (retain, nonatomic) HUVelocitySample *previousSample; // ivar: _previousSample
@property (readonly, nonatomic) CGVector velocity;


-(void)addTouchSample:(struct CGPoint )arg0 ;
-(void)reset;


@end


#endif