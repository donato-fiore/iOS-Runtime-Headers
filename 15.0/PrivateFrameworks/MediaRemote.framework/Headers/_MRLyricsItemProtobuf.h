// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRLYRICSITEMPROTOBUF_H
#define _MRLYRICSITEMPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "_MRLyricsTokenProtobuf.h"

@interface _MRLyricsItemProtobuf : PBCodable <NSCopying>

 {
    NSString *_lyrics;
    _MRLyricsTokenProtobuf *_token;
    BOOL _userProvided;
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