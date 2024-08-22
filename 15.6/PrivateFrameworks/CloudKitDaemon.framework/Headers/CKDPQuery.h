// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPQUERY_H
#define CKDPQUERY_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CKDPQuery : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL distinct; // ivar: _distinct
@property (retain, nonatomic) NSMutableArray *filters; // ivar: _filters
@property (nonatomic) BOOL hasDistinct;
@property (nonatomic) BOOL hasQueryOperator;
@property (nonatomic) int queryOperator; // ivar: _queryOperator
@property (retain, nonatomic) NSMutableArray *sorts; // ivar: _sorts
@property (retain, nonatomic) NSMutableArray *types; // ivar: _types


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)filtersAtIndex:(NSUInteger)arg0 ;
-(id)queryOperatorAsString:(int)arg0 ;
-(id)sortsAtIndex:(NSUInteger)arg0 ;
-(id)typesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsQueryOperator:(id)arg0 ;
-(void)addFilters:(id)arg0 ;
-(void)addSorts:(id)arg0 ;
-(void)addTypes:(id)arg0 ;
-(void)clearFilters;
-(void)clearSorts;
-(void)clearTypes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif