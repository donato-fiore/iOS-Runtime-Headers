// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRUPDATECONTENTITEMMESSAGEPROTOBUF_H
#define _MRUPDATECONTENTITEMMESSAGEPROTOBUF_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "_MRNowPlayingPlayerPathProtobuf.h"

@interface _MRUpdateContentItemMessageProtobuf : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *contentItems; // ivar: _contentItems
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // ivar: _playerPath


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentItemsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addContentItems:(id)arg0 ;
-(void)clearContentItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif