// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKMLIMAGEDATA_H
#define ABPKMLIMAGEDATA_H


#import <Foundation/Foundation.h>

#import "ABPKImagePreProcessingParams.h"

@interface ABPKMLImageData : NSObject

@property (nonatomic) NSInteger abpkDeviceOrientation; // ivar: _abpkDeviceOrientation
@property (nonatomic) NSInteger deviceOrientation; // ivar: _deviceOrientation
@property (nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (retain, nonatomic) ABPKImagePreProcessingParams *preprocessingParams; // ivar: _preprocessingParams
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 timestamp:(CGFloat)arg1 abpkDeviceOrientation:(NSInteger)arg2 preprocessingParameters:(id)arg3 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 timestamp:(CGFloat)arg1 deviceOrientation:(NSInteger)arg2 preprocessingParameters:(id)arg3 ;
-(void)dealloc;


@end


#endif