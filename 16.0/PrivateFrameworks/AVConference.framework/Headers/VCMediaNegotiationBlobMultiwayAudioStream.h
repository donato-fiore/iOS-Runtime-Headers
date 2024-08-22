// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMEDIANEGOTIATIONBLOBMULTIWAYAUDIOSTREAM_H
#define VCMEDIANEGOTIATIONBLOBMULTIWAYAUDIOSTREAM_H

@class PBCodable;
@protocol NSCopying;



@interface VCMediaNegotiationBlobMultiwayAudioStream : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMaxMediaBitrate;
@property (nonatomic) BOOL hasMaxNetworkBitrate;
@property (nonatomic) BOOL hasMaxPacketsPerSecond;
@property (nonatomic) BOOL hasRepairedMaxNetworkBitrate;
@property (nonatomic) BOOL hasRepairedStreamID;
@property (nonatomic) BOOL hasSupportedPayloads;
@property (nonatomic) unsigned int maxMediaBitrate; // ivar: _maxMediaBitrate
@property (nonatomic) unsigned int maxNetworkBitrate; // ivar: _maxNetworkBitrate
@property (nonatomic) float maxPacketsPerSecond; // ivar: _maxPacketsPerSecond
@property (nonatomic) unsigned int qualityIndex; // ivar: _qualityIndex
@property (nonatomic) unsigned int repairedMaxNetworkBitrate; // ivar: _repairedMaxNetworkBitrate
@property (nonatomic) unsigned int repairedStreamID; // ivar: _repairedStreamID
@property (nonatomic) unsigned int ssrc; // ivar: _ssrc
@property (nonatomic) unsigned int streamID; // ivar: _streamID
@property (nonatomic) unsigned int supportedPayloads; // ivar: _supportedPayloads


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithStreamConfig:(id)arg0 ;
-(id)newMultiwayAudioStream;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)printWithLogFile:(*void)arg0 ;
-(void)setPayloadFlagsWithPayloads:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif