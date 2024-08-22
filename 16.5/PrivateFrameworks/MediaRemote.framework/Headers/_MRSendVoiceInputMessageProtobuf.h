// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRSENDVOICEINPUTMESSAGEPROTOBUF_H
#define _MRSENDVOICEINPUTMESSAGEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRAudioDataBlockProtobuf.h"

@interface _MRSendVoiceInputMessageProtobuf : PBCodable <NSCopying>



@property (retain, nonatomic) _MRAudioDataBlockProtobuf *dataBlock; // ivar: _dataBlock
@property (readonly, nonatomic) BOOL hasDataBlock;


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