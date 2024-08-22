// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ETPVIDEO_H
#define ETPVIDEO_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface ETPVideo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasIntroMessageData;
@property (nonatomic) BOOL hasMediaType;
@property (readonly, nonatomic) BOOL hasPlayingMessagesData;
@property (retain, nonatomic) NSData *introMessageData; // ivar: _introMessageData
@property (nonatomic) int mediaType; // ivar: _mediaType
@property (retain, nonatomic) NSData *playingMessagesData; // ivar: _playingMessagesData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)mediaTypeAsString:(int)arg0 ;
-(int)StringAsMediaType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif