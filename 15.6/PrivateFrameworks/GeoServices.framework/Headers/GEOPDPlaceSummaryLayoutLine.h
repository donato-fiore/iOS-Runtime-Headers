// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDPLACESUMMARYLAYOUTLINE_H
#define GEOPDPLACESUMMARYLAYOUTLINE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOPDPlaceSummaryLayoutLine : PBCodable <NSCopying>

 {
    NSMutableArray *_units;
    BOOL _isDynamicContextLine;
    BOOL _shouldOmitSpacingDelimiter;
    ? _flags;
}


@property (nonatomic) BOOL hasIsDynamicContextLine;
@property (nonatomic) BOOL hasShouldOmitSpacingDelimiter;
@property (nonatomic) BOOL isDynamicContextLine;
@property (nonatomic) BOOL shouldOmitSpacingDelimiter;
@property (retain, nonatomic) NSMutableArray *units;


+(BOOL)isValid:(id)arg0 ;
+(Class)unitType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)unitAtIndex:(NSUInteger)arg0 ;
-(void)addUnit:(id)arg0 ;
-(void)clearUnits;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif