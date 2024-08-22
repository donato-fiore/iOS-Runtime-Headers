// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARSKELETON2D_H
#define ARSKELETON2D_H

@class ABPK2DDetectionResult;
@protocol NSSecureCoding;


#import "ARSkeleton.h"

@interface ARSkeleton2D : ARSkeleton <NSSecureCoding>

 {
    ABPK2DDetectionResult *_skeleton;
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