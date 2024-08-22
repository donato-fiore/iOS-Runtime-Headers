// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVAMATTINGREQUEST_H
#define CVAMATTINGREQUEST_H


#import <Foundation/Foundation.h>

#import "CVADisparityPostprocessingRequest.h"

@interface CVAMattingRequest : NSObject

@property (readonly) *__CVBuffer destinationAlphaMattePixelBuffer; // ivar: _destinationAlphaMattePixelBuffer
@property (readonly) CVADisparityPostprocessingRequest *disparityPostprocessingRequest; // ivar: _disparityPostprocessingRequest
@property (readonly) *__CVBuffer segmentationPixelBuffer; // ivar: _segmentationPixelBuffer
@property (readonly) *__CVBuffer skinSegmentationPixelBuffer; // ivar: _skinSegmentationPixelBuffer


-(id)initWithDisparityPostprocessingRequest:(id)arg0 destinationAlphaMattePixelBuffer:(struct __CVBuffer *)arg1 ;
-(id)initWithDisparityPostprocessingRequest:(id)arg0 segmentationPixelBuffer:(struct __CVBuffer *)arg1 destinationAlphaMattePixelBuffer:(struct __CVBuffer *)arg2 error:(*id)arg3 ;
-(id)initWithDisparityPostprocessingRequest:(id)arg0 segmentationPixelBuffer:(struct __CVBuffer *)arg1 skinSegmentationPixelBuffer:(struct __CVBuffer *)arg2 destinationAlphaMattePixelBuffer:(struct __CVBuffer *)arg3 error:(*id)arg4 ;
-(void)dealloc;


@end


#endif