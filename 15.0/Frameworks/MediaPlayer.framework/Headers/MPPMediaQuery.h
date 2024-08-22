// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPPMEDIAQUERY_H
#define MPPMEDIAQUERY_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface MPPMediaQuery : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int entityOrder; // ivar: _entityOrder
@property (retain, nonatomic) NSMutableArray *filterPredicates; // ivar: _filterPredicates
@property (nonatomic) BOOL filteringDisabled; // ivar: _filteringDisabled
@property (nonatomic) int groupingType; // ivar: _groupingType
@property (nonatomic) BOOL hasEntityOrder;
@property (nonatomic) BOOL hasFilteringDisabled;
@property (nonatomic) BOOL hasGroupingType;
@property (nonatomic) BOOL hasIncludeNonLibraryEntities;
@property (nonatomic) BOOL hasStaticEntityType;
@property (nonatomic) BOOL includeNonLibraryEntities; // ivar: _includeNonLibraryEntities
@property (retain, nonatomic) NSMutableArray *staticEntityIdentifiers; // ivar: _staticEntityIdentifiers
@property (nonatomic) int staticEntityType; // ivar: _staticEntityType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)entityOrderAsString:(int)arg0 ;
-(id)filterPredicatesAtIndex:(NSUInteger)arg0 ;
-(id)groupingTypeAsString:(int)arg0 ;
-(id)staticEntityIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)staticEntityTypeAsString:(int)arg0 ;
-(int)StringAsEntityOrder:(id)arg0 ;
-(int)StringAsGroupingType:(id)arg0 ;
-(int)StringAsStaticEntityType:(id)arg0 ;
-(void)addFilterPredicates:(id)arg0 ;
-(void)addStaticEntityIdentifiers:(id)arg0 ;
-(void)clearFilterPredicates;
-(void)clearStaticEntityIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif