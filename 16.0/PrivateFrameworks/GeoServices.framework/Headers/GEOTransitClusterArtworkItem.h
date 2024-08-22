// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTRANSITCLUSTERARTWORKITEM_H
#define GEOTRANSITCLUSTERARTWORKITEM_H

@class PBCodable, PBUnknownFields, NSString;
@protocol GEOTransitArtworkDataSource, GEOTransitTextDataSource, NSCopying, GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOServerFormattedString;


#import "GEOFormattedString.h"

@interface GEOTransitClusterArtworkItem : PBCodable <GEOTransitArtworkDataSource, GEOTransitTextDataSource, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_text;
    unsigned int _artworkIndex;
    ? _flags;
}


@property (readonly, nonatomic) NSString *accessibilityText;
@property (nonatomic) unsigned int artworkIndex;
@property (readonly, nonatomic) int artworkSourceType;
@property (readonly, nonatomic) int artworkUseType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasArtworkIndex;
@property (readonly, nonatomic) BOOL hasRoutingIncidentBadge;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<GEOTransitIconDataSource> *iconDataSource;
@property (readonly, nonatomic) NSObject<GEOTransitShieldDataSource> *iconFallbackShieldDataSource;
@property (readonly, nonatomic) NSObject<GEOTransitShieldDataSource> *shieldDataSource;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *text;
@property (retain, nonatomic) GEOFormattedString *text;
@property (readonly, nonatomic) NSObject<GEOTransitTextDataSource> *textDataSource;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
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