// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXSTORYEXPORTOPERATION_H
#define _PXSTORYEXPORTOPERATION_H

@class NSOperation, NSError, AVAssetWriter, AVAssetReader, AVAssetReaderAudioMixOutput, AVAssetWriterInput, NSString, NSURL, NSProgress, AVAssetWriterInputPixelBufferAdaptor;
@protocol PXGEngineDelegate, PXStoryDiagnosticHUDDataSource, PXStoryPacingCueSource, PXStoryExportRequest_Internal, OS_dispatch_queue, PXStoryStyle, OS_os_log, PXAudioCueSource, OS_dispatch_semaphore;


#import "PXObservable.h"
#import "PXStoryRelatedController.h"
#import "PXStoryModel.h"
#import "PXStoryExportConfiguration.h"
#import "PXGEngine.h"
#import "PXMediaProvider.h"
#import "PXStoryPacingController.h"
#import "PXGPixelBufferMetalRenderDestination.h"
#import "PXStorySongController.h"
#import "PXStoryExportVideoOptions.h"

@interface _PXStoryExportOperation : NSOperation <PXGEngineDelegate, PXStoryDiagnosticHUDDataSource, PXStoryPacingCueSource, PXStoryExportRequest_Internal>

 {
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSInteger _stateQueue_status;
    NSError *_stateQueue_error;
    BOOL _stateQueue_hasAudioForExport;
    ? _stateQueue_exportDuration;
    ? _stateQueue_outroDuration;
    id<PXStoryStyle> *_stateQueue_exportedStyle;
    NSObject<OS_os_log> *_signpostLog;
    NSUInteger _signpostID;
    NSObject<OS_os_log> *_frequentSignpostLog;
    NSUInteger _frequentSignpostID;
}


@property (readonly, nonatomic) NSUInteger HUDContentChangeDescriptor;
@property (readonly, nonatomic) PXObservable *HUDObservable;
@property (readonly, nonatomic) PXStoryRelatedController *HUDRelatedController;
@property (readonly, nonatomic) PXStoryModel *HUDStoryModel;
@property (readonly, nonatomic) NSUInteger HUDStoryModelChangeDescriptor;
@property (readonly, nonatomic) NSUInteger HUDVisibiltyChangeDescriptor;
@property (retain) AVAssetWriter *assetWriter; // ivar: _assetWriter
@property (readonly, nonatomic) NSObject<PXAudioCueSource> *audioCueSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // ivar: _audioQueue
@property (retain, nonatomic) AVAssetReader *audioQueue_assetReader; // ivar: _audioQueue_assetReader
@property (retain, nonatomic) AVAssetReaderAudioMixOutput *audioQueue_audioMixOutput; // ivar: _audioQueue_audioMixOutput
@property (retain, nonatomic) AVAssetWriterInput *audioQueue_audioWriter; // ivar: _audioQueue_audioWriter
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *completedWritingVideoFrameSemaphore; // ivar: _completedWritingVideoFrameSemaphore
@property (readonly, nonatomic) PXStoryExportConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSInteger cuesVersion;
@property (readonly, nonatomic) ? currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (readonly, nonatomic) NSInteger diagnosticHUDType;
@property (retain, nonatomic, setter=_setError:) NSError *error;
@property (nonatomic, setter=_setExportDuration:) ? exportDuration;
@property (retain, nonatomic, setter=_setExportedStyle:) NSObject<PXStoryStyle> *exportedStyle;
@property (nonatomic, setter=_setHasAudioForExport:) BOOL hasAudioForExport;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) BOOL isHUDVisible;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *layoutCompleteSemaphore; // ivar: _layoutCompleteSemaphore
@property (nonatomic, setter=_setOutroDuration:) ? outroDuration;
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (nonatomic, setter=_setStatus:) NSInteger status;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (retain, nonatomic) PXGEngine *storyQueue_engine; // ivar: _storyQueue_engine
@property (readonly, nonatomic) BOOL storyQueue_isWaitingForResources; // ivar: _storyQueue_isWaitingForResources
@property (retain, nonatomic) PXMediaProvider *storyQueue_mediaProvider; // ivar: _storyQueue_mediaProvider
@property (retain, nonatomic) PXStoryPacingController *storyQueue_pacingController; // ivar: _storyQueue_pacingController
@property (retain, nonatomic) PXGPixelBufferMetalRenderDestination *storyQueue_pixelBufferRenderDestination; // ivar: _storyQueue_pixelBufferRenderDestination
@property (retain, nonatomic) PXStorySongController *storyQueue_songController; // ivar: _storyQueue_songController
@property (retain, nonatomic) PXStoryModel *storyQueue_storyModel; // ivar: _storyQueue_storyModel
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) PXStoryExportVideoOptions *videoOptions; // ivar: _videoOptions
@property (nonatomic) ? videoQueue_firstWrittenStoryTime; // ivar: _videoQueue_firstWrittenStoryTime
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *videoWriterQueue; // ivar: _videoWriterQueue
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *videoWriterQueue_pixelBufferWriter; // ivar: _videoWriterQueue_pixelBufferWriter


-(BOOL)_waitForStoryStateWhileExportingCanContinueByWatchingChanges:(NSUInteger)arg0 timeout:(struct ? )arg1 verificationBlock:(id)arg2 ;
-(BOOL)_waitWhileExportingCanContinueForSemaphore:(id)arg0 timeout:(struct ? )arg1 ;
-(BOOL)engine:(id)arg0 shouldRenderLayout:(id)arg1 sprites:(id)arg2 ;
-(BOOL)shouldContinueExporting;
-(id)_audibleVideoHilightsInStory;
-(id)_videoOutputSettings;
-(id)collectAnalyticsForExportBegin;
-(id)diagnosticCueStringForSize:(struct CGSize )arg0 withIndicatorTime:(struct ? )arg1 rangeIndicatorTimeRange:(struct ? )arg2 ;
-(id)diagnosticHUDContentProviderForType:(NSInteger)arg0 ;
-(id)initWithURL:(id)arg0 configuration:(id)arg1 qualityOfService:(NSInteger)arg2 progressHandler:(id)arg3 ;
-(id)pixelBufferAttributes;
-(void)_addAudioAssetsForVideoHilightsToAudioCompositionBuilder:(id)arg0 ;
-(void)_addAudioInputToAssetWriter:(id)arg0 ;
-(void)_addMetadataToAssetWriter:(id)arg0 ;
-(void)_addSongAssetToAudioCompositionBuilder:(id)arg0 ;
-(void)_addVideoInputToAssetWriter:(id)arg0 ;
-(void)_advanceLayoutToStoryTime:(struct ? )arg0 ;
-(void)_audioWriteQueue_cancelAudioExport;
-(void)_audioWriteQueue_exportAudioWithCompletionHandler:(id)arg0 ;
-(void)_audioWriteQueue_setupAudioReaderWithAudioExportComposition:(id)arg0 audioMix:(id)arg1 ;
-(void)_exportAudioWithCompletionHandler:(id)arg0 ;
-(void)_exportVideo;
-(void)_finishWriting;
-(void)_handleMediaRequestCompletedForSongAsset:(id)arg0 avAsset:(id)arg1 audioMix:(id)arg2 info:(id)arg3 audioCompositionBuilder:(id)arg4 ;
-(void)_initializeProgress;
-(void)_preloadStoryResourcesAndWaitForBuffering;
-(void)_setupAudioExporting;
-(void)_setupStoryLayout;
-(void)_setupStoryModel;
-(void)_setupWriter;
-(void)_signalSemaphoresForFailedExport;
-(void)_storyQueue_advanceLayoutToStoryTime:(struct ? )arg0 ;
-(void)_storyQueue_processRenderedLayoutPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)_videoWriterQueue_writeVideoWithPixelBuffer:(struct __CVBuffer *)arg0 forStoryTime:(struct ? )arg1 ;
-(void)_writeVideoWithPixelBuffer:(struct __CVBuffer *)arg0 forStoryTime:(struct ? )arg1 ;
-(void)cancel;
-(void)collectAnalyticsForExportEnd:(id)arg0 ;
-(void)dealloc;
-(void)engineSetNeedsUpdate:(id)arg0 ;
-(void)main;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif