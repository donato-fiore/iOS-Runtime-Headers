// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLEOBJECTASSOCIATION_H
#define HDCODABLEOBJECTASSOCIATION_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface HDCodableObjectAssociation : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *associationUuid; // ivar: _associationUuid
@property (readonly, nonatomic) BOOL hasAssociationUuid;
@property (readonly, nonatomic) BOOL hasObjectUuids;
@property (retain, nonatomic) NSData *objectUuids; // ivar: _objectUuids


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodedAssociationUUID;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithAssociationUUID:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif