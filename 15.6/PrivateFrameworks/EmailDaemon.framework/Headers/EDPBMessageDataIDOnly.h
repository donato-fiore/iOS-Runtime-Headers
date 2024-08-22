// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPBMESSAGEDATAIDONLY_H
#define EDPBMESSAGEDATAIDONLY_H

@class PBCodable;
@protocol NSCopying;



@interface EDPBMessageDataIDOnly : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) NSInteger messageId; // ivar: _messageId


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