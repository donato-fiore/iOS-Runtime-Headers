// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDPLACESUMMARYLAYOUTUNITHOURS_H
#define GEOPDPLACESUMMARYLAYOUTUNITHOURS_H

@class PBCodable;
@protocol NSCopying;



@interface GEOPDPlaceSummaryLayoutUnitHours : PBCodable <NSCopying>

 {
    ? _allowedHoursStates;
    int _type;
    ? _flags;
}


@property (readonly, nonatomic) *int allowedHoursStates;
@property (readonly, nonatomic) NSUInteger allowedHoursStatesCount;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)allowedHoursStatesAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsAllowedHoursStates:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(int)allowedHoursStateAtIndex:(NSUInteger)arg0 ;
-(void)addAllowedHoursState:(int)arg0 ;
-(void)clearAllowedHoursStates;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif