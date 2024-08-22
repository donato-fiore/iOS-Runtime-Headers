// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFEEDBACKIMPACTBEHAVIOR_H
#define _UIFEEDBACKIMPACTBEHAVIOR_H



#import "UIImpactFeedbackGenerator.h"

@interface _UIFeedbackImpactBehavior : UIImpactFeedbackGenerator



+(id)impactBehaviorWithCoordinateSpace:(id)arg0 configuration:(id)arg1 ;
+(id)impactBehaviorWithStyle:(NSInteger)arg0 coordinateSpace:(id)arg1 ;
-(void)impactOccurredWithIntensity:(CGFloat)arg0 ;


@end


#endif