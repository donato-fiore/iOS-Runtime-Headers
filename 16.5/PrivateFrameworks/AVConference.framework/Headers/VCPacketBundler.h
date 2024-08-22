// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPACKETBUNDLER_H
#define VCPACKETBUNDLER_H


#import <Foundation/Foundation.h>


@interface VCPacketBundler : NSObject {
    char * _buffer;
    unsigned int _bufferSize;
    unsigned int _maxPacketSize;
    _opaque_pthread_mutex_t _mutex;
    unsigned int _packetsPerBundle;
    unsigned int _encodedBufferSize;
    unsigned int _accessUnitDataSectionSize;
    BOOL _currentBundleVoiceActivity;
    BOOL _lastBundleVoiceActivity;
    tagAccessUnitHeaderInfo _accessUnitHeaderInfo;
    int _operatingMode;
    *opaqueVCPacketBundlerCdrxBundleInfo _cdrxBundleInfoRef;
    BOOL _shouldSendPacket;
    int _numBufferedSamples;
    *unk _packetHandler;
    *void _packetHandlerContext;
}


@property (nonatomic) BOOL allowLargePackets; // ivar: _allowLargePackets
@property (readonly, nonatomic) unsigned int bundledPackets; // ivar: _bundledPackets
@property (nonatomic) int bundlingScheme; // ivar: _bundlingScheme
@property (readonly, nonatomic) char * encodedBuffer;
@property (readonly, nonatomic) unsigned int encodedBufferSize;
@property (readonly, nonatomic) BOOL isFull; // ivar: _isFull
@property (readonly, nonatomic) BOOL isTalkSpurtStart;
@property (nonatomic) unsigned int maxPacketSize;
@property (readonly, nonatomic) unsigned int packetsPerBundle;
@property (nonatomic) int payload; // ivar: _payload
@property (readonly, nonatomic) unsigned char priority; // ivar: _priority
@property (nonatomic) unsigned int timestamp; // ivar: _timestamp


-(BOOL)_copyInputBytes:(*void)arg0 numInputBytes:(unsigned int)arg1 payloadType:(int)arg2 timestamp:(unsigned int)arg3 ;
-(BOOL)allocateBundleBuffer:(unsigned int)arg0 ;
-(BOOL)bundleAudioLegacy:(*void)arg0 numInputBytes:(unsigned int)arg1 payloadType:(int)arg2 timestamp:(unsigned int)arg3 ;
-(BOOL)bundleAudioRFC3640:(*void)arg0 numInputBytes:(unsigned int)arg1 payloadType:(int)arg2 timestamp:(unsigned int)arg3 ;
-(BOOL)reallocateBufferWithMaxPacketSize:(unsigned int)arg0 maxPacketCount:(unsigned int)arg1 ;
-(char *)accessUnitDataSectionHead;
-(id)initWithOperatingMode:(int)arg0 bundlingScheme:(int)arg1 packetHandler:(*unk)arg2 packetHandlerContext:(*void)arg3 ;
-(unsigned int)accessUnitHeaderSectionSize;
-(unsigned int)accessUnitHeaderSectionSizeMaximum;
-(unsigned int)bundleBufferSizeWidthMaxPacketSize:(unsigned int)arg0 maxPacketCount:(unsigned int)arg1 ;
-(void)dealloc;
-(void)initLock;
-(void)lock;
-(void)resetBuffer;
-(void)unlock;


@end


#endif