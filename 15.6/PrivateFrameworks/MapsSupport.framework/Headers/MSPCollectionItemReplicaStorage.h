// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPCOLLECTIONITEMREPLICASTORAGE_H
#define MSPCOLLECTIONITEMREPLICASTORAGE_H

@class PBCodable, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;



@interface MSPCollectionItemReplicaStorage : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
}


@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (retain, nonatomic) NSMutableArray *records; // ivar: _records
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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