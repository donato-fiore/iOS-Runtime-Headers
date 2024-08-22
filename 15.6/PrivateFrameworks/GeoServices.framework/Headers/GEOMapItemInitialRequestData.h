// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPITEMINITIALREQUESTDATA_H
#define GEOMAPITEMINITIALREQUESTDATA_H

@class PBCodable;
@protocol NSCopying;


#import "GEOPDPlaceRequestParameters.h"

@interface GEOMapItemInitialRequestData : PBCodable <NSCopying>

 {
    GEOPDPlaceRequestParameters *_placeRequestParameters;
    int _requestType;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasPlaceRequestParameters;
@property (nonatomic) BOOL hasRequestType;
@property (retain, nonatomic) GEOPDPlaceRequestParameters *placeRequestParameters;
@property (nonatomic) int requestType;


+(BOOL)isValid:(id)arg0 ;
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
-(id)requestTypeAsString:(int)arg0 ;
-(int)StringAsRequestType:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif