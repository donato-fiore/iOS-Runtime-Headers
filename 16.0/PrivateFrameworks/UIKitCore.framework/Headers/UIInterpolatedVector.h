// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINTERPOLATEDVECTOR_H
#define UIINTERPOLATEDVECTOR_H

@class NSString;
@protocol UIVectorOperatable;

#import <Foundation/Foundation.h>


@interface UIInterpolatedVector : NSObject <UIVectorOperatable>

 {
    *CGFloat _vector;
    NSUInteger _length;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) *CGFloat vector;


+(id)epsilonCompatibleWithVector:(id)arg0 ;
+(id)valueWithVector:(*CGFloat)arg0 length:(NSUInteger)arg1 ;
// +(id)valueWithVectorMutator:(id)arg0 length:(unk)arg1  ;
+(id)zeroCompatibleWithVector:(id)arg0 ;
-(BOOL)isApproximatelyEqualTo:(id)arg0 withinEpsilon:(id)arg1 ;
-(BOOL)isCompatibleWith:(id)arg0 ;
-(BOOL)isUndefined;
-(id)addVector:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getValue;
-(id)initWithLength:(NSUInteger)arg0 ;
-(id)interpolateTo:(id)arg0 progress:(CGFloat)arg1 ;
-(id)multiplyByScalar:(CGFloat)arg0 ;
-(id)multiplyByVector:(id)arg0 ;
-(void)dealloc;
-(void)integrateWithVelocity:(id)arg0 target:(id)arg1 intermediateTarget:(id)arg2 intermediateTargetVelocity:(id)arg3 parameters:(struct ? )arg4 state:(struct ? )arg5 delta:(CGFloat)arg6 ;
-(void)reinitWithVector:(id)arg0 ;


@end


#endif