// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVSAMPLEBUFFERAUDIORENDERER_H
#define AVSAMPLEBUFFERAUDIORENDERER_H

@class NSString, NSError;
@protocol AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, AVQueuedSampleBufferRendering;

#import <Foundation/Foundation.h>

#import "AVSampleBufferAudioRendererInternal.h"

@interface AVSampleBufferAudioRenderer : NSObject <AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, AVQueuedSampleBufferRendering>

 {
    AVSampleBufferAudioRendererInternal *_audioRendererInternal;
}


@property (nonatomic) NSUInteger allowedAudioSpatializationFormats;
@property (copy, nonatomic) NSString *audioOutputDeviceUniqueID;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL hasSufficientMediaDataForReliablePlaybackStart;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;
@property (readonly, nonatomic) NSInteger status;
@property (readonly) Class superclass;
@property (readonly, retain) *OpaqueCMTimebase timebase;


+(id)currentFigAudioRendererFactory;
+(id)sampleBufferAudioRenderer;
+(void)setFigAudioRendererFactory:(id)arg0 forQueue:(id)arg1 ;
-(?)copyFigSampleBufferAudioRenderer;
-(BOOL)isMuted;
-(BOOL)setRenderSynchronizer:(id)arg0 error:(*id)arg1 ;
-(BOOL)willTrimShortDurationSamples;
-(float)volume;
-(id)audioSession;
-(id)init;
-(id)outputContext;
-(int)_initializeTimebase;
-(int)_installNotificationHandlers;
-(struct opaqueMTAudioProcessingTap *)audioTapProcessor;
-(void)_transitionToFailedStatusWithOSStatus:(int)arg0 ;
-(void)_transitionToStatus:(NSInteger)arg0 error:(id)arg1 ;
-(void)_triggerMediaRequestCallback;
-(void)_uninstallNotificationHandlers;
-(void)_wasFlushedAutomaticallyAtTime:(struct ? )arg0 ;
-(void)dealloc;
-(void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)flush;
-(void)flushFromSourceTime:(struct ? )arg0 completionHandler:(id)arg1 ;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg0 usingBlock:(id)arg1 ;
-(void)setAudioSession:(id)arg0 ;
-(void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg0 ;
-(void)setMuted:(BOOL)arg0 ;
-(void)setOutputContext:(id)arg0 ;
-(void)setSTSLabel:(id)arg0 ;
-(void)setVolume:(float)arg0 ;
-(void)stopRequestingMediaData;


@end


#endif