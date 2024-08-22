// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLPULAYERANIMATIONGROUP_H
#define QLPULAYERANIMATIONGROUP_H

@class CALayer;


#import "QLPUTimedAnimationGroup.h"

@interface QLPULayerAnimationGroup : QLPUTimedAnimationGroup {
    BOOL _areTrackedAnimationsPaused;
}


@property (readonly, nonatomic) CALayer *referenceLayer; // ivar: _referenceLayer


-(CGFloat)currentTime;
-(id)init;
-(id)initWithReferenceLayer:(id)arg0 ;
-(void)updateAnimations;


@end


#endif