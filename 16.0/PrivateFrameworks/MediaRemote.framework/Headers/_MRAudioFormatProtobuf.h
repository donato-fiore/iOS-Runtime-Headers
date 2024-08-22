// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRAUDIOFORMATPROTOBUF_H
#define _MRAUDIOFORMATPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRAudioFormatProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *audioChannelLayoutDescription; // ivar: _audioChannelLayoutDescription
@property (nonatomic) NSInteger bitDepth; // ivar: _bitDepth
@property (nonatomic) NSInteger bitrate; // ivar: _bitrate
@property (nonatomic) unsigned int channelLayout; // ivar: _channelLayout
@property (nonatomic) unsigned int codec; // ivar: _codec
@property (retain, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic) BOOL hasAudioChannelLayoutDescription;
@property (nonatomic) BOOL hasBitDepth;
@property (nonatomic) BOOL hasBitrate;
@property (nonatomic) BOOL hasChannelLayout;
@property (nonatomic) BOOL hasCodec;
@property (readonly, nonatomic) BOOL hasGroupID;
@property (nonatomic) BOOL hasMultiChannel;
@property (nonatomic) BOOL hasSampleRate;
@property (nonatomic) BOOL hasSpatialized;
@property (readonly, nonatomic) BOOL hasStableVariantID;
@property (nonatomic) BOOL hasTier;
@property (nonatomic) BOOL multiChannel; // ivar: _multiChannel
@property (nonatomic) NSInteger sampleRate; // ivar: _sampleRate
@property (nonatomic) BOOL spatialized; // ivar: _spatialized
@property (retain, nonatomic) NSString *stableVariantID; // ivar: _stableVariantID
@property (nonatomic) int tier; // ivar: _tier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)tierAsString:(int)arg0 ;
-(int)StringAsTier:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif