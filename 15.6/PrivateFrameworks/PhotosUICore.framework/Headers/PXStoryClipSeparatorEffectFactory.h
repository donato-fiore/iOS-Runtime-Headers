// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYCLIPSEPARATOREFFECTFACTORY_H
#define PXSTORYCLIPSEPARATOREFFECTFACTORY_H


#import <Foundation/Foundation.h>


@interface PXStoryClipSeparatorEffectFactory : NSObject



+(struct ? )parametersForPanTowardsEdge:(unsigned int)arg0 distance:(CGFloat)arg1 ;
+(struct ? )parametersForRotationWithAngle:(CGFloat)arg0 ;
+(void)getParameters:(struct ? *)arg0 forOppositePansWithDistance:(CGFloat)arg1 threeUpComposition:(id)arg2 ;
+(void)getParameters:(struct ? *)arg0 forOppositeRotationsWithAngle:(CGFloat)arg1 threeUpComposition:(id)arg2 ;
+(void)getParameters:(struct ? *)arg0 forParallelPansWithDistance:(CGFloat)arg1 threeUpComposition:(id)arg2 ;
+(void)getParameters:(struct ? *)arg0 forParallelRotationsWithAngle:(CGFloat)arg1 threeUpComposition:(id)arg2 ;


@end


#endif