// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSQRPROTOPUTMATERIALINDICATION_H
#define IDSQRPROTOPUTMATERIALINDICATION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "IDSQRProtoPutMaterialErrorIndication.h"

@interface IDSQRProtoPutMaterialIndication : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMissingMaterial;
@property (nonatomic) BOOL hasTxnId;
@property (retain, nonatomic) NSMutableArray *materials; // ivar: _materials
@property (retain, nonatomic) IDSQRProtoPutMaterialErrorIndication *missingMaterial; // ivar: _missingMaterial
@property (nonatomic) NSUInteger txnId; // ivar: _txnId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)materialsAtIndex:(NSUInteger)arg0 ;
-(void)addMaterials:(id)arg0 ;
-(void)clearMaterials;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif