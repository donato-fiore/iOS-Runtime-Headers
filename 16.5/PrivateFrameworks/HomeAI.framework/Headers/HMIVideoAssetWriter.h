// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOASSETWRITER_H
#define HMIVIDEOASSETWRITER_H

@class AVAssetWriter, AVAssetWriterInput, NSString;
@protocol AVAssetWriterDelegate, HMFLogging, HMIVideoAssetWriterDelegate, OS_dispatch_queue;


#import "HMIVideoProcessingNode.h"

@interface HMIVideoAssetWriter : HMIVideoProcessingNode <AVAssetWriterDelegate, HMFLogging>



@property (readonly) BOOL allowRecoveryFromInsufficientAudioTrim; // ivar: _allowRecoveryFromInsufficientAudioTrim
@property (retain) AVAssetWriter *assetWriter; // ivar: _assetWriter
@property (copy) id *assetWriterDidOutputSeparableSegment; // ivar: _assetWriterDidOutputSeparableSegment
@property (readonly) *opaqueCMFormatDescription audioFormat; // ivar: _audioFormat
@property (readonly) AVAssetWriterInput *audioInput; // ivar: _audioInput
@property ? currentFragmentStartTime; // ivar: _currentFragmentStartTime
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMIVideoAssetWriterDelegate> *delegate; // ivar: _delegate
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property BOOL dropSamplesUntilSync; // ivar: _dropSamplesUntilSync
@property BOOL dropTrimDurationAttachments; // ivar: _dropTrimDurationAttachments
@property (readonly) NSUInteger hash;
@property ? lastAudioPresentationTimeStamp; // ivar: _lastAudioPresentationTimeStamp
@property ? lastVideoPresentationTimeStamp; // ivar: _lastVideoPresentationTimeStamp
@property (retain) NSString *logIdentifier; // ivar: _logIdentifier
@property ? preferredOutputSegmentInterval; // ivar: _preferredOutputSegmentInterval
@property (readonly) Class superclass;
@property (readonly) *opaqueCMFormatDescription videoFormat; // ivar: _videoFormat
@property (readonly) AVAssetWriterInput *videoInput; // ivar: _videoInput
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithVideoFormat:(struct opaqueCMFormatDescription *)arg0 audioFormat:(struct opaqueCMFormatDescription *)arg1 ;
-(id)initWithVideoFormat:(struct opaqueCMFormatDescription *)arg0 audioFormat:(struct opaqueCMFormatDescription *)arg1 initialFragmentSequenceNumber:(NSUInteger)arg2 preferredOutputSegmentInterval:(struct ? )arg3 ;
-(void)_appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_ensureFirstAudioSampleBufferHasSufficientPrimingTrim:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_failWithDescription:(id)arg0 ;
-(void)_flushAutomatically:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_removeTrimDurationAttachmentsFromAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_startWritingAtStartTime:(struct ? )arg0 ;
-(void)assetWriter:(id)arg0 didOutputSegmentData:(id)arg1 segmentType:(NSInteger)arg2 segmentReport:(id)arg3 ;
-(void)dealloc;
-(void)finishWithCompletionHandler:(id)arg0 ;
-(void)flush;
-(void)flushWithCompletionHandler:(id)arg0 ;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif