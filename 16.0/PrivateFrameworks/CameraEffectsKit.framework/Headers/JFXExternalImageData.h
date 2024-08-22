// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXEXTERNALIMAGEDATA_H
#define JFXEXTERNALIMAGEDATA_H


#import <Foundation/Foundation.h>


@interface JFXExternalImageData : NSObject

@property (nonatomic) ? cameraIntrinsics; // ivar: _cameraIntrinsics
@property (nonatomic) NSInteger cameraPosition; // ivar: _cameraPosition
@property (nonatomic) NSInteger captureFramesPerSecond; // ivar: _captureFramesPerSecond
@property (nonatomic) BOOL hasValidFaceData; // ivar: _hasValidFaceData
@property (nonatomic) CGRect normalizedFaceRect; // ivar: _normalizedFaceRect
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (nonatomic) BOOL requiresFaceTracking; // ivar: _requiresFaceTracking
@property (nonatomic) CGFloat rollAngle; // ivar: _rollAngle
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(void)dealloc;


@end


#endif