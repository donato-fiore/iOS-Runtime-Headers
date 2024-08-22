// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOGMSGEVENTPERIODICSETTINGSSUMMARY_H
#define GEOLOGMSGEVENTPERIODICSETTINGSSUMMARY_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEOLogMsgStateAccount.h"
#import "GEOLogMsgStateDeviceConnection.h"
#import "GEOLogMsgStateMapSettings.h"
#import "GEOLogMsgStateMapUIShown.h"
#import "GEOLogMsgStateMapsFeatures.h"
#import "GEOLogMsgStateMapsUserSettings.h"
#import "GEOLogMsgStateRoutingSettings.h"

@interface GEOLogMsgEventPeriodicSettingsSummary : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOLogMsgStateAccount *_account;
    GEOLogMsgStateDeviceConnection *_deviceConnection;
    GEOLogMsgStateMapSettings *_mapSettings;
    GEOLogMsgStateMapUIShown *_mapUiShown;
    GEOLogMsgStateMapsFeatures *_mapsFeatures;
    GEOLogMsgStateMapsUserSettings *_mapsUserSettings;
    GEOLogMsgStateRoutingSettings *_routingSettings;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _electricVehicleCount;
    unsigned int _favoritesCount;
    unsigned int _licensePlateCount;
    unsigned int _personalCollectionsCount;
    BOOL _homeFavoriteSet;
    BOOL _learnFromAppEnabled;
    BOOL _notificationsEnabled;
    BOOL _siriSuggestionsEnabled;
    BOOL _workFavoriteSet;
    ? _flags;
}


@property (retain, nonatomic) GEOLogMsgStateAccount *account;
@property (retain, nonatomic) GEOLogMsgStateDeviceConnection *deviceConnection;
@property (nonatomic) unsigned int electricVehicleCount;
@property (nonatomic) unsigned int favoritesCount;
@property (readonly, nonatomic) BOOL hasAccount;
@property (readonly, nonatomic) BOOL hasDeviceConnection;
@property (nonatomic) BOOL hasElectricVehicleCount;
@property (nonatomic) BOOL hasFavoritesCount;
@property (nonatomic) BOOL hasHomeFavoriteSet;
@property (nonatomic) BOOL hasLearnFromAppEnabled;
@property (nonatomic) BOOL hasLicensePlateCount;
@property (readonly, nonatomic) BOOL hasMapSettings;
@property (readonly, nonatomic) BOOL hasMapUiShown;
@property (readonly, nonatomic) BOOL hasMapsFeatures;
@property (readonly, nonatomic) BOOL hasMapsUserSettings;
@property (nonatomic) BOOL hasNotificationsEnabled;
@property (nonatomic) BOOL hasPersonalCollectionsCount;
@property (readonly, nonatomic) BOOL hasRoutingSettings;
@property (nonatomic) BOOL hasSiriSuggestionsEnabled;
@property (nonatomic) BOOL hasWorkFavoriteSet;
@property (nonatomic) BOOL homeFavoriteSet;
@property (nonatomic) BOOL learnFromAppEnabled;
@property (nonatomic) unsigned int licensePlateCount;
@property (retain, nonatomic) GEOLogMsgStateMapSettings *mapSettings;
@property (retain, nonatomic) GEOLogMsgStateMapUIShown *mapUiShown;
@property (retain, nonatomic) GEOLogMsgStateMapsFeatures *mapsFeatures;
@property (retain, nonatomic) GEOLogMsgStateMapsUserSettings *mapsUserSettings;
@property (nonatomic) BOOL notificationsEnabled;
@property (nonatomic) unsigned int personalCollectionsCount;
@property (retain, nonatomic) GEOLogMsgStateRoutingSettings *routingSettings;
@property (nonatomic) BOOL siriSuggestionsEnabled;
@property (nonatomic) BOOL workFavoriteSet;


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