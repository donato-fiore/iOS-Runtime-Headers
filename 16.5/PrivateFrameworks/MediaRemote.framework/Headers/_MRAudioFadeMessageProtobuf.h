// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRAUDIOFADEMESSAGEPROTOBUF_H
#define _MRAUDIOFADEMESSAGEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRNowPlayingPlayerPathProtobuf.h"

@interface _MRAudioFadeMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int fadeType; // ivar: _fadeType
@property (nonatomic) BOOL hasFadeType;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // ivar: _playerPath


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fadeTypeAsString:(int)arg0 ;
-(int)StringAsFadeType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif