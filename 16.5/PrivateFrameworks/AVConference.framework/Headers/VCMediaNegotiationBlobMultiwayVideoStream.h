// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIANEGOTIATIONBLOBMULTIWAYVIDEOSTREAM_H
#define VCMEDIANEGOTIATIONBLOBMULTIWAYVIDEOSTREAM_H

@class PBCodable;
@protocol NSCopying;



@interface VCMediaNegotiationBlobMultiwayVideoStream : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int frameRate; // ivar: _frameRate
@property (nonatomic) BOOL hasMaxMediaBitrate;
@property (nonatomic) BOOL hasMaxNetworkBitrate;
@property (nonatomic) BOOL hasMaxPacketsPerSecond;
@property (nonatomic) BOOL hasMetadata;
@property (nonatomic) BOOL hasRepairedMaxNetworkBitrate;
@property (nonatomic) BOOL hasRepairedStreamID;
@property (readonly, nonatomic) BOOL isSubStream;
@property (nonatomic) unsigned int keyFrameInterval; // ivar: _keyFrameInterval
@property (nonatomic) unsigned int maxMediaBitrate; // ivar: _maxMediaBitrate
@property (nonatomic) unsigned int maxNetworkBitrate; // ivar: _maxNetworkBitrate
@property (nonatomic) unsigned int maxPacketsPerSecond; // ivar: _maxPacketsPerSecond
@property (nonatomic) unsigned int metadata; // ivar: _metadata
@property (nonatomic) unsigned int payload; // ivar: _payload
@property (nonatomic) unsigned int qualityIndex; // ivar: _qualityIndex
@property (nonatomic) unsigned int repairedMaxNetworkBitrate; // ivar: _repairedMaxNetworkBitrate
@property (nonatomic) unsigned int repairedStreamID; // ivar: _repairedStreamID
@property (nonatomic) unsigned int ssrc; // ivar: _ssrc
@property (nonatomic) unsigned int streamID; // ivar: _streamID
@property (nonatomic) unsigned int supportedVideoFormats; // ivar: _supportedVideoFormats


+(BOOL)convertVideoFormat:(int)arg0 width:(*int)arg1 height:(*int)arg2 ;
+(int)payloadForVideoPayload:(int)arg0 ;
+(int)videoFormatForWidth:(int)arg0 height:(int)arg1 ;
+(int)videoPayloadForPayload:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithStreamConfig:(id)arg0 ;
-(id)newMultiwayVideoStream;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)printWithLogFile:(*void)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif