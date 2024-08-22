// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARCORERESKELETONRESULT_H
#define ARCORERESKELETONRESULT_H

@class NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "AR3DSkeletonDetectionResult.h"

@interface ARCoreRESkeletonResult : NSObject <NSSecureCoding, NSCopying>

 {
    vector<simd_float4x4, std::allocator<simd_float4x4>> _modelTransforms;
    vector<ARSRT, std::allocator<ARSRT>> _localTransformsSRT;
    vector<simd_float4x4, std::allocator<simd_float4x4>> _localTransforms;
    AR3DSkeletonDetectionResult *_liftingResult;
}


@property (nonatomic) CGFloat estimatedScaleFactor; // ivar: _estimatedScaleFactor
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) *? jointLocalTransforms;
@property (readonly, nonatomic) *? jointModelTransforms;
@property (readonly, nonatomic) NSUInteger jointTransformCount;
@property (readonly, nonatomic) AR3DSkeletonDetectionResult *liftedSkeletonData;
@property (readonly, nonatomic) *? localJointTransformsSRT;
@property (nonatomic) ? visionTransform; // ivar: _visionTransform


+(BOOL)supportsSecureCoding;
+(id)jointNames;
+(id)jointParentIndices;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isJointTracked:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModelJointTransforms:(struct ? *)arg0 localJointTransformsSRT:(struct ? *)arg1 numberOfTransforms:(NSUInteger)arg2 liftedSkeletonData:(id)arg3 identifier:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif