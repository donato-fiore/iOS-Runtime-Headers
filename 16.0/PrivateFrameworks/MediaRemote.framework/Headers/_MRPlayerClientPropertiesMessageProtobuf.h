// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRPLAYERCLIENTPROPERTIESMESSAGEPROTOBUF_H
#define _MRPLAYERCLIENTPROPERTIESMESSAGEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRNowPlayingPlayerPathProtobuf.h"

@interface _MRPlayerClientPropertiesMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLastPlayingTimestamp;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (nonatomic) CGFloat lastPlayingTimestamp; // ivar: _lastPlayingTimestamp
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // ivar: _playerPath


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