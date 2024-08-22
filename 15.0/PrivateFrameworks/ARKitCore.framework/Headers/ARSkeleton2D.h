// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARSKELETON2D_H
#define ARSKELETON2D_H

@protocol NSSecureCoding;


#import "ARSkeleton.h"
#import "AR2DSkeletonDetectionResult.h"

@interface ARSkeleton2D : ARSkeleton <NSSecureCoding>

 {
    AR2DSkeletonDetectionResult *_skeleton;
}


@property ? jointLandmarks;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isJointTracked:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDetectedSkeleton:(id)arg0 ;
-(id)landmarkForJointNamed;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif