// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRUPDATECONTENTITEMMESSAGEPROTOBUF_H
#define _MRUPDATECONTENTITEMMESSAGEPROTOBUF_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "_MRNowPlayingPlayerPathProtobuf.h"

@interface _MRUpdateContentItemMessageProtobuf : PBCodable <NSCopying>

 {
    NSMutableArray *_contentItems;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
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