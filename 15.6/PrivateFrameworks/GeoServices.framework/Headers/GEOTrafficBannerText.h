// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTRAFFICBANNERTEXT_H
#define GEOTRAFFICBANNERTEXT_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOFormattedString.h"

@interface GEOTrafficBannerText : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_analyticsMessageValue;
    GEOFormattedString *_bannerDescription;
    NSString *_bannerId;
    GEOFormattedString *_bannerLargeText;
    GEOFormattedString *_bannerSmallText;
    NSMutableArray *_buttons;
    NSMutableArray *_localizedIncidentBanners;
    NSMutableArray *_localizedIncidentSpokenTexts;
    NSMutableArray *_localizedIncidentSubBanners;
    GEOFormattedString *_spokenPrompt;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _alertDurationSeconds;
    int _bannerStyle;
    int _defaultButtonIndex;
    unsigned int _hideAtDistance;
    unsigned int _incidentDistance;
    unsigned int _incidentIndex;
    int _previousBannerChange;
    unsigned int _secondsSaved;
    unsigned int _showAtDistance;
    unsigned int _zilchPathIndex;
    BOOL _disableFasterRerouteByDefault;
    BOOL _shouldShowTimer;
    ? _flags;
}


@property (nonatomic) unsigned int alertDurationSeconds;
@property (retain, nonatomic) NSString *analyticsMessageValue;
@property (retain, nonatomic) GEOFormattedString *bannerDescription;
@property (retain, nonatomic) NSString *bannerId;
@property (retain, nonatomic) GEOFormattedString *bannerLargeText;
@property (retain, nonatomic) GEOFormattedString *bannerSmallText;
@property (nonatomic) int bannerStyle;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (nonatomic) int defaultButtonIndex;
@property (nonatomic) BOOL disableFasterRerouteByDefault;
@property (nonatomic) BOOL hasAlertDurationSeconds;
@property (readonly, nonatomic) BOOL hasAnalyticsMessageValue;
@property (readonly, nonatomic) BOOL hasBannerDescription;
@property (readonly, nonatomic) BOOL hasBannerId;
@property (readonly, nonatomic) BOOL hasBannerLargeText;
@property (readonly, nonatomic) BOOL hasBannerSmallText;
@property (nonatomic) BOOL hasBannerStyle;
@property (nonatomic) BOOL hasDefaultButtonIndex;
@property (nonatomic) BOOL hasDisableFasterRerouteByDefault;
@property (nonatomic) BOOL hasHideAtDistance;
@property (nonatomic) BOOL hasIncidentDistance;
@property (nonatomic) BOOL hasIncidentIndex;
@property (nonatomic) BOOL hasPreviousBannerChange;
@property (nonatomic) BOOL hasSecondsSaved;
@property (nonatomic) BOOL hasShouldShowTimer;
@property (nonatomic) BOOL hasShowAtDistance;
@property (readonly, nonatomic) BOOL hasSpokenPrompt;
@property (nonatomic) BOOL hasZilchPathIndex;
@property (nonatomic) unsigned int hideAtDistance;
@property (nonatomic) unsigned int incidentDistance;
@property (nonatomic) unsigned int incidentIndex;
@property (retain, nonatomic) NSMutableArray *localizedIncidentBanners;
@property (retain, nonatomic) NSMutableArray *localizedIncidentSpokenTexts;
@property (retain, nonatomic) NSMutableArray *localizedIncidentSubBanners;
@property (nonatomic) int previousBannerChange;
@property (nonatomic) unsigned int secondsSaved;
@property (nonatomic) BOOL shouldShowTimer;
@property (nonatomic) unsigned int showAtDistance;
@property (retain, nonatomic) GEOFormattedString *spokenPrompt;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int zilchPathIndex;


+(BOOL)isValid:(id)arg0 ;
+(Class)buttonType;
+(Class)localizedIncidentBannerType;
+(Class)localizedIncidentSpokenTextType;
+(Class)localizedIncidentSubBannerType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bannerStyleAsString:(int)arg0 ;
-(id)buttonAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)localizedIncidentBannerAtIndex:(NSUInteger)arg0 ;
-(id)localizedIncidentSpokenTextAtIndex:(NSUInteger)arg0 ;
-(id)localizedIncidentSubBannerAtIndex:(NSUInteger)arg0 ;
-(id)previousBannerChangeAsString:(int)arg0 ;
-(int)StringAsBannerStyle:(id)arg0 ;
-(int)StringAsPreviousBannerChange:(id)arg0 ;
-(void)addButton:(id)arg0 ;
-(void)addLocalizedIncidentBanner:(id)arg0 ;
-(void)addLocalizedIncidentSpokenText:(id)arg0 ;
-(void)addLocalizedIncidentSubBanner:(id)arg0 ;
-(void)clearButtons;
-(void)clearLocalizedIncidentBanners;
-(void)clearLocalizedIncidentSpokenTexts;
-(void)clearLocalizedIncidentSubBanners;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif