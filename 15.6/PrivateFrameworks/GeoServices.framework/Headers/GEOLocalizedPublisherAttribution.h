// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOCALIZEDPUBLISHERATTRIBUTION_H
#define GEOLOCALIZEDPUBLISHERATTRIBUTION_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;



@interface GEOLocalizedPublisherAttribution : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_displayName;
    NSString *_language;
    NSString *_subtitle;
    NSString *_themeColorDarkMode;
    NSString *_themeColorLightMode;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _iconIdentifier;
    unsigned int _logoCenteredColorizedIdentifier;
    unsigned int _logoCenteredIdentifier;
    unsigned int _logoIdentifier;
    unsigned int _logoWithoutPaddingIdentifier;
    ? _flags;
}


@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (nonatomic) BOOL hasIconIdentifier;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (nonatomic) BOOL hasLogoCenteredColorizedIdentifier;
@property (nonatomic) BOOL hasLogoCenteredIdentifier;
@property (nonatomic) BOOL hasLogoIdentifier;
@property (nonatomic) BOOL hasLogoWithoutPaddingIdentifier;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasThemeColorDarkMode;
@property (readonly, nonatomic) BOOL hasThemeColorLightMode;
@property (nonatomic) unsigned int iconIdentifier;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) unsigned int logoCenteredColorizedIdentifier;
@property (nonatomic) unsigned int logoCenteredIdentifier;
@property (nonatomic) unsigned int logoIdentifier;
@property (nonatomic) unsigned int logoWithoutPaddingIdentifier;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *themeColorDarkMode;
@property (retain, nonatomic) NSString *themeColorLightMode;


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
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif