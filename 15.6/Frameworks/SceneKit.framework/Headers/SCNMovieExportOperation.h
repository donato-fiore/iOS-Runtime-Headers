// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNMOVIEEXPORTOPERATION_H
#define SCNMOVIEEXPORTOPERATION_H

@class AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVAssetWriter;


#import "SCNExportOperation.h"

@interface SCNMovieExportOperation : SCNExportOperation {
    AVAssetWriterInput *_assetWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_avAdaptor;
    AVAssetWriter *_assetWriter;
    float _rate;
    BOOL _mirrored;
    float _supersampling;
}




-(id)initWithRenderer:(id)arg0 size:(struct CGSize )arg1 attributes:(id)arg2 outputURL:(id)arg3 ;
-(struct CGImage *)_copySnapshot:(struct CGSize )arg0 ;
-(void)_finishedExport;
-(void)_setupMovieToWritableFile:(id)arg0 ;
-(void)appendImage:(struct CGImage *)arg0 withPresentationTime:(struct ? )arg1 usingAdaptor:(id)arg2 ;
-(void)dealloc;
-(void)main;
-(void)renderAndAppendWithPresentationTime:(struct ? )arg0 usingAdaptor:(id)arg1 metalTextureCache:(struct __CVMetalTextureCache *)arg2 cvQueue:(id)arg3 completionBlock:(id)arg4 ;


@end


#endif