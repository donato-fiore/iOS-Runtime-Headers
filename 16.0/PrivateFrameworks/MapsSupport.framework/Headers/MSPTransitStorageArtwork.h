// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPTRANSITSTORAGEARTWORK_H
#define MSPTRANSITSTORAGEARTWORK_H

@class PBCodable, PBUnknownFields, NSString;
@protocol GEOTransitArtworkDataSource, NSCopying, GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOTransitTextDataSource;


#import "MSPTransitStorageIcon.h"
#import "MSPTransitStorageShield.h"

@interface MSPTransitStorageArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (readonly, nonatomic) NSString *accessibilityText;
@property (retain, nonatomic) NSString *accessibilityText; // ivar: _accessibilityText
@property (readonly, nonatomic) int artworkSourceType;
@property (nonatomic) int artworkSourceType; // ivar: _artworkSourceType
@property (readonly, nonatomic) int artworkUseType;
@property (nonatomic) int artworkUseType; // ivar: _artworkUseType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAccessibilityText;
@property (nonatomic) BOOL hasArtworkSourceType;
@property (nonatomic) BOOL hasArtworkUseType;
@property (nonatomic) BOOL hasHasRoutingIncidentBadge;
@property (readonly, nonatomic) BOOL hasIcon;
@property (readonly, nonatomic) BOOL hasIconFallbackShield;
@property (readonly, nonatomic) BOOL hasRoutingIncidentBadge;
@property (nonatomic) BOOL hasRoutingIncidentBadge; // ivar: _hasRoutingIncidentBadge
@property (readonly, nonatomic) BOOL hasShield;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MSPTransitStorageIcon *icon; // ivar: _icon
@property (readonly, nonatomic) NSObject<GEOTransitIconDataSource> *iconDataSource;
@property (retain, nonatomic) MSPTransitStorageShield *iconFallbackShield; // ivar: _iconFallbackShield
@property (readonly, nonatomic) NSObject<GEOTransitShieldDataSource> *iconFallbackShieldDataSource;
@property (retain, nonatomic) MSPTransitStorageShield *shield; // ivar: _shield
@property (readonly, nonatomic) NSObject<GEOTransitShieldDataSource> *shieldDataSource;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GEOTransitTextDataSource> *textDataSource;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)artworkSourceTypeAsString:(int)arg0 ;
-(id)artworkUseTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithArtwork:(id)arg0 ;
-(int)StringAsArtworkSourceType:(id)arg0 ;
-(int)StringAsArtworkUseType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif