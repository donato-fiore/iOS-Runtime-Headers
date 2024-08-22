// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOALERTNONRECOMMENDEDROUTETEXT_H
#define GEOALERTNONRECOMMENDEDROUTETEXT_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPlaceFormattedString.h"
#import "GEOFormattedString.h"

@interface GEOAlertNonRecommendedRouteText : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPlaceFormattedString *_body;
    GEOFormattedString *_responseAlertPrimary;
    GEOFormattedString *_responseAlertSecondary;
    GEOPlaceFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOPlaceFormattedString *body;
@property (readonly, nonatomic) BOOL hasBody;
@property (readonly, nonatomic) BOOL hasResponseAlertPrimary;
@property (readonly, nonatomic) BOOL hasResponseAlertSecondary;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) GEOFormattedString *responseAlertPrimary;
@property (retain, nonatomic) GEOFormattedString *responseAlertSecondary;
@property (retain, nonatomic) GEOPlaceFormattedString *title;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif