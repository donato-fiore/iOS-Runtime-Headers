// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIANEGOTIATIONBLOB_H
#define VCMEDIANEGOTIATIONBLOB_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "VCMediaNegotiationBlobAudioSettings.h"
#import "VCMediaNegotiationBlobCaptionsSettings.h"
#import "VCMediaNegotiationFaceTimeSettings.h"
#import "VCMediaNegotiationBlobMomentsSettings.h"
#import "VCMediaNegotiationBlobVideoSettings.h"

@interface VCMediaNegotiationBlob : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int accessNetworkType; // ivar: _accessNetworkType
@property (nonatomic) BOOL allowDynamicMaxBitrate; // ivar: _allowDynamicMaxBitrate
@property (nonatomic) BOOL allowsContentsChangeWithAspectPreservation; // ivar: _allowsContentsChangeWithAspectPreservation
@property (retain, nonatomic) VCMediaNegotiationBlobAudioSettings *audioSettings; // ivar: _audioSettings
@property (retain, nonatomic) NSMutableArray *bandwidthSettings; // ivar: _bandwidthSettings
@property (retain, nonatomic) NSString *basebandCodec; // ivar: _basebandCodec
@property (nonatomic) unsigned int basebandCodecSampleRate; // ivar: _basebandCodecSampleRate
@property (nonatomic) unsigned int blobVersion; // ivar: _blobVersion
@property (retain, nonatomic) VCMediaNegotiationBlobCaptionsSettings *captionsSettings; // ivar: _captionsSettings
@property (retain, nonatomic) VCMediaNegotiationFaceTimeSettings *faceTimeSettings; // ivar: _faceTimeSettings
@property (nonatomic) BOOL hasAccessNetworkType;
@property (nonatomic) BOOL hasAllowDynamicMaxBitrate;
@property (nonatomic) BOOL hasAllowsContentsChangeWithAspectPreservation;
@property (readonly, nonatomic) BOOL hasAudioSettings;
@property (readonly, nonatomic) BOOL hasBasebandCodec;
@property (nonatomic) BOOL hasBasebandCodecSampleRate;
@property (nonatomic) BOOL hasBlobVersion;
@property (readonly, nonatomic) BOOL hasCaptionsSettings;
@property (readonly, nonatomic) BOOL hasFaceTimeSettings;
@property (nonatomic) BOOL hasMediaControlInfoVersion;
@property (readonly, nonatomic) BOOL hasMomentsSettings;
@property (nonatomic) BOOL hasNtpTime;
@property (readonly, nonatomic) BOOL hasScreenSettings;
@property (readonly, nonatomic) BOOL hasUserAgent;
@property (readonly, nonatomic) BOOL hasVideoSettings;
@property (nonatomic) unsigned int mediaControlInfoVersion; // ivar: _mediaControlInfoVersion
@property (retain, nonatomic) VCMediaNegotiationBlobMomentsSettings *momentsSettings; // ivar: _momentsSettings
@property (retain, nonatomic) NSMutableArray *multiwayAudioStreams; // ivar: _multiwayAudioStreams
@property (retain, nonatomic) NSMutableArray *multiwayVideoStreams; // ivar: _multiwayVideoStreams
@property (nonatomic) NSUInteger ntpTime; // ivar: _ntpTime
@property (retain, nonatomic) VCMediaNegotiationBlobVideoSettings *screenSettings; // ivar: _screenSettings
@property (retain, nonatomic) NSString *userAgent; // ivar: _userAgent
@property (retain, nonatomic) VCMediaNegotiationBlobVideoSettings *videoSettings; // ivar: _videoSettings


+(Class)multiwayVideoStreamType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bandwidthSettingsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)multiwayAudioStreamsAtIndex:(NSUInteger)arg0 ;
-(id)multiwayVideoStreamAtIndex:(NSUInteger)arg0 ;
-(void)addBandwidthSettings:(id)arg0 ;
-(void)addMultiwayAudioStreams:(id)arg0 ;
-(void)addMultiwayVideoStream:(id)arg0 ;
-(void)clearBandwidthSettings;
-(void)clearMultiwayAudioStreams;
-(void)clearMultiwayVideoStreams;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)formatBandwidthConfig:(int)arg0 maxBanxwidth:(unsigned int)arg1 bandwidthString:(id)arg2 ;
-(void)mergeFrom:(id)arg0 ;
-(void)printBandwidthSettingsWithLogFile:(*void)arg0 ;
-(void)printCaptionsSettingsWithLogFile:(*void)arg0 ;
-(void)printMomentsSettingsWithLogFile:(*void)arg0 ;
-(void)printMultiwayAudioStreamsWithLogFile:(*void)arg0 ;
-(void)printMultiwayVideoStreamsWithLogFile:(*void)arg0 ;
-(void)printWithTitle:(id)arg0 blobSize:(unsigned int)arg1 logFile:(*void)arg2 ;
-(void)writeTo:(id)arg0 ;


@end


#endif