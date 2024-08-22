// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNIMAGEREQUESTHANDLER_H
#define VNIMAGEREQUESTHANDLER_H


#import <Foundation/Foundation.h>

#import "VNSession.h"
#import "VNImageBuffer.h"
#import "VNRequestPerformer.h"
#import "VNObservationsCache.h"

@interface VNImageRequestHandler : NSObject {
    VNSession *_session;
    VNImageBuffer *_imageBuffer;
    VNRequestPerformer *_requestPerformer;
    VNObservationsCache *_observationsCache;
}




+(void)forcedCleanup;
+(void)forcedCleanupWithOptions:(id)arg0 ;
+(void)requestForcedCleanup;
+(void)requestForcedCleanupWithOptions:(id)arg0 ;
+(void)requestForcedCleanupWithOptions:(id)arg0 completion:(id)arg1 ;
-(BOOL)performRequests:(id)arg0 error:(*id)arg1 ;
-(BOOL)performRequests:(id)arg0 gatheredForensics:(*id)arg1 error:(*id)arg2 ;
-(BOOL)prepareForPerformingRequests:(id)arg0 error:(*id)arg1 ;
-(id)debugQuickLookObject;
-(id)initWithCGImage:(struct CGImage *)arg0 options:(id)arg1 ;
-(id)initWithCGImage:(struct CGImage *)arg0 options:(id)arg1 session:(id)arg2 ;
-(id)initWithCGImage:(struct CGImage *)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithCGImage:(struct CGImage *)arg0 orientation:(unsigned int)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithCIImage:(id)arg0 options:(id)arg1 ;
-(id)initWithCIImage:(id)arg0 options:(id)arg1 session:(id)arg2 ;
-(id)initWithCIImage:(id)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithCIImage:(id)arg0 orientation:(unsigned int)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 options:(id)arg1 ;
-(id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 options:(id)arg1 session:(id)arg2 ;
-(id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 orientation:(unsigned int)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 ;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 session:(id)arg2 ;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithData:(id)arg0 options:(id)arg1 ;
-(id)initWithData:(id)arg0 options:(id)arg1 session:(id)arg2 ;
-(id)initWithData:(id)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithData:(id)arg0 orientation:(unsigned int)arg1 options:(id)arg2 session:(id)arg3 ;
-(id)initWithSession:(id)arg0 imageBuffer:(id)arg1 ;
-(id)initWithURL:(id)arg0 options:(id)arg1 ;
-(id)initWithURL:(id)arg0 options:(id)arg1 session:(id)arg2 ;
-(id)initWithURL:(id)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithURL:(id)arg0 orientation:(unsigned int)arg1 options:(id)arg2 session:(id)arg3 ;
-(void)cancelAllRequests;


@end


#endif