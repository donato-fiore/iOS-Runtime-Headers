// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFLIVEPHOTOEDITSESSION_H
#define PFLIVEPHOTOEDITSESSION_H

@class AVAsset, NSDictionary, CIContext, AVAssetExportSession, CIImage, NSString, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PFLivePhotoEditSession : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_renderQueue;
    AVAsset *_videoAsset;
    ? _inputVideoDuration;
    *CGImageSource _inputImageSource;
    unsigned int _inputOrientation;
    NSDictionary *_inputImageProperties;
    CIContext *_renderContext;
    AVAssetExportSession *_exportSession;
    CIImage *_inputImage;
    CIImage *_subsampledInputImage;
    NSInteger _subsampleFactor;
    CIImage *_outputImage;
    CIImage *_scaledOutputImage;
    CGFloat _inputVideoScale;
    CGSize _inputVideoScaleRoundingError;
    id *_frameProcessor;
    NSString *_temporaryDirectory;
    NSURL *_lastTemporaryVideoURL;
    NSString *_uniqueIdentifier;
    BOOL _isExporting;
}


@property float audioVolume; // ivar: _audioVolume
@property (readonly) ? duration;
@property (copy) id *frameProcessor;
@property (readonly) CIImage *inputImage;
@property (readonly) unsigned int orientation;
@property (readonly) CGSize outputImageSize;
@property (readonly) CGSize outputVideoSize;
@property (readonly) ? photoTime; // ivar: _photoTime


+(id)_createTemporaryDirectory;
+(id)temporaryDirectory;
-(BOOL)_canRenderAtPlaybackTime;
-(CGFloat)_inputVideoScale;
-(CGFloat)_targetScaleForTargetSize:(struct CGSize )arg0 ;
-(id)_inputVideoTrack;
-(id)_loadInputImage;
-(id)_loadInputImageProperties;
-(id)_loadInputImageWithSubsampleFactor:(NSInteger)arg0 ;
-(id)_outputImage;
-(id)_outputImageProperties;
-(id)_outputVideoMetadata;
-(id)_processImage:(id)arg0 scale:(CGFloat)arg1 error:(*id)arg2 ;
-(id)_scaledInputImageForTargetScale:(CGFloat)arg0 ;
-(id)_temporaryURLOfType:(id)arg0 ;
-(id)_videoCompositionForTargetSize:(struct CGSize )arg0 ;
-(id)imageProperties;
-(id)init;
-(id)initWithPhotoURL:(id)arg0 videoURL:(id)arg1 photoTime:(struct ? )arg2 photoOrientation:(unsigned int)arg3 ;
-(id)inputImageForRenderScale:(CGFloat)arg0 ;
-(id)outputImage;
-(struct ? )_inputVideoDuration;
-(struct ? )_loadInputVideoDuration;
-(struct CGAffineTransform )_inputVideoTransform;
-(struct CGSize )_inputVideoSize;
-(struct CGSize )_outputVideoSizeForScale:(CGFloat)arg0 ;
-(unsigned int)_inputOrientation;
-(unsigned int)_loadInputImageOrientation;
-(void)_cancelCurrentExportIfNeeded;
-(void)_exportToDestination:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)_prepareForPlaybackWithTargetSize:(struct CGSize )arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)_renderImageToURL:(id)arg0 fileType:(id)arg1 targetSize:(struct CGSize )arg2 completionHandler:(id)arg3 ;
-(void)_renderImageWithTargetSize:(struct CGSize )arg0 completionHandler:(id)arg1 ;
-(void)_renderVideoToURL:(id)arg0 fileType:(id)arg1 targetSize:(struct CGSize )arg2 volume:(float)arg3 completionHandler:(id)arg4 ;
-(void)cancel;
-(void)dealloc;
-(void)exportToDestination:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)prepareForPlaybackWithTargetSize:(struct CGSize )arg0 options:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif