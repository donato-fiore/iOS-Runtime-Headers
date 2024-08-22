// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSQRPROTOPUTMATERIALREQUEST_H
#define IDSQRPROTOPUTMATERIALREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface IDSQRProtoPutMaterialRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *materials; // ivar: _materials


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