// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPK2DSKELETON_H
#define ABPK2DSKELETON_H


#import <Foundation/Foundation.h>

#import "ABPKSkeletonDefinition.h"

@interface ABPK2dSkeleton : NSObject {
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _keypoints2d;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _normalizedKeypoints2d;
    vector<float, std::allocator<float>> _confidences;
    vector<unsigned int, std::allocator<unsigned int>> _visibility;
    BOOL _hasMissingJoints;
}


@property (readonly, nonatomic) *float confidences;
@property (readonly, nonatomic) BOOL hasMissingJoints;
@property (readonly, nonatomic) CGSize imageRes; // ivar: _imageRes
@property (readonly, nonatomic) int imageType; // ivar: _imageType
@property ? keypoints2d;
@property ? normalizedKeypoints2d;
@property (readonly, nonatomic) ABPKSkeletonDefinition *skeletonDefinition; // ivar: _skeletonDefinition
@property (readonly, nonatomic) int skeletonType; // ivar: _skeletonType
@property (readonly, nonatomic) *unsigned int visibility;


-(id)initWithType:(int)arg0 ;
-(int)overlaySkeletonOnImage:(struct __CVBuffer *)arg0 withResult:(struct __CVBuffer *)arg1 withColor;


@end


#endif