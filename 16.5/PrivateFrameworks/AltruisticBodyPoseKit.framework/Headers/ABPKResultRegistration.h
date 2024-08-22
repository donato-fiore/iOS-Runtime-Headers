// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKRESULTREGISTRATION_H
#define ABPKRESULTREGISTRATION_H


#import <Foundation/Foundation.h>


@interface ABPKResultRegistration : NSObject {
    ? _joints2d;
    ? _joints3dWrtBody;
    ? _joints3dWrtCamera;
    ? _distortion;
}


@property (nonatomic) ? cameraFromBodyPose; // ivar: _cameraFromBodyPose
@property ? distortion;
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic) ? intrinsics; // ivar: _intrinsics
@property ? joints2d;
@property ? joints3dWrtBody;
@property ? joints3dWrtCamera;
@property (nonatomic) BOOL success; // ivar: _success




@end


#endif