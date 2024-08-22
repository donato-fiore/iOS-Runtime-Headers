// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNNOPREQUEST_H
#define VNNOPREQUEST_H



#import "VNImageBasedRequest.h"
#import "VNSupportedImageSize.h"

@interface VNNOPRequest : VNImageBasedRequest

@property (nonatomic) CGFloat detectorExecutionTimeInterval;
@property (copy, nonatomic) VNSupportedImageSize *detectorPreferredImageSize;
@property (nonatomic) BOOL detectorWantsAnisotropicScaling;


+(Class)configurationClass;
-(BOOL)_performNOPForRevision:(NSUInteger)arg0 inContext:(id)arg1 detectorCompletionSemaphore:(id)arg2 error:(*id)arg3 ;
-(BOOL)hasCancellationHook;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)supportedImageSizeSet;
-(struct CGSize )_actualSizeForDesiredSize:(id)arg0 ofSourceImageWidth:(NSUInteger)arg1 height:(NSUInteger)arg2 ;
-(struct __CVBuffer *)_createScaledImagePixelBufferFromCropRect:(struct CGRect )arg0 ofImageBuffer:(id)arg1 inPixelFormat:(unsigned int)arg2 forDetectorInputImageSize:(struct CGSize )arg3 usingAnisotropicScaling:(BOOL)arg4 error:(*id)arg5 ;
-(struct __CVBuffer *)_createScaledImagePixelBufferFromImageBuffer:(id)arg0 inPixelFormat:(unsigned int)arg1 forDetectorInputImageSize:(struct CGSize )arg2 usingAnisotropicScaling:(BOOL)arg3 error:(*id)arg4 ;


@end


#endif