// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPPBCONTACTNAMERECORDCACHE_H
#define PPPBCONTACTNAMERECORDCACHE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface PPPBContactNameRecordCache : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger createdAt; // ivar: _createdAt
@property (nonatomic) BOOL hasCreatedAt;
@property (retain, nonatomic) NSMutableArray *records; // ivar: _records


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)recordsAtIndex:(NSUInteger)arg0 ;
-(void)addRecords:(id)arg0 ;
-(void)clearRecords;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif