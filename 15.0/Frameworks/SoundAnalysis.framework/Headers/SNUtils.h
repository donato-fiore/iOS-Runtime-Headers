// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNUTILS_H
#define SNUTILS_H


#import <Foundation/Foundation.h>


@interface SNUtils : NSObject



+(BOOL)checkTimeRange:(struct ? )arg0 isIdenticalToOther:(struct ? )arg1 ;
// +(BOOL)flushAudioBuffer:(id)arg0 channelIndex:(NSUInteger)arg1 intoSink:(id)arg2 error:(unk)arg3  ;
// +(BOOL)flushBytesFromPreciseTimeRangeInAudioFile:(id)arg0 timeRange:(struct ? )arg1 maxFramesPerBuffer:(unsigned int)arg2 recycleBuffers:(BOOL)arg3 prefixBufferPopulator:(id)arg4 suffixBufferPopulator:(unk)arg5 intoSink:(id)arg6 error:(unk)arg7  ;
// +(BOOL)flushBytesFromStreamSource:(id)arg0 toBuffer:(unk)arg1 ofSizeInBytes:(*void)arg2 error:(NSUInteger)arg3  ;
+(BOOL)isFormatPCM:(id)arg0 ;
+(BOOL)isInternalBuild;
+(BOOL)isRunningInDaemon;
+(BOOL)multiArrayConstraintLastDimensionIsFlexible:(id)arg0 ;
// +(BOOL)readApproximateTimeRangeFromAudioFile:(id)arg0 timeRange:(struct ? )arg1 preferShrinkingWhenRounding:(BOOL)arg2 maxFramesPerBuffer:(unsigned int)arg3 recycleBuffers:(BOOL)arg4 prefixBufferPopulator:(id)arg5 suffixBufferPopulator:(unk)arg6 handler:(id)arg7 error:(unk)arg8  ;
// +(BOOL)readPreciseTimeRangeFromAudioFile:(id)arg0 timeRange:(struct ? )arg1 maxFramesPerBuffer:(unsigned int)arg2 recycleBuffers:(BOOL)arg3 prefixBufferPopulator:(id)arg4 suffixBufferPopulator:(unk)arg5 handler:(id)arg6 error:(unk)arg7  ;
+(NSInteger)audioFileFrameCount:(id)arg0 ;
+(NSInteger)detectionCountInResults:(id)arg0 ;
+(id)anyInputMultiArrayShape:(id)arg0 ;
+(id)anyOutputMultiArrayShape:(id)arg0 ;
// +(id)createMultiArrayContainingPreciseTimeRangeOfAudioFile:(id)arg0 timeRange:(struct ? )arg1 maxFramesPerBuffer:(unsigned int)arg2 recycleBuffers:(BOOL)arg3 prefixBufferPopulator:(id)arg4 suffixBufferPopulator:(unk)arg5 numDimensions:(id)arg6 error:(unk)arg7  ;
+(id)denylistFromModelDescription:(id)arg0 ;
+(id)diskSpaceRemainingBytesContainingDirectory:(id)arg0 ;
+(id)feedbackConnections:(id)arg0 ;
+(id)fileCreationDate:(id)arg0 ;
+(id)fileSizeBytes:(id)arg0 ;
+(id)filterClassLabelsInDictionary:(id)arg0 usingDenylist:(id)arg1 ;
+(id)filteredClassLabelsFromModelDescription:(id)arg0 ;
+(id)loadModelAtURL:(id)arg0 withTimeout:(CGFloat)arg1 error:(*id)arg2 ;
+(id)loggingPrefixForRequest:(id)arg0 ;
+(id)parseFeedbackConnectionsString:(id)arg0 ;
+(id)splitBuffer:(id)arg0 intoBuffersWithFrameCount:(unsigned int)arg1 ;
+(id)subtractSet:(id)arg0 from:(id)arg1 ;
+(id)toFloatScalarConvertFromMLMultiArray:(id)arg0 error:(*id)arg1 ;
+(id)toMLMultiArrayConvertFromFloatScalar:(id)arg0 error:(*id)arg1 ;
+(id)userSuppliedFeatureNames:(id)arg0 direction:(NSInteger)arg1 ;
+(id)userSuppliedInputFeatureNames:(id)arg0 ;
+(id)userSuppliedOutputFeatureNames:(id)arg0 ;
+(id)valueForEntitlement:(id)arg0 error:(*id)arg1 ;
+(id)valueForEntitlement:(id)arg0 fromTask:(struct __SecTask *)arg1 error:(*id)arg2 ;
+(id)vggishFeatureEmbeddingInputShape;
+(id)vggishFeatureEmbeddingOutputShape;
+(id)vggishFrontEndProcessingInputShape;
+(id)vggishFrontEndProcessingModelDescription;
+(id)vggishFrontEndProcessingOutputShape;
+(id)windowDurationConstraintFromMultiArrayShapeConstraint:(id)arg0 sampleRate:(unsigned int)arg1 ;
+(id)zeroBufferPopulator:(SEL)arg0 ;
+(int)numberOfElements:(id)arg0 ;
+(int)shapeNonUnitaryDimensionCount:(id)arg0 ;
+(struct ? )addOffset:(struct ? )arg0 toTimeRange:(struct ? )arg1 ;
+(struct ? )clipTimeRange:(struct ? )arg0 toBounds:(struct ? )arg1 ;
+(struct ? )convertScaleForTimeRange:(struct ? )arg0 toValue:(int)arg1 preferShrinkingWhenRounding:(BOOL)arg2 ;
+(struct ? )convertScaleForTimeRange:(struct ? )arg0 toValue:(int)arg1 startRoundingMethod:(unsigned int)arg2 durationRoundingMethod:(unsigned int)arg3 ;
+(struct ? )getTimeRangeEncompassingEntireAudioFile:(id)arg0 ;
+(struct ? )getTimeRangeEncompassingEntireAudioFileAtURL:(id)arg0 error:(*id)arg1 ;
+(struct ? )makeInvalidTimeRange;
// +(struct ? )readApproximateTimeDurationFromAudioFile:(id)arg0 timeDuration:(struct ? )arg1 roundingMethod:(unsigned int)arg2 maxFramesPerBuffer:(unsigned int)arg3 recycleBuffers:(BOOL)arg4 handler:(id)arg5 error:(unk)arg6  ;
// +(struct ? )readPreciseTimeDurationFromAudioFile:(id)arg0 timeDuration:(struct ? )arg1 maxFramesPerBuffer:(unsigned int)arg2 recycleBuffers:(BOOL)arg3 handler:(id)arg4 error:(unk)arg5  ;
+(struct ? )roundTime:(struct ? )arg0 toAllowableTime:(id)arg1 ;
+(struct ? )standardizeTime:(struct ? )arg0 negativeShouldResideInTimescale:(BOOL)arg1 ;
+(struct ? )standardizeTimeRange:(struct ? )arg0 directionShouldBePositive:(BOOL)arg1 ;
+(struct ? )standardizeTimeRange:(struct ? )arg0 directionShouldBePositive:(BOOL)arg1 negativeShouldResideInTimescale:(BOOL)arg2 ;
+(struct ? )standardizeTimeRange:(struct ? )arg0 negativeShouldResideInTimescale:(BOOL)arg1 ;
+(struct _NSRange )lastDimensionSizeRange:(id)arg0 ;
+(unsigned int)modelBlockSize:(id)arg0 ;
+(unsigned int)modelBlockSize:(id)arg0 channelCount:(unsigned int)arg1 ;
+(unsigned int)modelChannelCount:(id)arg0 ;
+(unsigned int)modelSampleRate:(id)arg0 orDefaultRate:(unsigned int)arg1 ;
// +(unsigned int)readFramesFromAudioFile:(id)arg0 frameCount:(unsigned int)arg1 atSampleRate:(CGFloat)arg2 maxFramesPerBuffer:(unsigned int)arg3 recycleBuffers:(BOOL)arg4 handler:(id)arg5 error:(unk)arg6  ;
// +(unsigned int)readFramesFromAudioFile:(id)arg0 frameCount:(unsigned int)arg1 maxFramesPerBuffer:(unsigned int)arg2 recycleBuffers:(BOOL)arg3 handler:(id)arg4 error:(unk)arg5  ;
+(void)_deleteWAVAndTextFilesInDirectory:(id)arg0 createdBeforeDate:(id)arg1 withRemainingDirectoryByteSizeLessThan:(NSInteger)arg2 ;
+(void)clipTimeRange:(struct ? )arg0 toBounds:(struct ? )arg1 handler:(id)arg2 ;
+(void)copyAudioBufferList:(struct AudioBufferList *)arg0 to:(struct AudioBufferList *)arg1 frameCount:(unsigned int)arg2 bytesPerFrame:(unsigned int)arg3 ;
+(void)deleteWAVAndTextFilesInDirectory:(id)arg0 createdBeforeDate:(id)arg1 withRemainingDirectoryByteSizeLessThan:(NSInteger)arg2 ;
// +(void)processFrameCount:(unsigned int)arg0 bufferFactory:(id)arg1 populator:(unk)arg2 handler:(id)arg3 completionHandler:(unk)arg4  ;
+(void)silenceUnfilledFramesInBuffer:(id)arg0 ;


@end


#endif