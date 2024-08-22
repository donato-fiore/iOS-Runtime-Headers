// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSQRPROTOMATERIAL_H
#define IDSQRPROTOMATERIAL_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface IDSQRProtoMaterial : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *materialInfos; // ivar: _materialInfos
@property (nonatomic) NSUInteger ownerParticipantId; // ivar: _ownerParticipantId
@property (nonatomic) NSUInteger receiverParticipantId; // ivar: _receiverParticipantId


+(Class)materialInfoType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)materialInfoAtIndex:(NSUInteger)arg0 ;
-(void)addMaterialInfo:(id)arg0 ;
-(void)clearMaterialInfos;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif