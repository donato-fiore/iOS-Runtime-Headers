// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUICABASICANIMATIONPARAMETERS_H
#define CCUICABASICANIMATIONPARAMETERS_H

@class NSString;
@protocol CCUIAnimationParameters, NSMutableCopying, CCUIAnimationTimingFunctionDescription;

#import <Foundation/Foundation.h>


@interface CCUICABasicAnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CAFrameRateRange frameRateRange; // ivar: _frameRateRange
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int highFrameRateReason; // ivar: _highFrameRateReason
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSObject<CCUIAnimationTimingFunctionDescription> *timingFunction; // ivar: _timingFunction


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithAnimationParameters:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif