// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRTRANSACTIONMESSAGEPROTOBUF_H
#define _MRTRANSACTIONMESSAGEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRTransactionPacketsProtobuf.h"
#import "_MRNowPlayingPlayerPathProtobuf.h"

@interface _MRTransactionMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasPackets;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (nonatomic) NSUInteger name; // ivar: _name
@property (retain, nonatomic) _MRTransactionPacketsProtobuf *packets; // ivar: _packets
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