// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSMUTABLEANIMATIONSETTINGS_H
#define BSMUTABLEANIMATIONSETTINGS_H

@class NSString, CAMediaTimingFunction;
@protocol BSAnimationSettingsMutating;


#import "BSAnimationSettings.h"

@interface BSMutableAnimationSettings : BSAnimationSettings <BSAnimationSettingsMutating>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat delay;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration;
@property (nonatomic) CGFloat frameInterval;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) CAFrameRateRange preferredFrameRateRange;
@property (nonatomic) float speed;
@property (readonly) Class superclass;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;




@end


#endif