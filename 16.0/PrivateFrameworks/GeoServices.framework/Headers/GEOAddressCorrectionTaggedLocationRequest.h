// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOADDRESSCORRECTIONTAGGEDLOCATIONREQUEST_H
#define GEOADDRESSCORRECTIONTAGGEDLOCATIONREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface GEOAddressCorrectionTaggedLocationRequest : PBRequest <NSCopying>

 {
    NSMutableArray *_significantLocations;
}


@property (retain, nonatomic) NSMutableArray *significantLocations;


+(BOOL)isValid:(id)arg0 ;
+(Class)significantLocationType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)significantLocationAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addSignificantLocation:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearSignificantLocations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif