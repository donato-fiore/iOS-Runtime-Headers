// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEONAVVOICEGUIDANCESETTINGS_H
#define GEONAVVOICEGUIDANCESETTINGS_H

@class PBCodable;
@protocol NSCopying;



@interface GEONavVoiceGuidanceSettings : PBCodable <NSCopying>

 {
    int _navVoiceGuidanceLevel;
    int _transportMode;
    ? _flags;
}


@property (nonatomic) BOOL hasNavVoiceGuidanceLevel;
@property (nonatomic) BOOL hasTransportMode;
@property (nonatomic) int navVoiceGuidanceLevel;
@property (nonatomic) int transportMode;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)navVoiceGuidanceLevelAsString:(int)arg0 ;
-(id)transportModeAsString:(int)arg0 ;
-(int)StringAsNavVoiceGuidanceLevel:(id)arg0 ;
-(int)StringAsTransportMode:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif