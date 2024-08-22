// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKPROTOFACEPIGMENTSET_H
#define NTKPROTOFACEPIGMENTSET_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface NTKProtoFacePigmentSet : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *collectionBySlots; // ivar: _collectionBySlots
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) BOOL hasDomain;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)collectionBySlotsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCollectionBySlots:(id)arg0 ;
-(void)clearCollectionBySlots;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif