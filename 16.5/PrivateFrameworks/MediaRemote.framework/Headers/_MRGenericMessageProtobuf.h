// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRGENERICMESSAGEPROTOBUF_H
#define _MRGENERICMESSAGEPROTOBUF_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface _MRGenericMessageProtobuf : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) BOOL hasData;
@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key; // ivar: _key


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