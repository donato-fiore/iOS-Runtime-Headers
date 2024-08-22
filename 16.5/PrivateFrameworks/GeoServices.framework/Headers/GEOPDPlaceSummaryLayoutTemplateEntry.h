// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDPLACESUMMARYLAYOUTTEMPLATEENTRY_H
#define GEOPDPLACESUMMARYLAYOUTTEMPLATEENTRY_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;



@interface GEOPDPlaceSummaryLayoutTemplateEntry : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _trailingEntityTypeOrders;
    NSMutableArray *_lines;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _platformType;
    int _trailingEntityType;
    ? _flags;
}


@property (nonatomic) BOOL hasPlatformType;
@property (nonatomic) BOOL hasTrailingEntityType;
@property (retain, nonatomic) NSMutableArray *lines;
@property (nonatomic) int platformType;
@property (nonatomic) int trailingEntityType;
@property (readonly, nonatomic) *int trailingEntityTypeOrders;
@property (readonly, nonatomic) NSUInteger trailingEntityTypeOrdersCount;


+(BOOL)isValid:(id)arg0 ;
+(Class)lineType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)lineAtIndex:(NSUInteger)arg0 ;
-(id)platformTypeAsString:(int)arg0 ;
-(id)trailingEntityTypeAsString:(int)arg0 ;
-(id)trailingEntityTypeOrdersAsString:(int)arg0 ;
-(int)StringAsPlatformType:(id)arg0 ;
-(int)StringAsTrailingEntityType:(id)arg0 ;
-(int)StringAsTrailingEntityTypeOrders:(id)arg0 ;
-(int)trailingEntityTypeOrderAtIndex:(NSUInteger)arg0 ;
-(void)addLine:(id)arg0 ;
-(void)addTrailingEntityTypeOrder:(int)arg0 ;
-(void)clearLines;
-(void)clearTrailingEntityTypeOrders;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif