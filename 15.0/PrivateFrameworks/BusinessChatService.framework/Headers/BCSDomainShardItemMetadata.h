// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSDOMAINSHARDITEMMETADATA_H
#define BCSDOMAINSHARDITEMMETADATA_H

@class PBCodable;
@protocol NSCopying;



@interface BCSDomainShardItemMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger count; // ivar: _count
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) BOOL hasTtl;
@property (nonatomic) NSInteger index; // ivar: _index
@property (nonatomic) NSInteger ttl; // ivar: _ttl


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif