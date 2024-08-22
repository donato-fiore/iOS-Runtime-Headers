// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRAUDIOFORMATPROTOBUF_H
#define _MRAUDIOFORMATPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRAudioFormatProtobuf : PBCodable <NSCopying>

 {
    NSInteger _bitDepth;
    NSInteger _bitrate;
    NSInteger _sampleRate;
    NSString *_audioChannelLayoutDescription;
    unsigned int _channelLayout;
    unsigned int _codec;
    NSString *_groupID;
    NSString *_stableVariantID;
    int _tier;
    BOOL _multiChannel;
    BOOL _spatialized;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif