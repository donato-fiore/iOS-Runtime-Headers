// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOPHOTOSFORFAMILYMEMBERSWITHDSIDSRESPONSE_H
#define NPKPROTOPHOTOSFORFAMILYMEMBERSWITHDSIDSRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoPhotosForFamilyMembersWithDSIDsResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *familyPhotos; // ivar: _familyPhotos
@property (retain, nonatomic) NSMutableArray *familyPhotosIDs; // ivar: _familyPhotosIDs
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success; // ivar: _success


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)familyPhotosAtIndex:(NSUInteger)arg0 ;
-(id)familyPhotosIDsAtIndex:(NSUInteger)arg0 ;
-(void)addFamilyPhotos:(id)arg0 ;
-(void)addFamilyPhotosIDs:(id)arg0 ;
-(void)clearFamilyPhotos;
-(void)clearFamilyPhotosIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif