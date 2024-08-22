// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKALGINPUT_H
#define ABPKALGINPUT_H


#import <Foundation/Foundation.h>

#import "ABPKImagePreProcessingParams.h"

@interface ABPKAlgInput : NSObject

@property (nonatomic) *__CVBuffer depthConfidenceBuffer; // ivar: _depthConfidenceBuffer
@property (nonatomic) *__CVBuffer depthMap; // ivar: _depthMap
@property *__CVBuffer image; // ivar: _image
@property (nonatomic) ? imageCameraIntrinsics; // ivar: _imageCameraIntrinsics
@property (nonatomic) ABPKImagePreProcessingParams *imagePreProcessingParams; // ivar: _imagePreProcessingParams
@property (nonatomic) CGSize imageResolution; // ivar: _imageResolution
@property BOOL isDepthDataValid; // ivar: _isDepthDataValid
@property CGFloat timestamp; // ivar: _timestamp


-(id)init;


@end


#endif