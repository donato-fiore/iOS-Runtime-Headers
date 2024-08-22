// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOGMSGSTATEMAPUISHOWN_H
#define GEOLOGMSGSTATEMAPUISHOWN_H

@class PBCodable;
@protocol NSCopying;



@interface GEOLogMsgStateMapUIShown : PBCodable <NSCopying>

 {
    int _activeNavMode;
    BOOL _isAirQualityShown;
    BOOL _isLookAroundEntryIconShown;
    BOOL _isVenueExperienceShown;
    BOOL _isWeatherShown;
    ? _flags;
}


@property (nonatomic) int activeNavMode;
@property (nonatomic) BOOL hasActiveNavMode;
@property (nonatomic) BOOL hasIsAirQualityShown;
@property (nonatomic) BOOL hasIsLookAroundEntryIconShown;
@property (nonatomic) BOOL hasIsVenueExperienceShown;
@property (nonatomic) BOOL hasIsWeatherShown;
@property (nonatomic) BOOL isAirQualityShown;
@property (nonatomic) BOOL isLookAroundEntryIconShown;
@property (nonatomic) BOOL isVenueExperienceShown;
@property (nonatomic) BOOL isWeatherShown;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activeNavModeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsActiveNavMode:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif