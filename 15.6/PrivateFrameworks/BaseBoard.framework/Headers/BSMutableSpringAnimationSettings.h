// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSMUTABLESPRINGANIMATIONSETTINGS_H
#define BSMUTABLESPRINGANIMATIONSETTINGS_H

@class NSString, CAMediaTimingFunction;
@protocol BSAnimationSettingsMutating;


#import "BSSpringAnimationSettings.h"

@interface BSMutableSpringAnimationSettings : BSSpringAnimationSettings <BSAnimationSettingsMutating>



@property (nonatomic) CGFloat damping;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat delay;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat epsilon;
@property (nonatomic) CGFloat frameInterval;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) CGFloat initialVelocity;
@property (nonatomic) CGFloat mass;
@property (nonatomic) CAFrameRateRange preferredFrameRateRange;
@property (nonatomic) float speed;
@property (nonatomic) CGFloat stiffness;
@property (readonly) Class superclass;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;




@end


#endif