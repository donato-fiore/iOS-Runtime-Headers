// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOCALIZATIONCAPABILITIES_H
#define GEOLOCALIZATIONCAPABILITIES_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOLocalizationCapabilities : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _supportedPhoneticTypes;
    BOOL _supportsLocalizedTrafficControlIcons;
    ? _flags;
}


@property (nonatomic) BOOL hasSupportsLocalizedTrafficControlIcons;
@property (readonly, nonatomic) *int supportedPhoneticTypes;
@property (readonly, nonatomic) NSUInteger supportedPhoneticTypesCount;
@property (nonatomic) BOOL supportsLocalizedTrafficControlIcons;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(id)supportedPhoneticTypesAsString:(int)arg0 ;
-(int)StringAsSupportedPhoneticTypes:(id)arg0 ;
-(int)supportedPhoneticTypeAtIndex:(NSUInteger)arg0 ;
-(void)addSupportedPhoneticType:(int)arg0 ;
-(void)clearSupportedPhoneticTypes;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif