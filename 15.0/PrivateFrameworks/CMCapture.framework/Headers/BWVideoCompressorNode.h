// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWVIDEOCOMPRESSORNODE_H
#define BWVIDEOCOMPRESSORNODE_H

@class NSDictionary, NSString, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_source;


#import "BWNode.h"
#import "BWLimitedGMErrorLogger.h"

@interface BWVideoCompressorNode : BWNode {
    NSDictionary *_compressionSettings;
    NSDictionary *_compressionSettingsPreparedFor;
    BOOL _nextFrameEncodeAsKeyFrame;
    BOOL _prioritizeEncodingSpeedOverQuality;
    int _pipelineTraceID;
    *OpaqueVTCompressionSession _compressionSession;
    NSDictionary *_compressionSessionSupportedProperties;
    BOOL _didPrepareToEncode;
    BOOL _sourceIsHDResolution;
    unsigned int _sourcePixelFormatType;
    NSObject<OS_dispatch_queue> *_emitterQueue;
    NSObject<OS_dispatch_queue> *_compressionSessionStateQueue;
    NSObject<OS_dispatch_source> *_reapCompressionSessionTimer;
    CGFloat _reapCompressionSessionTimerDurationInSeconds;
    BOOL _compressionSessionReuseEnabled;
    BOOL _compressionSessionCanBeReused;
    BOOL _resetCodec;
    int _numberOfFramesDroppedBecauseTooManyCompressedBytesInFlight;
    NSInteger _inFlightCompressedBytesWarningThreshold;
    BOOL _inFlightCompressedBytesOverWarningThreshold;
    BOOL _encodedFirstVideoBuffer;
    BOOL _emittedFirstVideoBuffer;
    NSObject<OS_dispatch_queue> *_thermalAndPowerNotificationQueue;
    CGFloat _bFrameEncodingAllowedAtHigherPressureTimeLimit;
    CGFloat _bFrameEncodingAllowedAtHigherPressureStopTime;
    int _nonBFrameAverageBitRate;
    int _thermalPressureNotificationToken;
    int _thermalPressureLevel;
    int _powerPressureNotificationToken;
    int _powerPressureLevel;
    BOOL _bFrameEncodingRequested;
    BOOL _bFrameEncodingAllowed;
    BOOL _propagateStabilizedFacesToAVE;
    BOOL _overCaptureEnabled;
    BOOL _shouldAttachDebugSEI;
    BOOL _shouldPassSerializedDepthImageBuffers;
    BOOL _flushRequestReceived;
    float _maxVideoFrameRate;
    BOOL _attachThumbnailSourcePixelBuffer;
    *__CVBuffer _thumbnailSourcePixelBuffer;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    NSString *_codecNameString;
    *__CFString _alternateCompressionSettingsKey;
    NSInteger _maximumAllowedInFlightCompressedBytes;
    BOOL _delayedCompressorCleanupEnabled;
    NSArray *_smuggledSampleBufferAttachments;
}




+(id)_formatRequirementsForCompressionSettings:(id)arg0 maxVideoFrameRate:(float)arg1 retainedBufferCountHint:(*int)arg2 maxLossyCompressionLevel:(int)arg3 ;
+(void)initialize;
-(BOOL)prioritizeEncodingSpeedOverQuality;
-(NSInteger)maximumAllowedInFlightCompressedBytes;
-(id)_HDRImageStatisticsDictFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 metadata:(id)arg1 ;
-(id)_copyCompressionSessionProperty:(struct __CFString *)arg0 requireSupported:(BOOL)arg1 error:(*int)arg2 ;
-(id)initWithCompressionSettings:(id)arg0 overCaptureEnabled:(BOOL)arg1 maxVideoFrameRate:(float)arg2 delayedCompressorCleanupEnabled:(BOOL)arg3 maxLossyCompressionLevel:(int)arg4 ;
-(id)nodeSubType;
-(id)nodeType;
-(int)_setCompressionSessionProperty:(struct __CFString *)arg0 value:(id)arg1 requireSupported:(BOOL)arg2 ;
-(int)_setEncoderCompressionPropertiesWithCompressionSession:(struct OpaqueVTCompressionSession *)arg0 compressionProperties:(id)arg1 sourcePixelType:(unsigned int)arg2 isHDResolution:(unsigned char)arg3 ;
-(int)pipelineTraceID;
-(struct OpaqueVTCompressionSession *)_compresessionSession;
-(struct OpaqueVTCompressionSession *)_createEncoderSessionWithWidth:(int)arg0 height:(int)arg1 inputPixelFormat:(unsigned int)arg2 isHDResolution:(unsigned char)arg3 videoCodec:(unsigned int)arg4 encoderSpecification:(id)arg5 compressionProperties:(id)arg6 compressorNodeRef:(*void)arg7 ;
-(struct __CFString *)alternateCompressionSettingsKey;
-(void)_cleanCompressor:(BOOL)arg0 ;
-(void)_createCompressionSession;
-(void)_prepareForVideoCompression;
-(void)_registerForThermalAndPowerNotifications;
-(void)_releaseCompressionSession;
-(void)_updatePowerPressureLevel;
-(void)_updateThermalPressureLevel;
-(void)_validateBFrameEncodingAbility;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)insertKeyFrame;
-(void)makeCurrentConfigurationLive;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setAlternateCompressionSettingsKey:(struct __CFString *)arg0 ;
-(void)setMaximumAllowedInFlightCompressedBytes:(NSInteger)arg0 ;
-(void)setPipelineTraceID:(int)arg0 ;
-(void)setPrioritizeEncodingSpeedOverQuality:(BOOL)arg0 ;
-(void)setReapCompressionSessionTimerDurationInSeconds:(CGFloat)arg0 ;


@end


#endif