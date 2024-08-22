// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKINPUT_H
#define ABPKINPUT_H


#import <Foundation/Foundation.h>

#import "ABPKCameraParams.h"

@interface ABPKInput : NSObject

@property (retain) ABPKCameraParams *cameraParams; // ivar: _cameraParams
@property (nonatomic) *__CVBuffer depthConfidenceBuffer; // ivar: _depthConfidenceBuffer
@property (nonatomic) *__CVBuffer depthMap; // ivar: _depthMap
@property *__CVBuffer image; // ivar: _image
@property (nonatomic) BOOL isDepthDataValid; // ivar: _isDepthDataValid
@property BOOL isVioPoseValid; // ivar: _isVioPoseValid
@property CGFloat timestamp; // ivar: _timestamp
@property ? vioPose; // ivar: _vioPose


-(id)init;
-(int)saveDataToDir:(id)arg0 withFileNamePrefix:(id)arg1 ;


@end


#endif