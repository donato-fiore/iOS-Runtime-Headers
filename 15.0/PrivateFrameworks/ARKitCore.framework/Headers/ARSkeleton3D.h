// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARSKELETON3D_H
#define ARSKELETON3D_H

@protocol NSSecureCoding;


#import "ARSkeleton.h"
#import "ARCoreRESkeletonResult.h"

@interface ARSkeleton3D : ARSkeleton <NSSecureCoding>

 {
    ARCoreRESkeletonResult *_skeleton;
}


@property (readonly, nonatomic) ARCoreRESkeletonResult *coreRESkeleton;
@property (readonly, nonatomic) *? jointLocalTransforms;
@property (readonly, nonatomic) *? jointModelTransforms;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isJointTracked:(NSInteger)arg0 ;
-(NSUInteger)jointCount;
-(id)definition;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoreRESkeletonResult:(id)arg0 ;
-(struct ? )localTransformForJointName:(id)arg0 ;
-(struct ? )modelTransformForJointName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif