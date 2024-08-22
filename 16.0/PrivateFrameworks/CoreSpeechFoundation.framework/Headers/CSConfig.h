// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSCONFIG_H
#define CSCONFIG_H


#import <Foundation/Foundation.h>


@interface CSConfig : NSObject



+(BOOL)inputRecordingIsFloat;
+(CGFloat)defaultContinousFingerprintBufferDuration;
+(CGFloat)defaultContinousFingerprintBufferDurationForRemora;
+(CGFloat)inputRecordingBufferDuration;
+(NSInteger)inputRecordingEncoderAudioQuality;
+(NSUInteger)channelForOutputReference;
+(NSUInteger)channelForProcessedInput;
+(NSUInteger)serverLoggingChannelBitset;
+(NSUInteger)zeroFilterWindowSizeInMs;
+(NSUInteger)zeroFilterWindowSizeInMsForReport;
+(float)daysBeforeRemovingLogFiles;
+(float)inputRecordingDurationInSecs;
+(float)inputRecordingDurationInSecsExtended;
+(float)inputRecordingSampleRate;
+(float)inputRecordingSampleRateNarrowBand;
+(float)remoteVADDuration;
+(id)inputRecordingSampleRateConverterAlgorithm;
+(int)csAudioProcessingQueuePriority;
+(unsigned int)EncryptionAudioSampleByteDepth;
+(unsigned int)audioConverterBitrate;
+(unsigned int)hearstNumberOfBytesPerChunk;
+(unsigned int)hearstNumberOfSamplesPerChunk;
+(unsigned int)inputRecordingBytesPerFrame;
+(unsigned int)inputRecordingBytesPerPacket;
+(unsigned int)inputRecordingFramesPerPacket;
+(unsigned int)inputRecordingNumberOfChannels;
+(unsigned int)inputRecordingSampleBitDepth;
+(unsigned int)inputRecordingSampleByteDepth;
+(unsigned short)zeroFilterApproxAbsSpeechThreshold;


@end


#endif