// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINTERPOLATEDCOLOR_H
#define UIINTERPOLATEDCOLOR_H

@class NSString;
@protocol UIVectorOperatable;

#import <Foundation/Foundation.h>


@interface UIInterpolatedColor : NSObject <UIVectorOperatable>

 {
    ? _color;
    CGFloat _epsilon;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)epsilon;
+(id)valueWithCGColor:(struct CGColor *)arg0 ;
+(id)valueWithUIColor:(id)arg0 ;
+(id)zero;
-(BOOL)isApproximatelyEqualTo:(id)arg0 ;
-(BOOL)isApproximatelyEqualTo:(id)arg0 withinEpsilon:(id)arg1 ;
-(BOOL)isUndefined;
-(id)addVector:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getNSValue;
-(id)getUIColor;
-(id)getValue;
-(id)initWithDecomposedColor:(struct ? )arg0 ;
-(id)initWithDecomposedColor:(struct ? )arg0 epsilon:(CGFloat)arg1 ;
-(id)interpolateTo:(id)arg0 progress:(CGFloat)arg1 ;
-(id)multiplyByScalar:(CGFloat)arg0 ;
-(id)multiplyByVector:(id)arg0 ;
-(struct CGColor *)getCGColor;
-(void)integrateWithVelocity:(id)arg0 target:(id)arg1 intermediateTarget:(id)arg2 intermediateTargetVelocity:(id)arg3 parameters:(struct ? )arg4 state:(struct ? )arg5 delta:(CGFloat)arg6 ;
-(void)reinitWithVector:(id)arg0 ;


@end


#endif