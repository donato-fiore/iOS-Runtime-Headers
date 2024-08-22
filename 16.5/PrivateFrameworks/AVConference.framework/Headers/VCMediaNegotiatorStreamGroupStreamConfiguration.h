// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIANEGOTIATORSTREAMGROUPSTREAMCONFIGURATION_H
#define VCMEDIANEGOTIATORSTREAMGROUPSTREAMCONFIGURATION_H

@class NSArray, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VCMediaNegotiatorStreamGroupStreamConfiguration : NSObject <NSCopying>



@property (nonatomic) unsigned int audioChannelCount; // ivar: _audioChannelCount
@property (readonly, nonatomic) NSArray *codecs; // ivar: _codecs
@property (nonatomic) unsigned int coordinateSystem; // ivar: _coordinateSystem
@property (nonatomic) unsigned int framerate; // ivar: _framerate
@property (nonatomic) BOOL isSubStream; // ivar: _isSubStream
@property (nonatomic) BOOL isTemporalStream; // ivar: _isTemporalStream
@property (nonatomic) unsigned int keyFrameInterval; // ivar: _keyFrameInterval
@property (nonatomic) unsigned int maxMediaBitrate; // ivar: _maxMediaBitrate
@property (nonatomic) unsigned int maxNetworkBitrate; // ivar: _maxNetworkBitrate
@property (nonatomic) unsigned int maxPacketsPerSecond; // ivar: _maxPacketsPerSecond
@property (nonatomic) unsigned int metadata; // ivar: _metadata
@property (nonatomic) unsigned short parentStreamID; // ivar: _parentStreamID
@property (readonly, nonatomic) NSSet *payloads; // ivar: _payloads
@property (nonatomic) unsigned int qualityIndex; // ivar: _qualityIndex
@property (nonatomic) unsigned int repairedMaxNetworkBitrate; // ivar: _repairedMaxNetworkBitrate
@property (nonatomic) unsigned short repairedStreamID; // ivar: _repairedStreamID
@property (nonatomic) CGSize resolution; // ivar: _resolution
@property (nonatomic) unsigned int rtpTimestampRate; // ivar: _rtpTimestampRate
@property (nonatomic) NSUInteger serializedSize; // ivar: _serializedSize
@property (nonatomic) unsigned int ssrc; // ivar: _ssrc
@property (nonatomic) unsigned short streamID; // ivar: _streamID
@property (nonatomic) unsigned char streamIndex; // ivar: _streamIndex


+(id)configWithQualityIndex:(unsigned int)arg0 nwBitrate:(unsigned int)arg1 mediaBitrate:(unsigned int)arg2 maxPacketsPerSecond:(unsigned int)arg3 repairedNwBitrate:(unsigned int)arg4 keyFrameInterval:(unsigned int)arg5 framerate:(unsigned int)arg6 rtpSampleRate:(unsigned int)arg7 isTemporal:(BOOL)arg8 isSubStream:(BOOL)arg9 metadata:(unsigned int)arg10 payloads:(id)arg11 codecs:(id)arg12 width:(unsigned int)arg13 height:(unsigned int)arg14 audioChannelCount:(unsigned int)arg15 streamIndex:(unsigned char)arg16 coordinateSystem:(unsigned int)arg17 ;
-(BOOL)applyCipherSuiteOnMediaStreamConfig:(id)arg0 codecConfigs:(id)arg1 ;
-(BOOL)areCodecsEqualTo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualPayloads:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)addCodec:(unsigned int)arg0 ;
-(void)addPayload:(int)arg0 ;
-(void)dealloc;
-(void)removeCodec:(unsigned int)arg0 ;


@end


#endif