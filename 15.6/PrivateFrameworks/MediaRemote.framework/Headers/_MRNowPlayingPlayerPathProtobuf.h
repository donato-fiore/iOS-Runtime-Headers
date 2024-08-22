// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRNOWPLAYINGPLAYERPATHPROTOBUF_H
#define _MRNOWPLAYINGPLAYERPATHPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRNowPlayingClientProtobuf.h"
#import "_MROriginProtobuf.h"
#import "_MRNowPlayingPlayerProtobuf.h"

@interface _MRNowPlayingPlayerPathProtobuf : PBCodable <NSCopying>



@property (retain, nonatomic) _MRNowPlayingClientProtobuf *client; // ivar: _client
@property (readonly, nonatomic) BOOL hasClient;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (readonly, nonatomic) BOOL hasPlayer;
@property (retain, nonatomic) _MROriginProtobuf *origin; // ivar: _origin
@property (retain, nonatomic) _MRNowPlayingPlayerProtobuf *player; // ivar: _player


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