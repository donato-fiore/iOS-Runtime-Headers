// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVCAMERAFRAMESET_H
#define PVCAMERAFRAMESET_H

@class AVDepthData, NSDictionary;

#import <Foundation/Foundation.h>

#import "PVImageBuffer.h"

@interface PVCameraFrameSet : NSObject

@property (retain) PVImageBuffer *alphaMaskImageBuffer; // ivar: _alphaMaskImageBuffer
@property (nonatomic) NSInteger cameraPosition; // ivar: _cameraPosition
@property (readonly, nonatomic) PVImageBuffer *colorImageBuffer;
@property (readonly, nonatomic) *opaqueCMSampleBuffer colorSampleBuffer; // ivar: _colorSampleBuffer
@property (nonatomic) CGAffineTransform colorTransform; // ivar: _colorTransform
@property (readonly, nonatomic) AVDepthData *depthData; // ivar: _depthData
@property (nonatomic) CGAffineTransform depthTransform; // ivar: _depthTransform
@property (nonatomic) NSInteger deviceOrientation; // ivar: deviceOrientation
@property (retain) NSDictionary *metadata; // ivar: _metadata
@property (nonatomic) ? orientation; // ivar: orientation
@property (readonly, nonatomic) ? presentationTimeStamp;
@property (nonatomic) CGFloat rollRadians; // ivar: _rollRadians


-(id)initWithColorBuffer:(struct opaqueCMSampleBuffer *)arg0 depthData:(id)arg1 metadata:(id)arg2 ;
-(id)initWithColorBuffer:(struct opaqueCMSampleBuffer *)arg0 metadata:(id)arg1 ;
-(void)_sharedInitColorBuffer:(struct opaqueCMSampleBuffer *)arg0 colorTransform:(struct CGAffineTransform )arg1 depthData:(id)arg2 depthTransform:(struct CGAffineTransform )arg3 metadata:(id)arg4 ;
-(void)dealloc;


@end


#endif