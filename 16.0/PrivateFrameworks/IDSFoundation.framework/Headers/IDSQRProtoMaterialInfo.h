// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSQRPROTOMATERIALINFO_H
#define IDSQRPROTOMATERIALINFO_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface IDSQRProtoMaterialInfo : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *materialContent; // ivar: _materialContent
@property (retain, nonatomic) NSData *materialId; // ivar: _materialId
@property (nonatomic) int materialType; // ivar: _materialType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)materialTypeAsString:(int)arg0 ;
-(int)StringAsMaterialType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif