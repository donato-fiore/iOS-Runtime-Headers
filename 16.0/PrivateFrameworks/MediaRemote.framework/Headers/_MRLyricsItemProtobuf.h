// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRLYRICSITEMPROTOBUF_H
#define _MRLYRICSITEMPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "_MRLyricsTokenProtobuf.h"

@interface _MRLyricsItemProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasLyrics;
@property (readonly, nonatomic) BOOL hasToken;
@property (nonatomic) BOOL hasUserProvided;
@property (retain, nonatomic) NSString *lyrics; // ivar: _lyrics
@property (retain, nonatomic) _MRLyricsTokenProtobuf *token; // ivar: _token
@property (nonatomic) BOOL userProvided; // ivar: _userProvided


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif