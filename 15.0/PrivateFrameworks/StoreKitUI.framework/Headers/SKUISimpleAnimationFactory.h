// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISIMPLEANIMATIONFACTORY_H
#define SKUISIMPLEANIMATIONFACTORY_H

@class CAMediaTimingFunction, NSString;
@protocol _UIBasicAnimationFactory;

#import <Foundation/Foundation.h>


@interface SKUISimpleAnimationFactory : NSObject <_UIBasicAnimationFactory>

 {
    CAMediaTimingFunction *_timingFunction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)backOutTimingFunction;
+(id)easeQuadInOutTimingFunction;
+(id)easeQuadInTimingFunction;
+(id)easeQuadOutTimingFunction;
+(id)factoryWithTimingFunction:(id)arg0 ;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_timingFunctionForAnimation;


@end


#endif