// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIORELAYIO_H
#define VCAUDIORELAYIO_H

@class NSString;
@protocol NSCopying, VCBasebandCodecNotifications, VCAudioIOSink, VCAudioIOSource;


#import "VCObject.h"

@interface VCAudioRelayIO : VCObject <NSCopying, VCBasebandCodecNotifications, VCAudioIOSink, VCAudioIOSource>

 {
    tagVCAudioFrameFormat _clientFormat;
    tagVCAudioFrameFormat _relayFormat;
    ? _micContext;
    ? _speakerContext;
    _VCRemoteCodecInfo _remoteCodecInfo;
    id *_relay;
}


@property (nonatomic) *tagVCAudioFrameFormat clientFormat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRunning; // ivar: _isRunning
@property (readonly, nonatomic) *opaqueVCAudioBufferList micBuffer; // ivar: _micBuffer
@property *unk micCallback;
@property *void micCallbackContext;
@property (readonly) *tagVCAudioRelayIOContext micContext;
@property float micPowerRMS; // ivar: _micPowerRMS
@property unsigned int micTimestamp; // ivar: _micTimestamp
@property (readonly) *PacketThread_s packetThread; // ivar: _packetThread
@property (readonly) CGFloat preferredIODuration;
@property NSObject<VCBasebandCodecNotifications> *relay;
@property (readonly) *tagVCAudioFrameFormat relayFormat;
@property (nonatomic) *_VCRemoteCodecInfo remoteCodecInfo;
@property (readonly, nonatomic) *opaqueVCAudioBufferList speakerBuffer; // ivar: _speakerBuffer
@property *unk speakerCallback;
@property *void speakerCallbackContext;
@property (readonly) *tagVCAudioRelayIOContext speakerContext;
@property float speakerPowerRMS; // ivar: _speakerPowerRMS
@property unsigned int speakerTimestamp; // ivar: _speakerTimestamp
@property (copy) id *startCompletionHandler; // ivar: _startCompletionHandler
@property (readonly) Class superclass;
@property *unk updateRemoteCodecInfoCallback; // ivar: _updateRemoteCodecInfoCallback
@property *void updateRemoteCodecInfoContext; // ivar: _updateRemoteCodecInfoContext
@property BOOL usePacketThread; // ivar: _usePacketThread


-(?)createBuffersForIOContext;
-(?)initWithMicContextspeakerContext;
-(BOOL)createPacketThreadWithIOBufferDuration:(CGFloat)arg0 name:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqualToRelayIO:(id)arg0 ;
-(BOOL)isInitialized;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)closeRecordings;
-(void)createAudioBuffers;
-(void)createRecordingsWithName:(id)arg0 ;
-(void)dealloc;
-(void)destroyPacketThread;
-(void)didUpdateBasebandCodec:(struct _VCRemoteCodecInfo *)arg0 ;
-(void)initializeFormatContextPointers;
-(void)internalPushAudioSamples:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)printStreamFormats;
-(void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg0 ;


@end


#endif