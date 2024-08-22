// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOGMSGSTATE_H
#define GEOLOGMSGSTATE_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOLogMsgStateAccount.h"
#import "GEOLogMsgStateApplicationIdentifier.h"
#import "GEOLogMsgStateCarPlay.h"
#import "GEOLogMsgStateCuratedCollection.h"
#import "GEOLogMsgStateDetailLookAroundLog.h"
#import "GEOLogMsgStateDeviceBase.h"
#import "GEOLogMsgStateDeviceConnection.h"
#import "GEOLogMsgStateDeviceIdentifier.h"
#import "GEOLogMsgStateDeviceLocale.h"
#import "GEOLogMsgStateDeviceSettings.h"
#import "GEOLogMsgStateDirectionsDetail.h"
#import "GEOLogMsgStateExperiments.h"
#import "GEOLogMsgStateExtension.h"
#import "GEOLogMsgStateLookAroundView.h"
#import "GEOLogMsgStateMapLaunch.h"
#import "GEOLogMsgStateMapRestore.h"
#import "GEOLogMsgStateMapSettings.h"
#import "GEOLogMsgStateMapUIShown.h"
#import "GEOLogMsgStateMapUI.h"
#import "GEOLogMsgStateMapViewLocation.h"
#import "GEOLogMsgStateMapView.h"
#import "GEOLogMsgStateMapsFeatures.h"
#import "GEOLogMsgStateMapsServer.h"
#import "GEOLogMsgStateMapsUserSettings.h"
#import "GEOLogMsgStateMarket.h"
#import "GEOLogMsgStateMuninResource.h"
#import "GEOLogMsgStateNavigation.h"
#import "GEOLogMsgStateNearbyTransit.h"
#import "GEOLogMsgStatePairedDevice.h"
#import "GEOLogMsgStatePlaceCard.h"
#import "GEOLogMsgStatePlaceRequest.h"
#import "GEOLogMsgStatePlaceSummaryLayout.h"
#import "GEOLogMsgStateRAP.h"
#import "GEOLogMsgStateRoute.h"
#import "GEOLogMsgStateRoutingSettings.h"
#import "GEOLogMsgStateSuggestions.h"
#import "GEOLogMsgStateSummaryLookAroundLog.h"
#import "GEOLogMsgStateTileSet.h"
#import "GEOLogMsgStateTransitStep.h"
#import "GEOLogMsgStateTransit.h"
#import "GEOLogMsgStateUGCPhoto.h"
#import "GEOLogMsgStateUserSession.h"
#import "GEOLogMsgStateUser.h"

@interface GEOLogMsgState : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOLogMsgStateAccount *_account;
    GEOLogMsgStateApplicationIdentifier *_applicationIdentifier;
    GEOLogMsgStateCarPlay *_carPlay;
    GEOLogMsgStateCuratedCollection *_curatedCollection;
    GEOLogMsgStateDetailLookAroundLog *_detailLookAroundLog;
    GEOLogMsgStateDeviceBase *_deviceBase;
    GEOLogMsgStateDeviceConnection *_deviceConnection;
    GEOLogMsgStateDeviceIdentifier *_deviceIdentifier;
    GEOLogMsgStateDeviceLocale *_deviceLocale;
    GEOLogMsgStateDeviceSettings *_deviceSettings;
    GEOLogMsgStateDirectionsDetail *_directionsDetail;
    GEOLogMsgStateExperiments *_experiments;
    GEOLogMsgStateExtension *_extension;
    GEOLogMsgStateLookAroundView *_lookAroundView;
    GEOLogMsgStateMapLaunch *_mapLaunch;
    GEOLogMsgStateMapRestore *_mapRestore;
    GEOLogMsgStateMapSettings *_mapSettings;
    GEOLogMsgStateMapUIShown *_mapUiShown;
    GEOLogMsgStateMapUI *_mapUi;
    GEOLogMsgStateMapViewLocation *_mapViewLocation;
    GEOLogMsgStateMapView *_mapView;
    GEOLogMsgStateMapsFeatures *_mapsFeatures;
    GEOLogMsgStateMapsServer *_mapsServer;
    GEOLogMsgStateMapsUserSettings *_mapsUserSettings;
    GEOLogMsgStateMarket *_market;
    GEOLogMsgStateMuninResource *_muninResource;
    GEOLogMsgStateNavigation *_navigation;
    GEOLogMsgStateNearbyTransit *_nearbyTransit;
    GEOLogMsgStatePairedDevice *_pairedDevice;
    GEOLogMsgStatePlaceCard *_placeCard;
    GEOLogMsgStatePlaceRequest *_placeRequest;
    GEOLogMsgStatePlaceSummaryLayout *_placeSummaryLayout;
    GEOLogMsgStateRAP *_rap;
    GEOLogMsgStateRoute *_route;
    GEOLogMsgStateRoutingSettings *_routingSettings;
    NSString *_stateOrigin;
    GEOLogMsgStateSuggestions *_suggestions;
    GEOLogMsgStateSummaryLookAroundLog *_summaryLookAroundLog;
    GEOLogMsgStateTileSet *_tileSet;
    GEOLogMsgStateTransitStep *_transitStep;
    GEOLogMsgStateTransit *_transit;
    GEOLogMsgStateUGCPhoto *_ugcPhoto;
    GEOLogMsgStateUserSession *_userSession;
    GEOLogMsgStateUser *_user;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _stateType;
    ? _flags;
}


@property (retain, nonatomic) GEOLogMsgStateAccount *account;
@property (retain, nonatomic) GEOLogMsgStateApplicationIdentifier *applicationIdentifier;
@property (retain, nonatomic) GEOLogMsgStateCarPlay *carPlay;
@property (retain, nonatomic) GEOLogMsgStateCuratedCollection *curatedCollection;
@property (retain, nonatomic) GEOLogMsgStateDetailLookAroundLog *detailLookAroundLog;
@property (retain, nonatomic) GEOLogMsgStateDeviceBase *deviceBase;
@property (retain, nonatomic) GEOLogMsgStateDeviceConnection *deviceConnection;
@property (retain, nonatomic) GEOLogMsgStateDeviceIdentifier *deviceIdentifier;
@property (retain, nonatomic) GEOLogMsgStateDeviceLocale *deviceLocale;
@property (retain, nonatomic) GEOLogMsgStateDeviceSettings *deviceSettings;
@property (retain, nonatomic) GEOLogMsgStateDirectionsDetail *directionsDetail;
@property (retain, nonatomic) GEOLogMsgStateExperiments *experiments;
@property (retain, nonatomic) GEOLogMsgStateExtension *extension;
@property (readonly, nonatomic) BOOL hasAccount;
@property (readonly, nonatomic) BOOL hasApplicationIdentifier;
@property (readonly, nonatomic) BOOL hasCarPlay;
@property (readonly, nonatomic) BOOL hasCuratedCollection;
@property (readonly, nonatomic) BOOL hasDetailLookAroundLog;
@property (readonly, nonatomic) BOOL hasDeviceBase;
@property (readonly, nonatomic) BOOL hasDeviceConnection;
@property (readonly, nonatomic) BOOL hasDeviceIdentifier;
@property (readonly, nonatomic) BOOL hasDeviceLocale;
@property (readonly, nonatomic) BOOL hasDeviceSettings;
@property (readonly, nonatomic) BOOL hasDirectionsDetail;
@property (readonly, nonatomic) BOOL hasExperiments;
@property (readonly, nonatomic) BOOL hasExtension;
@property (readonly, nonatomic) BOOL hasLookAroundView;
@property (readonly, nonatomic) BOOL hasMapLaunch;
@property (readonly, nonatomic) BOOL hasMapRestore;
@property (readonly, nonatomic) BOOL hasMapSettings;
@property (readonly, nonatomic) BOOL hasMapUi;
@property (readonly, nonatomic) BOOL hasMapUiShown;
@property (readonly, nonatomic) BOOL hasMapView;
@property (readonly, nonatomic) BOOL hasMapViewLocation;
@property (readonly, nonatomic) BOOL hasMapsFeatures;
@property (readonly, nonatomic) BOOL hasMapsServer;
@property (readonly, nonatomic) BOOL hasMapsUserSettings;
@property (readonly, nonatomic) BOOL hasMarket;
@property (readonly, nonatomic) BOOL hasMuninResource;
@property (readonly, nonatomic) BOOL hasNavigation;
@property (readonly, nonatomic) BOOL hasNearbyTransit;
@property (readonly, nonatomic) BOOL hasPairedDevice;
@property (readonly, nonatomic) BOOL hasPlaceCard;
@property (readonly, nonatomic) BOOL hasPlaceRequest;
@property (readonly, nonatomic) BOOL hasPlaceSummaryLayout;
@property (readonly, nonatomic) BOOL hasRap;
@property (readonly, nonatomic) BOOL hasRoute;
@property (readonly, nonatomic) BOOL hasRoutingSettings;
@property (readonly, nonatomic) BOOL hasStateOrigin;
@property (nonatomic) BOOL hasStateType;
@property (readonly, nonatomic) BOOL hasSuggestions;
@property (readonly, nonatomic) BOOL hasSummaryLookAroundLog;
@property (readonly, nonatomic) BOOL hasTileSet;
@property (readonly, nonatomic) BOOL hasTransit;
@property (readonly, nonatomic) BOOL hasTransitStep;
@property (readonly, nonatomic) BOOL hasUgcPhoto;
@property (readonly, nonatomic) BOOL hasUser;
@property (readonly, nonatomic) BOOL hasUserSession;
@property (retain, nonatomic) GEOLogMsgStateLookAroundView *lookAroundView;
@property (retain, nonatomic) GEOLogMsgStateMapLaunch *mapLaunch;
@property (retain, nonatomic) GEOLogMsgStateMapRestore *mapRestore;
@property (retain, nonatomic) GEOLogMsgStateMapSettings *mapSettings;
@property (retain, nonatomic) GEOLogMsgStateMapUI *mapUi;
@property (retain, nonatomic) GEOLogMsgStateMapUIShown *mapUiShown;
@property (retain, nonatomic) GEOLogMsgStateMapView *mapView;
@property (retain, nonatomic) GEOLogMsgStateMapViewLocation *mapViewLocation;
@property (retain, nonatomic) GEOLogMsgStateMapsFeatures *mapsFeatures;
@property (retain, nonatomic) GEOLogMsgStateMapsServer *mapsServer;
@property (retain, nonatomic) GEOLogMsgStateMapsUserSettings *mapsUserSettings;
@property (retain, nonatomic) GEOLogMsgStateMarket *market;
@property (retain, nonatomic) GEOLogMsgStateMuninResource *muninResource;
@property (retain, nonatomic) GEOLogMsgStateNavigation *navigation;
@property (retain, nonatomic) GEOLogMsgStateNearbyTransit *nearbyTransit;
@property (retain, nonatomic) GEOLogMsgStatePairedDevice *pairedDevice;
@property (retain, nonatomic) GEOLogMsgStatePlaceCard *placeCard;
@property (retain, nonatomic) GEOLogMsgStatePlaceRequest *placeRequest;
@property (retain, nonatomic) GEOLogMsgStatePlaceSummaryLayout *placeSummaryLayout;
@property (retain, nonatomic) GEOLogMsgStateRAP *rap;
@property (retain, nonatomic) GEOLogMsgStateRoute *route;
@property (retain, nonatomic) GEOLogMsgStateRoutingSettings *routingSettings;
@property (retain, nonatomic) NSString *stateOrigin;
@property (nonatomic) int stateType;
@property (retain, nonatomic) GEOLogMsgStateSuggestions *suggestions;
@property (retain, nonatomic) GEOLogMsgStateSummaryLookAroundLog *summaryLookAroundLog;
@property (retain, nonatomic) GEOLogMsgStateTileSet *tileSet;
@property (retain, nonatomic) GEOLogMsgStateTransit *transit;
@property (retain, nonatomic) GEOLogMsgStateTransitStep *transitStep;
@property (retain, nonatomic) GEOLogMsgStateUGCPhoto *ugcPhoto;
@property (retain, nonatomic) GEOLogMsgStateUser *user;
@property (retain, nonatomic) GEOLogMsgStateUserSession *userSession;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
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
-(id)stateTypeAsString:(int)arg0 ;
-(int)StringAsStateType:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif