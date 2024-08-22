// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNTARGETEDIMAGEREQUEST_H
#define VNTARGETEDIMAGEREQUEST_H



#import "VNImageBasedRequest.h"
#import "VNImageBuffer.h"

@interface VNTargetedImageRequest : VNImageBasedRequest {
    VNImageBuffer *_targetedImageBuffer;
}




-(BOOL)allowsCachingOfResults;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)initWithTargetedCGImage:(struct CGImage *)arg0 options:(id)arg1 ;
-(id)initWithTargetedCGImage:(struct CGImage *)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithTargetedCGImage:(struct CGImage *)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithTargetedCGImage:(struct CGImage *)arg0 orientation:(unsigned int)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithTargetedCIImage:(id)arg0 options:(id)arg1 ;
-(id)initWithTargetedCIImage:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithTargetedCIImage:(id)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithTargetedCIImage:(id)arg0 orientation:(unsigned int)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithTargetedCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 options:(id)arg1 ;
-(id)initWithTargetedCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithTargetedCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithTargetedCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 orientation:(unsigned int)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithTargetedCVPixelBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 ;
-(id)initWithTargetedCVPixelBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithTargetedCVPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithTargetedCVPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithTargetedImageBuffer:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithTargetedImageData:(id)arg0 options:(id)arg1 ;
-(id)initWithTargetedImageData:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithTargetedImageData:(id)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithTargetedImageData:(id)arg0 orientation:(unsigned int)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithTargetedImageURL:(id)arg0 options:(id)arg1 ;
-(id)initWithTargetedImageURL:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithTargetedImageURL:(id)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithTargetedImageURL:(id)arg0 orientation:(unsigned int)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(id)newDefaultRequestInstance;
-(id)requiredTargetedImageBufferReturningError:(*id)arg0 ;
-(id)sequencedRequestPreviousObservationsKey;
-(id)targetedImageBuffer;


@end


#endif