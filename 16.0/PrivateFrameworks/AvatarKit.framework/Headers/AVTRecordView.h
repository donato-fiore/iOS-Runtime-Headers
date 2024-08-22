// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTRECORDVIEW_H
#define AVTRECORDVIEW_H

@class NSMutableData, CAAnimationGroup, AVCaptureMovieFileOutput, AVPlayer, AVAssetWriterInput, AVAssetWriter, NSLock, NSMutableArray, CALayer, NSString;
@protocol AVTFaceTrackerDelegate, OS_dispatch_queue, AVTRecordViewDelegate;


#import "AVTView.h"

@interface AVTRecordView : AVTView <AVTFaceTrackerDelegate>

 {
    BOOL _exportingMovie;
    int _isFading;
    NSObject<OS_dispatch_queue> *_preloadQueue;
    BOOL _playBakedAnimation;
    BOOL _disableRendering;
    float _maxRecordingDuration;
    NSMutableData *_rawTimesData;
    NSMutableData *_rawBlendShapesData;
    NSMutableData *_rawTransformsData;
    NSMutableData *_rawParametersData;
    CGFloat _referenceAnimationBeginTime;
    CGFloat _recordingStartTime;
    int _recordedCount;
    int _recordingCapacity;
    CAAnimationGroup *_recordedAnimationGroup;
    AVCaptureMovieFileOutput *_movieFileOutput;
    AVPlayer *_audioPlayer;
    AVAssetWriterInput *_audioWriterInput;
    AVAssetWriter *_audioWriter;
    NSLock *_audioLock;
    ? _currentAudioTime;
    ? _startAudioTime;
    ? _stopAudioTime;
    NSInteger _recordedSampleCount;
    BOOL _audioIsRecording;
    CGFloat _lastAudioPlayerTime;
    CGFloat _lastAudioSystemTime;
    BOOL _playing;
    BOOL _transitioningFromSnapshot;
    CGFloat _t0;
    int _benchFrameCounter;
    BOOL _doubleBuffer;
    BOOL _checkDrawableAvailable;
    NSMutableArray *_droppedDoubleBufferFrames;
    NSInteger _preferredFramesPerSecond_user;
    NSInteger _preferredFramesPerSecond_thermal;
    CALayer *_backingLayer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) float maxRecordingDuration;
@property (nonatomic) BOOL mute; // ivar: _mute
@property (readonly, nonatomic, getter=isPreviewing) BOOL previewing;
@property (weak, nonatomic) NSObject<AVTRecordViewDelegate> *recordDelegate; // ivar: _recordDelegate
@property (readonly, nonatomic, getter=isRecording) BOOL recording; // ivar: _recording
@property (readonly) Class superclass;


+(BOOL)usesInternalTrackingPipeline;
+(void)setUsesInternalTrackingPipeline:(BOOL)arg0 ;
-(BOOL)allowTrackSmoothing;
-(BOOL)disableRendering;
-(BOOL)exportMovieToURL:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)faceIsFullyActive;
-(BOOL)isDoubleBuffered;
-(BOOL)mergeAudio:(id)arg0 andVideoTo:(id)arg1 error:(*id)arg2 ;
-(BOOL)playBakedAnimation;
-(BOOL)recording;
-(CGFloat)_renderer:(id)arg0 inputTimeForCurrentFrameWithTime:(CGFloat)arg1 ;
-(CGFloat)currentAudioTime;
-(CGFloat)finalVideoDuration;
-(CGFloat)recordingDuration;
-(NSInteger)preferredFramesPerSecond;
-(id)_tmpAudioURL;
-(id)_tmpMaskVideoURL;
-(id)_tmpVideoURL;
-(id)faceTrackingRecordingURL;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 options:(id)arg1 ;
-(id)puppetState;
-(struct opaqueCMSampleBuffer *)createSilentAudioAtFrame:(NSInteger)arg0 nFrames:(int)arg1 sampleRate:(CGFloat)arg2 numChannels:(int)arg3 ;
-(void)_avt_commonInit;
-(void)_didUpdateAtTime:(CGFloat)arg0 ;
-(void)_drawAtTime:(CGFloat)arg0 ;
-(void)_playLivePreviewAnimation;
-(void)_processInfoThermalStateDidChange:(id)arg0 ;
-(void)_renderer:(id)arg0 updateAtTime:(CGFloat)arg1 ;
-(void)_setEffectivePreferredFramesPerSecond;
-(void)_smoothRecordedData;
-(void)_updateFrameRateForThermalState:(NSInteger)arg0 ;
-(void)_updateTrackingState;
-(void)addRecordedAnimationToAvatar:(id)arg0 ;
-(void)audioPlayerItemDidReachEnd:(id)arg0 ;
-(void)audioSessionInterruption:(id)arg0 ;
-(void)avatarDidChange;
-(void)cancelMovieExport;
-(void)cancelRecording;
-(void)cancelRecordingAudio;
-(void)convertRecordedDataToAnimationGroup;
-(void)dealloc;
-(void)didLostTrackingForAWhile;
-(void)drawableNotAvailableForTime:(CGFloat)arg0 ;
-(void)faceTracker:(id)arg0 session:(id)arg1 didFailWithError:(id)arg2 ;
-(void)faceTracker:(id)arg0 session:(id)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 ;
-(void)faceTracker:(id)arg0 sessionInterruptionEnded:(id)arg1 ;
-(void)faceTracker:(id)arg0 sessionWasInterrupted:(id)arg1 ;
-(void)faceTrackerDidUpdate:(id)arg0 trackingInfo:(id)arg1 ;
-(void)fadePuppetToWhite:(float)arg0 ;
-(void)finalizeAudioFile;
-(void)playPreviewOnce;
-(void)removeRecordedAnimationFromAvatar:(id)arg0 ;
-(void)setAvatar:(id)arg0 ;
-(void)setDisableRendering:(BOOL)arg0 ;
-(void)setFaceTrackingPaused:(BOOL)arg0 ;
-(void)setFaceTrackingRecordingURL:(id)arg0 ;
-(void)setPlayBakedAnimation:(BOOL)arg0 ;
-(void)setPreferredFramesPerSecond:(NSInteger)arg0 ;
-(void)setPuppetState:(id)arg0 ;
-(void)startPlayingAudio;
-(void)startPreviewing;
-(void)startRecording;
-(void)startRecordingAudio;
-(void)stopPlayingAudio;
-(void)stopPreviewing;
-(void)stopRecording;
-(void)stopRecordingAudio;
-(void)trimRecordedData;
-(void)updateAtTime:(CGFloat)arg0 ;
-(void)updateAudioState;
-(void)updateForChangedFaceTrackingPaused;
-(void)updateMuteState;
-(void)willUpdateAvatarWithNewFaceTrackingData:(CGFloat)arg0 ;


@end


#endif