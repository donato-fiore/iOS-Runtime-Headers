// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSAUDIOCHUNK_H
#define CSAUDIOCHUNK_H

@class NSData;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CSAudioChunk : NSObject

@property (readonly, nonatomic) NSUInteger arrivalHostTimeToAudioRecorder; // ivar: _arrivalHostTimeToAudioRecorder
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSUInteger hostTime; // ivar: _hostTime
@property (readonly, nonatomic) NSUInteger numChannels; // ivar: _numChannels
@property (readonly, nonatomic) NSUInteger numSamples; // ivar: _numSamples
@property (retain, nonatomic) NSData *remoteVAD; // ivar: _remoteVAD
@property (readonly, nonatomic) BOOL remoteVADAvailable;
@property (readonly, nonatomic) NSUInteger sampleByteDepth; // ivar: _sampleByteDepth
@property (readonly, nonatomic) NSUInteger startSampleCount; // ivar: _startSampleCount
@property (readonly, nonatomic) BOOL wasBuffered; // ivar: _wasBuffered
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;


-(NSUInteger)copySubAudioChunkFrom:(NSUInteger)arg0 numSamples:(NSUInteger)arg1 to:(*void)arg2 dstBufferSize:(NSUInteger)arg3 ;
-(id)chunkForChannel:(NSUInteger)arg0 ;
-(id)dataForChannel:(NSUInteger)arg0 ;
-(id)dataWithRemoteVADWithScaleFactor:(float)arg0 numAudioSamplesPerRemoteVAD:(NSUInteger)arg1 ;
-(id)gainCompensatedChunk;
-(id)initWithData:(id)arg0 numChannels:(NSUInteger)arg1 numSamples:(NSUInteger)arg2 sampleByteDepth:(NSUInteger)arg3 startSampleCount:(NSUInteger)arg4 hostTime:(NSUInteger)arg5 arrivalHostTimeToAudioRecorder:(NSUInteger)arg6 wasBuffered:(BOOL)arg7 remoteVAD:(id)arg8 ;
-(id)initWithData:(id)arg0 numChannels:(NSUInteger)arg1 numSamples:(NSUInteger)arg2 sampleByteDepth:(NSUInteger)arg3 startSampleCount:(NSUInteger)arg4 hostTime:(NSUInteger)arg5 remoteVAD:(id)arg6 ;
-(id)initWithXPCObject:(id)arg0 ;
-(id)remoteVADSubChunkFrom:(NSUInteger)arg0 numSamples:(NSUInteger)arg1 numAudioSamplesPerRemoteVAD:(NSUInteger)arg2 ;
-(id)subChunkFrom:(NSUInteger)arg0 numSamples:(NSUInteger)arg1 ;
-(id)subChunkFrom:(NSUInteger)arg0 numSamples:(NSUInteger)arg1 forChannel:(NSUInteger)arg2 ;
-(void)skipSamplesAtStartSuchThatNumSamplesReceivedSoFar:(NSUInteger)arg0 reachesACountOf:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)splitAudioChunkSuchThatNumSamplesReceivedSoFar:(NSUInteger)arg0 reachesACountOf:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif