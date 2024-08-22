// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRTRANSACTIONMESSAGEPROTOBUF_H
#define _MRTRANSACTIONMESSAGEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRTransactionPacketsProtobuf.h"
#import "_MRNowPlayingPlayerPathProtobuf.h"

@interface _MRTransactionMessageProtobuf : PBCodable <NSCopying>

 {
    NSUInteger _name;
    _MRTransactionPacketsProtobuf *_packets;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
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