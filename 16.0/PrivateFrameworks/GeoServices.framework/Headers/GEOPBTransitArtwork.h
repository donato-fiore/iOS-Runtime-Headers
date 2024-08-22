// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPBTRANSITARTWORK_H
#define GEOPBTRANSITARTWORK_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol GEOTransitArtworkDataSource, NSCopying, GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOTransitTextDataSource;


#import "GEOPBTransitShield.h"
#import "GEOPBTransitIcon.h"

@interface GEOPBTransitArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_accessibilityString;
    GEOPBTransitShield *_iconFallbackShield;
    GEOPBTransitIcon *_icon;
    GEOPBTransitShield *_shield;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _artworkType;
    int _artworkUse;
    int _badge;
    ? _flags;
}


@property (retain, nonatomic) NSString *accessibilityString;
@property (readonly, nonatomic) NSString *accessibilityText;
@property (readonly, nonatomic) int artworkSourceType;
@property (nonatomic) int artworkType;
@property (nonatomic) int artworkUse;
@property (readonly, nonatomic) int artworkUseType;
@property (nonatomic) int badge;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAccessibilityString;
@property (nonatomic) BOOL hasArtworkType;
@property (nonatomic) BOOL hasArtworkUse;
@property (nonatomic) BOOL hasBadge;
@property (readonly, nonatomic) BOOL hasIcon;
@property (readonly, nonatomic) BOOL hasIconFallbackShield;
@property (readonly, nonatomic) BOOL hasRoutingIncidentBadge;
@property (readonly, nonatomic) BOOL hasShield;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOPBTransitIcon *icon;
@property (readonly, nonatomic) NSObject<GEOTransitIconDataSource> *iconDataSource;
@property (retain, nonatomic) GEOPBTransitShield *iconFallbackShield;
@property (readonly, nonatomic) NSObject<GEOTransitShieldDataSource> *iconFallbackShieldDataSource;
@property (retain, nonatomic) GEOPBTransitShield *shield;
@property (readonly, nonatomic) NSObject<GEOTransitShieldDataSource> *shieldDataSource;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GEOTransitTextDataSource> *textDataSource;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)artworkTypeAsString:(int)arg0 ;
-(id)artworkUseAsString:(int)arg0 ;
-(id)badgeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsArtworkType:(id)arg0 ;
-(int)StringAsArtworkUse:(id)arg0 ;
-(int)StringAsBadge:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif