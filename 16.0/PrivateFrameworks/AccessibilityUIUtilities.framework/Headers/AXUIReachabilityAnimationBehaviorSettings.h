// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUIREACHABILITYANIMATIONBEHAVIORSETTINGS_H
#define AXUIREACHABILITYANIMATIONBEHAVIORSETTINGS_H

@protocol UIViewSpringAnimationBehaviorDescribing;

#import <Foundation/Foundation.h>


@interface AXUIReachabilityAnimationBehaviorSettings : NSObject <UIViewSpringAnimationBehaviorDescribing>

 {
    CGFloat _trackingDampingRatio;
    CGFloat _dampingRatio;
    CGFloat _trackingResponse;
    CGFloat _response;
    CGFloat _trackingRetargetImpulse;
    CGFloat _retargetImpulse;
}




-(id)initWithPayload:(id)arg0 ;
-(struct ? )parametersForTransitionFromState:(int)arg0 toState:(int)arg1 ;


@end


#endif