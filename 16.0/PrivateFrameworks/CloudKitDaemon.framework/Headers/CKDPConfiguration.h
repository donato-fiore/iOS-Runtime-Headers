// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPCONFIGURATION_H
#define CKDPCONFIGURATION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CKDPConfiguration : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger created; // ivar: _created
@property (nonatomic) NSUInteger expires; // ivar: _expires
@property (retain, nonatomic) NSMutableArray *fields; // ivar: _fields
@property (nonatomic) BOOL hasCreated;
@property (nonatomic) BOOL hasExpires;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fieldsAtIndex:(NSUInteger)arg0 ;
-(void)addFields:(id)arg0 ;
-(void)clearFields;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif