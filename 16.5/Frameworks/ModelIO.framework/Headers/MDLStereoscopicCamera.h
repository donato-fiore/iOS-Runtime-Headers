// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLSTEREOSCOPICCAMERA_H
#define MDLSTEREOSCOPICCAMERA_H



#import "MDLCamera.h"

@interface MDLStereoscopicCamera : MDLCamera

@property (nonatomic) float interPupillaryDistance; // ivar: _interPupillaryDistance
@property (readonly, nonatomic) ? leftProjectionMatrix;
@property (nonatomic) float leftVergence; // ivar: _leftVergence
@property (readonly, nonatomic) ? leftViewMatrix;
@property (nonatomic) float overlap; // ivar: _overlap
@property (readonly, nonatomic) ? rightProjectionMatrix;
@property (nonatomic) float rightVergence; // ivar: _rightVergence
@property (readonly, nonatomic) ? rightViewMatrix;


-(id)init;


@end


#endif