// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PULAYERANIMATIONGROUP_H
#define PULAYERANIMATIONGROUP_H

@class CALayer;


#import "PUTimedAnimationGroup.h"

@interface PULayerAnimationGroup : PUTimedAnimationGroup {
    BOOL _areTrackedAnimationsPaused;
}


@property (readonly, nonatomic) CALayer *referenceLayer; // ivar: _referenceLayer


-(CGFloat)currentTime;
-(id)init;
-(id)initWithReferenceLayer:(id)arg0 ;
-(void)updateAnimations;


@end


#endif