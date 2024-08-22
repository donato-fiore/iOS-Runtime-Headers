// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINTERPOLATEDPOINT_H
#define UIINTERPOLATEDPOINT_H

@class NSString;
@protocol UIVectorOperatable;

#import <Foundation/Foundation.h>


@interface UIInterpolatedPoint : NSObject <UIVectorOperatable>

 {
    CGPoint _point;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)epsilonCompatibleWithVector:(id)arg0 ;
+(id)valueWithCGPoint:(struct CGPoint )arg0 ;
+(id)zeroCompatibleWithVector:(id)arg0 ;
-(BOOL)isApproximatelyEqualTo:(id)arg0 withinEpsilon:(id)arg1 ;
-(BOOL)isCompatibleWith:(id)arg0 ;
-(BOOL)isUndefined;
-(id)addVector:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getValue;
-(id)interpolateTo:(id)arg0 progress:(CGFloat)arg1 ;
-(id)multiplyByScalar:(CGFloat)arg0 ;
-(id)multiplyByVector:(id)arg0 ;
-(void)integrateWithVelocity:(id)arg0 target:(id)arg1 intermediateTarget:(id)arg2 intermediateTargetVelocity:(id)arg3 parameters:(struct ? )arg4 state:(struct ? )arg5 delta:(CGFloat)arg6 ;
-(void)reinitWithVector:(id)arg0 ;


@end


#endif