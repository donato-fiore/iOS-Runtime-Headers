// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGEVENT_H
#define GEOLOGMSGEVENT_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOLogMsgEventId.h"
#import "GEOLogMsgEventARSessionUsage.h"
#import "GEOLogMsgEventBatchTrafficProbe.h"
#import "GEOLogMsgEventClientACSuggestions.h"
#import "GEOLogMsgEventCommuteWindow.h"
#import "GEOLogMsgEventCuratedCollectionStats.h"
#import "GEOLogMsgEventCuratedCollectionUsage.h"
#import "GEOLogMsgEventDailyUseSummary.h"
#import "GEOLogMsgEventDirections.h"
#import "GEOLogMsgEventDirectionsRequestDetails.h"
#import "GEOLogMsgEventDisplayAnalytic.h"
#import "GEOLogMsgEventEVRoutingVehicleDetails.h"
#import "GEOLogMsgEventEVTrip.h"
#import "GEOLogMsgEventFullNavTrace.h"
#import "GEOLogMsgEventGridDuration.h"
#import "GEOLogMsgEventHardStop.h"
#import "GEOLogMsgEventImpressionEvent.h"
#import "GEOLogMsgEventListInteractionSession.h"
#import "GEOLogMsgEventLogDiscard.h"
#import "GEOLogMsgEventMapKitCounts.h"
#import "GEOLogMsgEventMapLaunch.h"
#import "GEOLogMsgEventMapsDeviceSettings.h"
#import "GEOLogMsgEventMapsWidgetsInteractionSession.h"
#import "GEOLogMsgEventMarcoLiteUsage.h"
#import "GEOLogMsgEventNetwork.h"
#import "GEOLogMsgEventNetworkSelectionHarvest.h"
#import "GEOLogMsgEventParkedCar.h"
#import "GEOLogMsgEventPeriodicSettingsSummary.h"
#import "GEOLogMsgEventPlaceCacheLookup.h"
#import "GEOLogMsgEventPlaceDataCache.h"
#import "GEOLogMsgEventPOIBusynessData.h"
#import "GEOLogMsgEventPredExTrainingData.h"
#import "GEOLogMsgEventPressureData.h"
#import "GEOLogMsgEventProactiveSuggestionInteractionSession.h"
#import "GEOLogMsgEventRealtimeTrafficProbe.h"
#import "GEOLogMsgEventRefineSearchSession.h"
#import "GEOLogMsgEventRideBookedSession.h"
#import "GEOLogMsgEventRideBookingSession.h"
#import "GEOLogMsgEventShowcaseSuppression.h"
#import "GEOLogMsgEventStateTiming.h"
#import "GEOLogMsgEventTableBookedSession.h"
#import "GEOLogMsgEventTableBookingSession.h"
#import "GEOLogMsgEventTelemetric.h"
#import "GEOLogMsgEventThermalPressure.h"
#import "GEOLogMsgEventThrottle.h"
#import "GEOLogMsgEventTileCacheAnalytic.h"
#import "GEOLogMsgEventTileSetState.h"
#import "GEOLogMsgEventTimeToLeaveHypothesis.h"
#import "GEOLogMsgEventTimeToLeaveInitialTravelTime.h"
#import "GEOLogMsgEventTransitAppLaunch.h"
#import "GEOLogMsgEventTripDepartureFeedback.h"
#import "GEOLogMsgEventUserAction.h"
#import "GEOLogMsgEventVLFUsage.h"
#import "GEOLogMsgEventWifiConnectionQualityProbe.h"

@interface GEOLogMsgEvent : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOLogMsgEventId *_analyticTag;
    GEOLogMsgEventARSessionUsage *_arSessionUsage;
    GEOLogMsgEventBatchTrafficProbe *_batchTrafficProbeCollection;
    GEOLogMsgEventClientACSuggestions *_clientAcSuggestions;
    GEOLogMsgEventCommuteWindow *_commuteWindow;
    GEOLogMsgEventCuratedCollectionStats *_curatedCollectionStats;
    GEOLogMsgEventCuratedCollectionUsage *_curatedCollectionUsage;
    GEOLogMsgEventDailyUseSummary *_dailyUseSummary;
    GEOLogMsgEventDirections *_directionsEvent;
    GEOLogMsgEventDirectionsRequestDetails *_directionsRequestDetails;
    GEOLogMsgEventDisplayAnalytic *_displayAnalytic;
    GEOLogMsgEventEVRoutingVehicleDetails *_evRoutingVehicleDetails;
    GEOLogMsgEventEVTrip *_evTrip;
    GEOLogMsgEventFullNavTrace *_fullNavTrace;
    GEOLogMsgEventGridDuration *_gridDuration;
    GEOLogMsgEventHardStop *_hardStop;
    GEOLogMsgEventImpressionEvent *_impressionEvent;
    GEOLogMsgEventListInteractionSession *_listInteractionSession;
    GEOLogMsgEventLogDiscard *_logDiscard;
    NSMutableArray *_logMsgStates;
    GEOLogMsgEventMapKitCounts *_mapKitCounts;
    GEOLogMsgEventMapLaunch *_mapLaunchEvent;
    GEOLogMsgEventMapsDeviceSettings *_mapsDeviceSettings;
    NSString *_mapsEnvironment;
    GEOLogMsgEventMapsWidgetsInteractionSession *_mapsWidgetsInteractionSession;
    GEOLogMsgEventMarcoLiteUsage *_marcoLiteUsage;
    GEOLogMsgEventNetwork *_networkEvent;
    GEOLogMsgEventNetworkSelectionHarvest *_networkSelectionHarvest;
    GEOLogMsgEventParkedCar *_parkedCar;
    GEOLogMsgEventPeriodicSettingsSummary *_periodicSettingsSummary;
    GEOLogMsgEventPlaceCacheLookup *_placeCacheLookup;
    GEOLogMsgEventPlaceDataCache *_placeDataCacheEvent;
    GEOLogMsgEventPOIBusynessData *_poiBusynessData;
    GEOLogMsgEventPredExTrainingData *_predExTrainingData;
    GEOLogMsgEventPressureData *_pressureData;
    GEOLogMsgEventProactiveSuggestionInteractionSession *_proactiveSuggestionInteractionSessionEvent;
    GEOLogMsgEventRealtimeTrafficProbe *_realtimeTrafficProbeCollection;
    GEOLogMsgEventRefineSearchSession *_refineSearchSession;
    GEOLogMsgEventRideBookedSession *_rideBookedSession;
    GEOLogMsgEventRideBookingSession *_rideBookingSession;
    GEOLogMsgEventShowcaseSuppression *_showcaseSuppression;
    GEOLogMsgEventStateTiming *_stateTimingEvent;
    GEOLogMsgEventTableBookedSession *_tableBookedSession;
    GEOLogMsgEventTableBookingSession *_tableBookingSession;
    GEOLogMsgEventTelemetric *_telemetric;
    GEOLogMsgEventThermalPressure *_thermalPressure;
    GEOLogMsgEventThrottle *_throttleEvent;
    GEOLogMsgEventTileCacheAnalytic *_tileCacheAnalytic;
    GEOLogMsgEventTileSetState *_tileSetStateEvent;
    GEOLogMsgEventTimeToLeaveHypothesis *_timeToLeaveHypothesisEvent;
    GEOLogMsgEventTimeToLeaveInitialTravelTime *_timeToLeaveInitialTravelTimeEvent;
    GEOLogMsgEventTransitAppLaunch *_transitAppLaunchEvent;
    GEOLogMsgEventTripDepartureFeedback *_tripDepartureFeedback;
    CGFloat _usageEventTime;
    GEOLogMsgEventUserAction *_userActionEvent;
    GEOLogMsgEventVLFUsage *_vlfUsage;
    GEOLogMsgEventWifiConnectionQualityProbe *_wifiConnectionQualityProbeEvent;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _eventType;
    ? _flags;
}


@property (retain, nonatomic) GEOLogMsgEventId *analyticTag;
@property (retain, nonatomic) GEOLogMsgEventARSessionUsage *arSessionUsage;
@property (retain, nonatomic) GEOLogMsgEventBatchTrafficProbe *batchTrafficProbeCollection;
@property (retain, nonatomic) GEOLogMsgEventClientACSuggestions *clientAcSuggestions;
@property (retain, nonatomic) GEOLogMsgEventCommuteWindow *commuteWindow;
@property (retain, nonatomic) GEOLogMsgEventCuratedCollectionStats *curatedCollectionStats;
@property (retain, nonatomic) GEOLogMsgEventCuratedCollectionUsage *curatedCollectionUsage;
@property (retain, nonatomic) GEOLogMsgEventDailyUseSummary *dailyUseSummary;
@property (retain, nonatomic) GEOLogMsgEventDirections *directionsEvent;
@property (retain, nonatomic) GEOLogMsgEventDirectionsRequestDetails *directionsRequestDetails;
@property (retain, nonatomic) GEOLogMsgEventDisplayAnalytic *displayAnalytic;
@property (retain, nonatomic) GEOLogMsgEventEVRoutingVehicleDetails *evRoutingVehicleDetails;
@property (retain, nonatomic) GEOLogMsgEventEVTrip *evTrip;
@property (nonatomic) int eventType;
@property (retain, nonatomic) GEOLogMsgEventFullNavTrace *fullNavTrace;
@property (retain, nonatomic) GEOLogMsgEventGridDuration *gridDuration;
@property (retain, nonatomic) GEOLogMsgEventHardStop *hardStop;
@property (readonly, nonatomic) BOOL hasAnalyticTag;
@property (readonly, nonatomic) BOOL hasArSessionUsage;
@property (readonly, nonatomic) BOOL hasBatchTrafficProbeCollection;
@property (readonly, nonatomic) BOOL hasClientAcSuggestions;
@property (readonly, nonatomic) BOOL hasCommuteWindow;
@property (readonly, nonatomic) BOOL hasCuratedCollectionStats;
@property (readonly, nonatomic) BOOL hasCuratedCollectionUsage;
@property (readonly, nonatomic) BOOL hasDailyUseSummary;
@property (readonly, nonatomic) BOOL hasDirectionsEvent;
@property (readonly, nonatomic) BOOL hasDirectionsRequestDetails;
@property (readonly, nonatomic) BOOL hasDisplayAnalytic;
@property (readonly, nonatomic) BOOL hasEvRoutingVehicleDetails;
@property (readonly, nonatomic) BOOL hasEvTrip;
@property (nonatomic) BOOL hasEventType;
@property (readonly, nonatomic) BOOL hasFullNavTrace;
@property (readonly, nonatomic) BOOL hasGridDuration;
@property (readonly, nonatomic) BOOL hasHardStop;
@property (readonly, nonatomic) BOOL hasImpressionEvent;
@property (readonly, nonatomic) BOOL hasListInteractionSession;
@property (readonly, nonatomic) BOOL hasLogDiscard;
@property (readonly, nonatomic) BOOL hasMapKitCounts;
@property (readonly, nonatomic) BOOL hasMapLaunchEvent;
@property (readonly, nonatomic) BOOL hasMapsDeviceSettings;
@property (readonly, nonatomic) BOOL hasMapsEnvironment;
@property (readonly, nonatomic) BOOL hasMapsWidgetsInteractionSession;
@property (readonly, nonatomic) BOOL hasMarcoLiteUsage;
@property (readonly, nonatomic) BOOL hasNetworkEvent;
@property (readonly, nonatomic) BOOL hasNetworkSelectionHarvest;
@property (readonly, nonatomic) BOOL hasParkedCar;
@property (readonly, nonatomic) BOOL hasPeriodicSettingsSummary;
@property (readonly, nonatomic) BOOL hasPlaceCacheLookup;
@property (readonly, nonatomic) BOOL hasPlaceDataCacheEvent;
@property (readonly, nonatomic) BOOL hasPoiBusynessData;
@property (readonly, nonatomic) BOOL hasPredExTrainingData;
@property (readonly, nonatomic) BOOL hasPressureData;
@property (readonly, nonatomic) BOOL hasProactiveSuggestionInteractionSessionEvent;
@property (readonly, nonatomic) BOOL hasRealtimeTrafficProbeCollection;
@property (readonly, nonatomic) BOOL hasRefineSearchSession;
@property (readonly, nonatomic) BOOL hasRideBookedSession;
@property (readonly, nonatomic) BOOL hasRideBookingSession;
@property (readonly, nonatomic) BOOL hasShowcaseSuppression;
@property (readonly, nonatomic) BOOL hasStateTimingEvent;
@property (readonly, nonatomic) BOOL hasTableBookedSession;
@property (readonly, nonatomic) BOOL hasTableBookingSession;
@property (readonly, nonatomic) BOOL hasTelemetric;
@property (readonly, nonatomic) BOOL hasThermalPressure;
@property (readonly, nonatomic) BOOL hasThrottleEvent;
@property (readonly, nonatomic) BOOL hasTileCacheAnalytic;
@property (readonly, nonatomic) BOOL hasTileSetStateEvent;
@property (readonly, nonatomic) BOOL hasTimeToLeaveHypothesisEvent;
@property (readonly, nonatomic) BOOL hasTimeToLeaveInitialTravelTimeEvent;
@property (readonly, nonatomic) BOOL hasTransitAppLaunchEvent;
@property (readonly, nonatomic) BOOL hasTripDepartureFeedback;
@property (nonatomic) BOOL hasUsageEventTime;
@property (readonly, nonatomic) BOOL hasUserActionEvent;
@property (readonly, nonatomic) BOOL hasVlfUsage;
@property (readonly, nonatomic) BOOL hasWifiConnectionQualityProbeEvent;
@property (retain, nonatomic) GEOLogMsgEventImpressionEvent *impressionEvent;
@property (retain, nonatomic) GEOLogMsgEventListInteractionSession *listInteractionSession;
@property (retain, nonatomic) GEOLogMsgEventLogDiscard *logDiscard;
@property (retain, nonatomic) NSMutableArray *logMsgStates;
@property (retain, nonatomic) GEOLogMsgEventMapKitCounts *mapKitCounts;
@property (retain, nonatomic) GEOLogMsgEventMapLaunch *mapLaunchEvent;
@property (retain, nonatomic) GEOLogMsgEventMapsDeviceSettings *mapsDeviceSettings;
@property (retain, nonatomic) NSString *mapsEnvironment;
@property (retain, nonatomic) GEOLogMsgEventMapsWidgetsInteractionSession *mapsWidgetsInteractionSession;
@property (retain, nonatomic) GEOLogMsgEventMarcoLiteUsage *marcoLiteUsage;
@property (retain, nonatomic) GEOLogMsgEventNetwork *networkEvent;
@property (retain, nonatomic) GEOLogMsgEventNetworkSelectionHarvest *networkSelectionHarvest;
@property (retain, nonatomic) GEOLogMsgEventParkedCar *parkedCar;
@property (retain, nonatomic) GEOLogMsgEventPeriodicSettingsSummary *periodicSettingsSummary;
@property (retain, nonatomic) GEOLogMsgEventPlaceCacheLookup *placeCacheLookup;
@property (retain, nonatomic) GEOLogMsgEventPlaceDataCache *placeDataCacheEvent;
@property (retain, nonatomic) GEOLogMsgEventPOIBusynessData *poiBusynessData;
@property (retain, nonatomic) GEOLogMsgEventPredExTrainingData *predExTrainingData;
@property (retain, nonatomic) GEOLogMsgEventPressureData *pressureData;
@property (retain, nonatomic) GEOLogMsgEventProactiveSuggestionInteractionSession *proactiveSuggestionInteractionSessionEvent;
@property (retain, nonatomic) GEOLogMsgEventRealtimeTrafficProbe *realtimeTrafficProbeCollection;
@property (retain, nonatomic) GEOLogMsgEventRefineSearchSession *refineSearchSession;
@property (retain, nonatomic) GEOLogMsgEventRideBookedSession *rideBookedSession;
@property (retain, nonatomic) GEOLogMsgEventRideBookingSession *rideBookingSession;
@property (retain, nonatomic) GEOLogMsgEventShowcaseSuppression *showcaseSuppression;
@property (retain, nonatomic) GEOLogMsgEventStateTiming *stateTimingEvent;
@property (retain, nonatomic) GEOLogMsgEventTableBookedSession *tableBookedSession;
@property (retain, nonatomic) GEOLogMsgEventTableBookingSession *tableBookingSession;
@property (retain, nonatomic) GEOLogMsgEventTelemetric *telemetric;
@property (retain, nonatomic) GEOLogMsgEventThermalPressure *thermalPressure;
@property (retain, nonatomic) GEOLogMsgEventThrottle *throttleEvent;
@property (retain, nonatomic) GEOLogMsgEventTileCacheAnalytic *tileCacheAnalytic;
@property (retain, nonatomic) GEOLogMsgEventTileSetState *tileSetStateEvent;
@property (retain, nonatomic) GEOLogMsgEventTimeToLeaveHypothesis *timeToLeaveHypothesisEvent;
@property (retain, nonatomic) GEOLogMsgEventTimeToLeaveInitialTravelTime *timeToLeaveInitialTravelTimeEvent;
@property (retain, nonatomic) GEOLogMsgEventTransitAppLaunch *transitAppLaunchEvent;
@property (retain, nonatomic) GEOLogMsgEventTripDepartureFeedback *tripDepartureFeedback;
@property (nonatomic) CGFloat usageEventTime;
@property (retain, nonatomic) GEOLogMsgEventUserAction *userActionEvent;
@property (retain, nonatomic) GEOLogMsgEventVLFUsage *vlfUsage;
@property (retain, nonatomic) GEOLogMsgEventWifiConnectionQualityProbe *wifiConnectionQualityProbeEvent;


+(BOOL)isValid:(id)arg0 ;
+(Class)logMsgStateType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)logMsgStateAtIndex:(NSUInteger)arg0 ;
-(int)StringAsEventType:(id)arg0 ;
-(void)addLogMsgState:(id)arg0 ;
-(void)clearLogMsgStates;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif