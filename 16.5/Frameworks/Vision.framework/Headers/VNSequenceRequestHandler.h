// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNSEQUENCEREQUESTHANDLER_H
#define VNSEQUENCEREQUESTHANDLER_H


#import <Foundation/Foundation.h>

#import "VNSession.h"
#import "VNRequestPerformer.h"

@interface VNSequenceRequestHandler : NSObject {
    VNSession *_session;
    VNRequestPerformer *_requestPerformer;
}




+(void)forcedCleanup;
+(void)forcedCleanupWithOptions:(id)arg0 ;
+(void)requestForcedCleanup;
+(void)requestForcedCleanupWithOptions:(id)arg0 ;
+(void)requestForcedCleanupWithOptions:(id)arg0 completion:(id)arg1 ;
-(BOOL)_performRequests:(id)arg0 onImageBuffer:(id)arg1 gatheredForensics:(*id)arg2 error:(*id)arg3 ;
-(BOOL)performRequests:(id)arg0 onCGImage:(struct CGImage *)arg1 error:(*id)arg2 ;
-(BOOL)performRequests:(id)arg0 onCGImage:(struct CGImage *)arg1 gatheredForensics:(*id)arg2 error:(*id)arg3 ;
-(BOOL)performRequests:(id)arg0 onCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)performRequests:(id)arg0 onCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 gatheredForensics:(*id)arg3 error:(*id)arg4 ;
-(BOOL)performRequests:(id)arg0 onCIImage:(id)arg1 error:(*id)arg2 ;
-(BOOL)performRequests:(id)arg0 onCIImage:(id)arg1 gatheredForensics:(*id)arg2 error:(*id)arg3 ;
-(BOOL)performRequests:(id)arg0 onCIImage:(id)arg1 orientation:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)performRequests:(id)arg0 onCIImage:(id)arg1 orientation:(unsigned int)arg2 gatheredForensics:(*id)arg3 error:(*id)arg4 ;
-(BOOL)performRequests:(id)arg0 onCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(*id)arg2 ;
-(BOOL)performRequests:(id)arg0 onCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 gatheredForensics:(*id)arg2 error:(*id)arg3 ;
-(BOOL)performRequests:(id)arg0 onCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)performRequests:(id)arg0 onCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(unsigned int)arg2 gatheredForensics:(*id)arg3 error:(*id)arg4 ;
-(BOOL)performRequests:(id)arg0 onCVPixelBuffer:(struct __CVBuffer *)arg1 error:(*id)arg2 ;
-(BOOL)performRequests:(id)arg0 onCVPixelBuffer:(struct __CVBuffer *)arg1 gatheredForensics:(*id)arg2 error:(*id)arg3 ;
-(BOOL)performRequests:(id)arg0 onCVPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)performRequests:(id)arg0 onCVPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 gatheredForensics:(*id)arg3 error:(*id)arg4 ;
-(BOOL)performRequests:(id)arg0 onImageData:(id)arg1 error:(*id)arg2 ;
-(BOOL)performRequests:(id)arg0 onImageData:(id)arg1 gatheredForensics:(*id)arg2 error:(*id)arg3 ;
-(BOOL)performRequests:(id)arg0 onImageData:(id)arg1 orientation:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)performRequests:(id)arg0 onImageData:(id)arg1 orientation:(unsigned int)arg2 gatheredForensics:(*id)arg3 error:(*id)arg4 ;
-(BOOL)performRequests:(id)arg0 onImageURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)performRequests:(id)arg0 onImageURL:(id)arg1 gatheredForensics:(*id)arg2 error:(*id)arg3 ;
-(BOOL)performRequests:(id)arg0 onImageURL:(id)arg1 orientation:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)performRequests:(id)arg0 onImageURL:(id)arg1 orientation:(unsigned int)arg2 gatheredForensics:(*id)arg3 error:(*id)arg4 ;
-(BOOL)prepareForPerformingRequests:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithSession:(id)arg0 ;


@end


#endif