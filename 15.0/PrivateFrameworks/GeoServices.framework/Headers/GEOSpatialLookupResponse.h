// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSPATIALLOOKUPRESPONSE_H
#define GEOSPATIALLOOKUPRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOSpatialLookupResponse : PBCodable <NSCopying>

 {
    NSMutableArray *_places;
    int _statusCode;
    ? _flags;
}


@property (nonatomic) BOOL hasStatusCode;
@property (retain, nonatomic) NSMutableArray *places;
@property (nonatomic) int statusCode;


+(BOOL)isValid:(id)arg0 ;
+(Class)placeType;
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
-(id)placeAtIndex:(NSUInteger)arg0 ;
-(id)statusCodeAsString:(int)arg0 ;
-(int)StringAsStatusCode:(id)arg0 ;
-(void)addPlace:(id)arg0 ;
-(void)clearPlaces;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif