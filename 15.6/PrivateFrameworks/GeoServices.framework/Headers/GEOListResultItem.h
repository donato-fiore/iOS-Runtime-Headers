// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLISTRESULTITEM_H
#define GEOLISTRESULTITEM_H

@class PBCodable;
@protocol NSCopying;



@interface GEOListResultItem : PBCodable <NSCopying>

 {
    NSUInteger _businessId;
    NSInteger _latency;
    int _resultType;
    int _tappedCount;
    BOOL _eventuallyVisible;
    BOOL _initiallyVisible;
    ? _flags;
}


@property (nonatomic) NSUInteger businessId;
@property (nonatomic) BOOL eventuallyVisible;
@property (nonatomic) BOOL hasBusinessId;
@property (nonatomic) BOOL hasEventuallyVisible;
@property (nonatomic) BOOL hasInitiallyVisible;
@property (nonatomic) BOOL hasLatency;
@property (nonatomic) BOOL hasResultType;
@property (nonatomic) BOOL hasTappedCount;
@property (nonatomic) BOOL initiallyVisible;
@property (nonatomic) NSInteger latency;
@property (nonatomic) int resultType;
@property (nonatomic) int tappedCount;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)resultTypeAsString:(int)arg0 ;
-(int)StringAsResultType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif