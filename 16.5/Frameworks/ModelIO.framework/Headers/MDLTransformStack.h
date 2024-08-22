// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLTRANSFORMSTACK_H
#define MDLTRANSFORMSTACK_H

@class NSMutableDictionary, NSString, NSArray, CAAnimation, NSMutableArray;
@protocol NSCopying, MDLTransformComponent;

#import <Foundation/Foundation.h>


@interface MDLTransformStack : NSObject <NSCopying, MDLTransformComponent>



@property (retain, nonatomic) NSMutableDictionary *animatedValues; // ivar: _animatedValues
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *keyTimes;
@property (nonatomic) ? matrix;
@property (readonly, nonatomic) CGFloat maximumTime;
@property (readonly, nonatomic) CGFloat minimumTime;
@property (nonatomic) BOOL resetsTransform; // ivar: _resetsTransform
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAAnimation *transformAnimation;
@property (copy, nonatomic) NSMutableArray *transformOps; // ivar: _transformOps


+(struct ? )globalTransformWithObject:(id)arg0 atTime:(CGFloat)arg1 ;
+(struct ? )localTransformWithObject:(id)arg0 atTime:(CGFloat)arg1 ;
-(BOOL)isScaleRotateTransformOrder;
-(NSUInteger)count;
-(id)addMatrixOp:(id)arg0 inverse:(BOOL)arg1 ;
-(id)addOrientOp:(id)arg0 inverse:(BOOL)arg1 ;
-(id)addRotateOp:(id)arg0 order:(NSUInteger)arg1 inverse:(BOOL)arg2 ;
-(id)addRotateXOp:(id)arg0 inverse:(BOOL)arg1 ;
-(id)addRotateYOp:(id)arg0 inverse:(BOOL)arg1 ;
-(id)addRotateZOp:(id)arg0 inverse:(BOOL)arg1 ;
-(id)addScaleOp:(id)arg0 inverse:(BOOL)arg1 ;
-(id)addTranslateOp:(id)arg0 inverse:(BOOL)arg1 ;
-(id)animatedMatrix4x4WithName:(id)arg0 shouldCreateIfMissing:(BOOL)arg1 ;
-(id)animatedQuaternionWithName:(id)arg0 shouldCreateIfMissing:(BOOL)arg1 ;
-(id)animatedScalarWithName:(id)arg0 shouldCreateIfMissing:(BOOL)arg1 ;
-(id)animatedValueWithName:(id)arg0 ;
-(id)animatedVector3WithName:(id)arg0 shouldCreateIfMissing:(BOOL)arg1 ;
-(id)animatedVector4WithName:(id)arg0 shouldCreateIfMissing:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decomposedTransformAnimation;
-(id)init;
-(struct ? )double4x4AtTime:(CGFloat)arg0 ;
-(struct ? )float4x4AtTime:(CGFloat)arg0 ;
-(struct ? )localTransformAtTime:(CGFloat)arg0 ;
-(void)clearTransformStack;
-(void)setLocalTransform:(struct ? )arg0 ;
-(void)setLocalTransform:(struct ? )arg0 forTime:(CGFloat)arg1 ;


@end


#endif