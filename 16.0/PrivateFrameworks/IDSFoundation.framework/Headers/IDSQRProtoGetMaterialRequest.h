// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSQRPROTOGETMATERIALREQUEST_H
#define IDSQRPROTOGETMATERIALREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface IDSQRProtoGetMaterialRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *materialOwners; // ivar: _materialOwners


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)materialOwnersAtIndex:(NSUInteger)arg0 ;
-(void)addMaterialOwners:(id)arg0 ;
-(void)clearMaterialOwners;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif