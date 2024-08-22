// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOORIGINALWAYPOINTROUTE_H
#define GEOORIGINALWAYPOINTROUTE_H

@class PBCodable, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEOOriginalWaypointRoute : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_routeLegs;
    unsigned int _identifier;
    int _purpose;
    ? _flags;
}


@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasPurpose;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) int purpose;
@property (retain, nonatomic) NSMutableArray *routeLegs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)routeLegType;
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
-(id)purposeAsString:(int)arg0 ;
-(id)routeLegAtIndex:(NSUInteger)arg0 ;
-(int)StringAsPurpose:(id)arg0 ;
-(void)addRouteLeg:(id)arg0 ;
-(void)clearRouteLegs;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif