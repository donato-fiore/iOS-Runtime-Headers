// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKSKELETON_H
#define ABPKSKELETON_H


#import <Foundation/Foundation.h>

#import "ABPKSkeletonDefinition.h"

@interface ABPKSkeleton : NSObject {
    vector<ABPKTransform, std::allocator<ABPKTransform>> _localPoses;
    vector<simd_float4x4, std::allocator<simd_float4x4>> _modelPoses;
}


@property (nonatomic) ? cameraRootTransform; // ivar: _cameraRootTransform
@property (nonatomic) ? deviceRootTransform; // ivar: _deviceRootTransform
@property (nonatomic) float estimatedScale; // ivar: _estimatedScale
@property (readonly, nonatomic) *ABPKTransform localPoses;
@property (readonly, nonatomic) *? modelPoses;
@property (readonly, nonatomic) ABPKSkeletonDefinition *skeletonDefinition; // ivar: _skeletonDefinition
@property (readonly, nonatomic) int skeletonType; // ivar: _skeletonType


-(float)computeHeight;
-(id)description;
-(id)init;
-(id)initWithType:(int)arg0 ;
-(id)toDictionary;
-(void)getGlobalJointDataForSkeletonWithPosition:(struct ? **)arg0 withOrientation;
-(void)getLocalJointDataForSkeletonWithPosition:(struct ? **)arg0 withOrientation;
-(void)transformModelPoses:(struct ? )arg0 andUpdateLocalPoses:(BOOL)arg1 ;
-(void)updateLocalPosesFromModelPoses;
-(void)updateModelPosesFromLocalPoses;


@end


#endif