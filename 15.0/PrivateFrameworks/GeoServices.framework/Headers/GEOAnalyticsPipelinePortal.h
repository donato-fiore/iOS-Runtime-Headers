// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOANALYTICSPIPELINEPORTAL_H
#define GEOANALYTICSPIPELINEPORTAL_H


#import <Foundation/Foundation.h>


@interface GEOAnalyticsPipelinePortal : NSObject



+(BOOL)isDisabledEvent:(id)arg0 inCountry:(id)arg1 ;
+(BOOL)isDisabledState:(id)arg0 inCountry:(id)arg1 ;
+(BOOL)permittedToCountAC;
+(id)_caChargingStateFromAPChargingState:(int)arg0 ;
+(id)_caFeatureFromAPFeature:(int)arg0 ;
+(id)_caNavMapTypeFromAPNavMapType:(int)arg0 ;
+(id)_caTriggerTypeFromFromAPThermalPressure:(int)arg0 ;
+(id)_netEventHandlingConfig;
+(id)analyticTag;
+(id)captureQueue;
+(id)dailyCountsWithActionTargetTuple:(NSUInteger)arg0 appGroup:(int)arg1 ;
+(int)_eventNavChargingStateFromAPNavChargingState:(int)arg0 ;
+(int)_eventNavMapTypeFromAPNavMapType:(int)arg0 ;
+(int)_eventThermalPressureFromAPThermalPressure:(int)arg0 ;
+(void)_captureCuratedCollectionAction:(NSUInteger)arg0 collectionId:(NSUInteger)arg1 ;
+(void)_captureNetworkEventForDataRequestKind:(struct ? )arg0 requestAppIdentifier:(id)arg1 appMajorVersion:(id)arg2 appMinorVersion:(id)arg3 error:(id)arg4 clientMetrics:(id)arg5 states:(id)arg6 ;
+(void)captureAccountSessionlessUserActionTargetPairWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureArpPrivacyWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureBatchTrafficWithLocationCollection:(id)arg0 ;
+(void)captureBatchTrafficWithLocationCollection:(id)arg0 additionalStates:(id)arg1 providedDropRate:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4 ;
+(void)captureCarplayUserActionWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureClientACKeypressWithQuery:(id)arg0 queryTokens:(id)arg1 entries:(id)arg2 keypressStatus:(int)arg3 ;
+(void)captureClientACKeypressWithQuery:(id)arg0 queryTokens:(id)arg1 entries:(id)arg2 keypressStatus:(int)arg3 additionalStates:(id)arg4 providedDropRate:(id)arg5 completionQueue:(id)arg6 completionBlock:(id)arg7 ;
+(void)captureClientACResponseWithQuery:(id)arg0 queryTokens:(id)arg1 entries:(id)arg2 shouldDifferentiateClientAndServerResults:(id)arg3 overallLatencyInMs:(id)arg4 isRerankerTriggered:(id)arg5 isRetainedQuery:(id)arg6 ;
+(void)captureClientACResponseWithQuery:(id)arg0 queryTokens:(id)arg1 entries:(id)arg2 shouldDifferentiateClientAndServerResults:(id)arg3 overallLatencyInMs:(id)arg4 isRerankerTriggered:(id)arg5 isRetainedQuery:(id)arg6 additionalStates:(id)arg7 providedDropRate:(id)arg8 completionQueue:(id)arg9 completionBlock:(id)arg10 ;
+(void)captureClientACSuggestionWithQuery:(id)arg0 queryTokens:(id)arg1 entries:(id)arg2 selectedIndex:(id)arg3 selectedSectionIndex:(id)arg4 withinSectionSelectedIndex:(id)arg5 isRetainedQuery:(id)arg6 isRerankerTriggered:(id)arg7 shouldDifferentiateClientAndServerResults:(id)arg8 ;
+(void)captureClientACSuggestionWithQuery:(id)arg0 queryTokens:(id)arg1 entries:(id)arg2 selectedIndex:(id)arg3 selectedSectionIndex:(id)arg4 withinSectionSelectedIndex:(id)arg5 isRetainedQuery:(id)arg6 isRerankerTriggered:(id)arg7 shouldDifferentiateClientAndServerResults:(id)arg8 additionalStates:(id)arg9 providedDropRate:(id)arg10 completionQueue:(id)arg11 completionBlock:(id)arg12 ;
+(void)captureCommuteDoomWindow:(id)arg0 exitTime:(id)arg1 destinations:(id)arg2 reason:(NSInteger)arg3 networkRequests:(NSUInteger)arg4 alerts:(NSUInteger)arg5 ;
+(void)captureCommuteWindowWithStartTime:(id)arg0 duration:(id)arg1 predictedExitTime:(id)arg2 endReason:(int)arg3 numberOfAlertingResponses:(id)arg4 numberOfDoomRoutingRequests:(id)arg5 predictedDestinations:(id)arg6 ;
+(void)captureCommuteWindowWithStartTime:(id)arg0 duration:(id)arg1 predictedExitTime:(id)arg2 endReason:(int)arg3 numberOfAlertingResponses:(id)arg4 numberOfDoomRoutingRequests:(id)arg5 predictedDestinations:(id)arg6 additionalStates:(id)arg7 providedDropRate:(id)arg8 completionQueue:(id)arg9 completionBlock:(id)arg10 ;
+(void)captureCuratedCollectionRemoved:(NSUInteger)arg0 ;
+(void)captureCuratedCollectionSaved:(NSUInteger)arg0 ;
+(void)captureCuratedCollectionSavedListWithSavedCollectionMuids:(id)arg0 ;
+(void)captureCuratedCollectionSavedListWithSavedCollectionMuids:(id)arg0 additionalStates:(id)arg1 providedDropRate:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4 ;
+(void)captureCuratedCollectionUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 publisherId:(id)arg3 following:(id)arg4 collectionId:(id)arg5 collectionCategory:(id)arg6 collectionCurrentlySaved:(id)arg7 verticalIndex:(id)arg8 horizontalIndex:(id)arg9 placeCardType:(id)arg10 possibleActions:(id)arg11 impossibleActions:(id)arg12 ;
+(void)captureCuratedCollectionUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 publisherId:(id)arg3 following:(id)arg4 collectionId:(id)arg5 collectionCategory:(id)arg6 collectionCurrentlySaved:(id)arg7 verticalIndex:(id)arg8 horizontalIndex:(id)arg9 placeCardType:(id)arg10 possibleActions:(id)arg11 impossibleActions:(id)arg12 providerId:(id)arg13 repeatableSectionIndex:(id)arg14 ;
+(void)captureCuratedCollectionViewCountsWithCollectionMuid:(id)arg0 viewsToday:(id)arg1 collectionFirstViewedDate:(id)arg2 collectionLastViewedDate:(id)arg3 GEOTouristInfo_isTourist:(id)arg4 ;
+(void)captureCuratedCollectionViewCountsWithCollectionMuid:(id)arg0 viewsToday:(id)arg1 collectionFirstViewedDate:(id)arg2 collectionLastViewedDate:(id)arg3 GEOTouristInfo_isTourist:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureCuratedCollectionViewed:(NSUInteger)arg0 ;
+(void)captureCuratedCollectionsSessionlessUserActionTargetPairRedactedCCStateWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureCuratedCollectionsSessionlessUserActionTargetPairWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureCuratedCollectionsShortUserActionTargetPairWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureDailyUseSummaryWithUseEvents:(id)arg0 firstEventDate:(id)arg1 user_mapsUseLastDate:(id)arg2 ;
+(void)captureDailyUseSummaryWithUseEvents:(id)arg0 firstEventDate:(id)arg1 user_mapsUseLastDate:(id)arg2 additionalStates:(id)arg3 providedDropRate:(id)arg4 completionQueue:(id)arg5 completionBlock:(id)arg6 ;
+(void)captureDirectionsRequestDetailsWithNavStarted:(id)arg0 purpose:(int)arg1 origin:(int)arg2 destination:(int)arg3 ;
+(void)captureDirectionsRequestDetailsWithNavStarted:(id)arg0 purpose:(int)arg1 origin:(int)arg2 destination:(int)arg3 additionalStates:(id)arg4 providedDropRate:(id)arg5 completionQueue:(id)arg6 completionBlock:(id)arg7 ;
+(void)captureDirectionsWithDirectionsFeedbacks:(id)arg0 finalLocation:(id)arg1 arrivedAtDestination:(id)arg2 navigationAudioFeedback:(struct GEONavigationAudioFeedback )arg3 durationOfTrip:(id)arg4 durationInNavigationModes:(id)arg5 preArrival:(id)arg6 originalEta:(id)arg7 isCyclingNlgAvailable:(id)arg8 isVlfImprovementUsed:(id)arg9 isCoarseLocationUsed:(id)arg10 acceptedCyclingWorkout:(id)arg11 batteryDied:(id)arg12 chargingStopAdded:(id)arg13 isSiriEngaged:(id)arg14 tripOrigin:(id)arg15 isBadEvExperience:(id)arg16 isEvSampleTrip:(id)arg17 stateOfChargeAtOrigin:(id)arg18 stateOfChargeAtDestPredicted:(id)arg19 stateOfChargeAtDestActual:(id)arg20 stateOfChargeDiffAtDest:(id)arg21 waypoints:(id)arg22 evConsumptionModel:(id)arg23 evChargingMode:(id)arg24 activeNavMode:(int)arg25 arWalkingUsedInRoutePlanning:(id)arg26 arWalkingUsedInNavigation:(id)arg27 voiceGuidanceLevel:(int)arg28 hFPEnabled:(id)arg29 ;
+(void)captureDirectionsWithDirectionsFeedbacks:(id)arg0 finalLocation:(id)arg1 arrivedAtDestination:(id)arg2 navigationAudioFeedback:(struct GEONavigationAudioFeedback )arg3 durationOfTrip:(id)arg4 durationInNavigationModes:(id)arg5 preArrival:(id)arg6 originalEta:(id)arg7 isCyclingNlgAvailable:(id)arg8 isVlfImprovementUsed:(id)arg9 isCoarseLocationUsed:(id)arg10 acceptedCyclingWorkout:(id)arg11 batteryDied:(id)arg12 chargingStopAdded:(id)arg13 isSiriEngaged:(id)arg14 tripOrigin:(id)arg15 isBadEvExperience:(id)arg16 isEvSampleTrip:(id)arg17 stateOfChargeAtOrigin:(id)arg18 stateOfChargeAtDestPredicted:(id)arg19 stateOfChargeAtDestActual:(id)arg20 stateOfChargeDiffAtDest:(id)arg21 waypoints:(id)arg22 evConsumptionModel:(id)arg23 evChargingMode:(id)arg24 activeNavMode:(int)arg25 arWalkingUsedInRoutePlanning:(id)arg26 arWalkingUsedInNavigation:(id)arg27 voiceGuidanceLevel:(int)arg28 hFPEnabled:(id)arg29 additionalStates:(id)arg30 providedDropRate:(id)arg31 completionQueue:(id)arg32 completionBlock:(id)arg33 ;
+(void)captureDirectionsWithDirectionsFeedbacks:(id)arg0 finalLocation:(id)arg1 arrivedAtDestination:(id)arg2 navigationAudioFeedback:(struct GEONavigationAudioFeedback )arg3 durationOfTrip:(id)arg4 durationInNavigationModes:(id)arg5 preArrival:(id)arg6 originalEta:(id)arg7 isCyclingNlgAvailable:(id)arg8 isVlfImprovementUsed:(id)arg9 isCoarseLocationUsed:(id)arg10 acceptedCyclingWorkout:(id)arg11 batteryDied:(id)arg12 chargingStopAdded:(id)arg13 isSiriEngaged:(id)arg14 tripOrigin:(id)arg15 wasBadRouteExperience:(id)arg16 isBadEvExperience:(id)arg17 isEvSampleTrip:(id)arg18 stateOfChargeAtOrigin:(id)arg19 stateOfChargeAtDestPredicted:(id)arg20 stateOfChargeAtDestActual:(id)arg21 stateOfChargeDiffAtDest:(id)arg22 waypoints:(id)arg23 evConsumptionModel:(id)arg24 evChargingMode:(id)arg25 isEVRoute:(BOOL)arg26 activeNavMode:(int)arg27 arWalkingUsedInRoutePlanning:(id)arg28 arWalkingUsedInNavigation:(id)arg29 voiceGuidanceLevel:(int)arg30 hFPEnabled:(id)arg31 ;
+(void)captureDisplayAnalyticWithDisplayActionTrigger:(int)arg0 requiredResourcesAvailable:(id)arg1 totalTime:(id)arg2 requestedImageCount:(id)arg3 renderedImageCount:(id)arg4 movementDistance:(id)arg5 meanImageSpacing:(id)arg6 displayEvent:(int)arg7 ;
+(void)captureDisplayAnalyticWithDisplayActionTrigger:(int)arg0 requiredResourcesAvailable:(id)arg1 totalTime:(id)arg2 requestedImageCount:(id)arg3 renderedImageCount:(id)arg4 movementDistance:(id)arg5 meanImageSpacing:(id)arg6 displayEvent:(int)arg7 additionalStates:(id)arg8 providedDropRate:(id)arg9 completionQueue:(id)arg10 completionBlock:(id)arg11 ;
+(void)captureEnterMapsShortUserActionTargetPairWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureEvRoutingVehicleDetailsWithMake:(id)arg0 model:(id)arg1 batteryCapacity:(id)arg2 ;
+(void)captureEvRoutingVehicleDetailsWithMake:(id)arg0 model:(id)arg1 batteryCapacity:(id)arg2 additionalStates:(id)arg3 providedDropRate:(id)arg4 completionQueue:(id)arg5 completionBlock:(id)arg6 ;
+(void)captureEvTripWithOutOfCharge:(id)arg0 outOfRangeAlertDisplayed:(id)arg1 chargeLocationDetails:(id)arg2 stopAddedDetails:(id)arg3 ;
+(void)captureEvTripWithOutOfCharge:(id)arg0 outOfRangeAlertDisplayed:(id)arg1 chargeLocationDetails:(id)arg2 stopAddedDetails:(id)arg3 additionalStates:(id)arg4 providedDropRate:(id)arg5 completionQueue:(id)arg6 completionBlock:(id)arg7 ;
+(void)captureExtraStatesUserActionWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureGridDuration:(CGFloat)arg0 previousState:(int)arg1 endState:(int)arg2 displayType:(int)arg3 errors:(id)arg4 ;
+(void)captureGridDurationWithDurationMs:(id)arg0 previousState:(int)arg1 endState:(int)arg2 endStateErrorReasons:(id)arg3 displayType:(int)arg4 ;
+(void)captureGridDurationWithDurationMs:(id)arg0 previousState:(int)arg1 endState:(int)arg2 endStateErrorReasons:(id)arg3 displayType:(int)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureHardStopWithScore:(id)arg0 digits:(id)arg1 cities:(id)arg2 ;
+(void)captureHardStopWithScore:(id)arg0 digits:(id)arg1 cities:(id)arg2 additionalStates:(id)arg3 providedDropRate:(id)arg4 completionQueue:(id)arg5 completionBlock:(id)arg6 ;
+(void)captureMapLaunchEventWithLaunchUrl:(id)arg0 sourceAppId:(id)arg1 isLaunchedFromTTL:(BOOL)arg2 ttlEventTime:(id)arg3 ;
+(void)captureMapLaunchWithLaunchUri:(id)arg0 sourceAppId:(id)arg1 GEOTimeToLeaveMapLaunch_minutesUntilEvent:(id)arg2 ;
+(void)captureMapLaunchWithLaunchUri:(id)arg0 sourceAppId:(id)arg1 GEOTimeToLeaveMapLaunch_minutesUntilEvent:(id)arg2 additionalStates:(id)arg3 providedDropRate:(id)arg4 completionQueue:(id)arg5 completionBlock:(id)arg6 ;
+(void)captureMapsWidgetsInteractionForType:(int)arg0 endState:(int)arg1 widgetSpecificObject:(id)arg2 wasLocked:(BOOL)arg3 startDate:(id)arg4 forDuration:(CGFloat)arg5 ;
+(void)captureMarcoLiteWithTotalNavTime:(id)arg0 usageStates:(id)arg1 vioTrigger:(int)arg2 ;
+(void)captureMarcoLiteWithTotalNavTime:(id)arg0 usageStates:(id)arg1 vioTrigger:(int)arg2 additionalStates:(id)arg3 providedDropRate:(id)arg4 completionQueue:(id)arg5 completionBlock:(id)arg6 ;
+(void)captureMuninCameraUserActionShortOnlyWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureMuninUserAction:(int)arg0 onTarget:(int)arg1 eventValue:(id)arg2 ;
+(void)captureMuninUserAction:(int)arg0 onTarget:(int)arg1 eventValue:(id)arg2 location:(id)arg3 heading:(unsigned int)arg4 zoom:(CGFloat)arg5 numberPoisInView:(unsigned int)arg6 labelingShown:(BOOL)arg7 ;
+(void)captureMuninUserActionShortOnlyWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureNavThermalPressureTrigger:(int)arg0 thermalPressure:(id)arg1 navMapType:(int)arg2 supressedFeatures:(id)arg3 ;
+(void)captureNavThermalPressureTrigger:(int)arg0 thermalPressure:(id)arg1 navMapType:(int)arg2 supressedFeatures:(id)arg3 chargingState:(int)arg4 ;
+(void)captureNavThermalPressureWithThermalPressure:(id)arg0 disableMapFeatures:(id)arg1 navMapType:(int)arg2 collectionTrigger:(int)arg3 ;
+(void)captureNavThermalPressureWithThermalPressure:(id)arg0 disableMapFeatures:(id)arg1 navMapType:(int)arg2 collectionTrigger:(int)arg3 additionalStates:(id)arg4 providedDropRate:(id)arg5 completionQueue:(id)arg6 completionBlock:(id)arg7 ;
+(void)captureNavTraceWithNavTraceData:(id)arg0 ;
+(void)captureNavTraceWithNavTraceData:(id)arg0 additionalStates:(id)arg1 providedDropRate:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4 ;
+(void)captureNearbyTransitAction:(int)arg0 target:(int)arg1 value:(id)arg2 pinnedLines:(id)arg3 lineGroupReadBlock:(id)arg4 ;
+(void)captureNearbyTransitShortUserActionTargetPairWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureNetEventWithNetworkService:(int)arg0 requestAppIdentifier:(id)arg1 requestAppIdMajorVer:(id)arg2 requestAppIdMinorVer:(id)arg3 requestErrorDomain:(id)arg4 requestErrorCode:(id)arg5 requestDataSize:(id)arg6 responseDataSize:(id)arg7 totalTime:(id)arg8 httpResponseCode:(id)arg9 serviceIpAddress:(id)arg10 taskMetrics:(id)arg11 mptcpServiceType:(int)arg12 mptcpNegotiated:(id)arg13 rnfTriggered:(id)arg14 queuedTime:(id)arg15 redirectCount:(id)arg16 requestStart:(id)arg17 requestEnd:(id)arg18 sessionAppId:(id)arg19 ;
+(void)captureNetEventWithNetworkService:(int)arg0 requestAppIdentifier:(id)arg1 requestAppIdMajorVer:(id)arg2 requestAppIdMinorVer:(id)arg3 requestErrorDomain:(id)arg4 requestErrorCode:(id)arg5 requestDataSize:(id)arg6 responseDataSize:(id)arg7 totalTime:(id)arg8 httpResponseCode:(id)arg9 serviceIpAddress:(id)arg10 taskMetrics:(id)arg11 mptcpServiceType:(int)arg12 mptcpNegotiated:(id)arg13 rnfTriggered:(id)arg14 queuedTime:(id)arg15 redirectCount:(id)arg16 requestStart:(id)arg17 requestEnd:(id)arg18 sessionAppId:(id)arg19 additionalStates:(id)arg20 uploadPolicyType:(int)arg21 providedDropRate:(id)arg22 completionQueue:(id)arg23 completionBlock:(id)arg24 ;
+(void)captureNetworkEventForDataRequestKind:(struct ? )arg0 requestAppIdentifier:(id)arg1 appMajorVersion:(id)arg2 appMinorVersion:(id)arg3 error:(id)arg4 clientMetrics:(id)arg5 additionalStates:(id)arg6 ;
+(void)captureNetworkEventForTileKey:(struct _GEOTileKey )arg0 requestAppIdentifier:(id)arg1 appMajorVersion:(id)arg2 appMinorVersion:(id)arg3 error:(id)arg4 clientMetrics:(id)arg5 additionalStates:(id)arg6 ;
+(void)captureParkedCarWithLocationUncertainty:(id)arg0 timestamp:(id)arg1 GEOLatLng_lat:(id)arg2 GEOLatLng_lng:(id)arg3 ;
+(void)captureParkedCarWithLocationUncertainty:(id)arg0 timestamp:(id)arg1 GEOLatLng_lat:(id)arg2 GEOLatLng_lng:(id)arg3 additionalStates:(id)arg4 providedDropRate:(id)arg5 completionQueue:(id)arg6 completionBlock:(id)arg7 ;
+(void)capturePeriodicSettingsWithMapSettings:(id)arg0 mapUiShown:(id)arg1 mapsFeatures:(id)arg2 mapsUserSettings:(id)arg3 routingSettings:(id)arg4 ;
+(void)capturePeriodicSettingsWithMapSettings:(id)arg0 mapUiShown:(id)arg1 mapsFeatures:(id)arg2 mapsUserSettings:(id)arg3 routingSettings:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)capturePlaceCardUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 mapItem:(id)arg3 timestamp:(CGFloat)arg4 placeCardType:(int)arg5 categoriesDisplayed:(id)arg6 categorySelected:(id)arg7 ;
+(void)capturePlaceCardUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 mapItem:(id)arg3 timestamp:(CGFloat)arg4 resultIndex:(int)arg5 targetID:(NSUInteger)arg6 providerID:(id)arg7 animationID:(NSUInteger)arg8 actionURL:(id)arg9 photoID:(id)arg10 placeCardType:(int)arg11 localizedMapItemCategory:(id)arg12 availableActions:(id)arg13 unactionableUIElements:(id)arg14 ;
+(void)capturePlaceCardUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 mapItem:(id)arg3 timestamp:(CGFloat)arg4 resultIndex:(int)arg5 targetID:(NSUInteger)arg6 providerID:(id)arg7 animationID:(NSUInteger)arg8 actionURL:(id)arg9 photoID:(id)arg10 placeCardType:(int)arg11 localizedMapItemCategory:(id)arg12 availableActions:(id)arg13 unactionableUIElements:(id)arg14 modules:(id)arg15 ;
+(void)capturePoiBusynessDataWithTimestamp:(id)arg0 GEOLatLng_lat:(id)arg1 GEOLatLng_lng:(id)arg2 horizontalAccuracy:(id)arg3 verticalAccuracy:(id)arg4 altitude:(id)arg5 poiPredictions:(id)arg6 ;
+(void)capturePoiBusynessDataWithTimestamp:(id)arg0 GEOLatLng_lat:(id)arg1 GEOLatLng_lng:(id)arg2 horizontalAccuracy:(id)arg3 verticalAccuracy:(id)arg4 altitude:(id)arg5 poiPredictions:(id)arg6 additionalStates:(id)arg7 providedDropRate:(id)arg8 completionQueue:(id)arg9 completionBlock:(id)arg10 ;
+(void)capturePredExSessionlessUserActionTargetPairWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)capturePredExShortUserActionTargetPairWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)capturePredExTrainingWithChanceOfPrecipitation:(id)arg0 chanceOfRain:(id)arg1 chanceOfSnow:(id)arg2 endTime:(id)arg3 durationUntilEventEnd:(id)arg4 durationUntilEventStart:(id)arg5 startTime:(id)arg6 temperature:(id)arg7 timeOfDay:(id)arg8 timeSinceBackgrounded:(id)arg9 actualTransportMode:(int)arg10 dayOfWeek:(id)arg11 distanceFromHereToHome:(int)arg12 distanceFromHereToOrigin:(int)arg13 distanceFromHereToParkedCar:(int)arg14 distanceFromHereToWork:(int)arg15 distanceFromHere:(int)arg16 distanceFromOriginToDestination:(int)arg17 entryType:(int)arg18 weatherType:(int)arg19 mapType:(int)arg20 predictedTransportMode:(int)arg21 preferredTransportMode:(int)arg22 isInBasemode:(id)arg23 isCarplayConnected:(id)arg24 isTourist:(id)arg25 isTransitPossible:(id)arg26 routePlanningScreenPresented:(id)arg27 userLocationGeohash4:(id)arg28 ;
+(void)capturePredExTrainingWithChanceOfPrecipitation:(id)arg0 chanceOfRain:(id)arg1 chanceOfSnow:(id)arg2 endTime:(id)arg3 durationUntilEventEnd:(id)arg4 durationUntilEventStart:(id)arg5 startTime:(id)arg6 temperature:(id)arg7 timeOfDay:(id)arg8 timeSinceBackgrounded:(id)arg9 actualTransportMode:(int)arg10 dayOfWeek:(id)arg11 distanceFromHereToHome:(int)arg12 distanceFromHereToOrigin:(int)arg13 distanceFromHereToParkedCar:(int)arg14 distanceFromHereToWork:(int)arg15 distanceFromHere:(int)arg16 distanceFromOriginToDestination:(int)arg17 entryType:(int)arg18 weatherType:(int)arg19 mapType:(int)arg20 predictedTransportMode:(int)arg21 preferredTransportMode:(int)arg22 isInBasemode:(id)arg23 isCarplayConnected:(id)arg24 isTourist:(id)arg25 isTransitPossible:(id)arg26 routePlanningScreenPresented:(id)arg27 userLocationGeohash4:(id)arg28 additionalStates:(id)arg29 providedDropRate:(id)arg30 completionQueue:(id)arg31 completionBlock:(id)arg32 ;
+(void)capturePredExTrainingWithChanceOfPrecipitation:(id)arg0 chanceOfRain:(id)arg1 chanceOfSnow:(id)arg2 endTime:(id)arg3 durationUntilEventEnd:(id)arg4 durationUntilEventStart:(id)arg5 startTime:(id)arg6 temperature:(id)arg7 timeOfDay:(id)arg8 timeSinceBackgrounded:(id)arg9 actualTransportMode:(int)arg10 dayOfWeek:(id)arg11 distanceFromHereToHome:(int)arg12 distanceFromHereToOrigin:(int)arg13 distanceFromHereToParkedCar:(int)arg14 distanceFromHereToWork:(int)arg15 distanceFromHere:(int)arg16 distanceFromOriginToDestination:(int)arg17 entryType:(int)arg18 weatherType:(int)arg19 mapType:(int)arg20 predictedTransportMode:(int)arg21 preferredTransportMode:(int)arg22 isInBasemode:(id)arg23 isTourist:(id)arg24 isCarplayConnected:(id)arg25 isTransitPossible:(id)arg26 routePlanningScreenPresented:(id)arg27 userLocation:(id)arg28 ;
+(void)capturePressureDataWithPressureData:(id)arg0 ;
+(void)capturePressureDataWithPressureData:(id)arg0 additionalStates:(id)arg1 providedDropRate:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4 ;
+(void)capturePriorityShortUserActionsWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureProactiveSuggestionInteractionForType:(int)arg0 items:(id)arg1 interactedWithItemIndex:(int)arg2 forDuration:(CGFloat)arg3 ;
+(void)captureProactiveSuggestionWithListType:(int)arg0 interactedItemIndex:(id)arg1 duration:(id)arg2 proactiveItems:(id)arg3 ;
+(void)captureProactiveSuggestionWithListType:(int)arg0 interactedItemIndex:(id)arg1 duration:(id)arg2 proactiveItems:(id)arg3 additionalStates:(id)arg4 providedDropRate:(id)arg5 completionQueue:(id)arg6 completionBlock:(id)arg7 ;
+(void)captureRAPUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 entryPoint:(int)arg3 feedbackType:(int)arg4 feedbackFieldOptionKeys:(id)arg5 rapServerManifestVersion:(id)arg6 duration:(id)arg7 ;
+(void)captureRapSessionlessUserActionTargetPairWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureRapShortAndSessionlessUserActionTargetPairWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureRapUserActionShortOnlyWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureRealTrafficWithLocationCollection:(id)arg0 ;
+(void)captureRealTrafficWithLocationCollection:(id)arg0 additionalStates:(id)arg1 providedDropRate:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4 ;
+(void)captureRideBookedWithRideBookedSessionId:(id)arg0 bookedUsingMaps:(id)arg1 cancelled:(id)arg2 contactedDriver:(id)arg3 viewedInProactiveTray:(id)arg4 tappedProactiveTrayItem:(id)arg5 viewedDetails:(id)arg6 invalidVehicleLocation:(id)arg7 missingVehicleLocation:(id)arg8 rideAppId:(id)arg9 rideAppVersion:(id)arg10 intentResponseFailures:(id)arg11 ;
+(void)captureRideBookedWithRideBookedSessionId:(id)arg0 bookedUsingMaps:(id)arg1 cancelled:(id)arg2 contactedDriver:(id)arg3 viewedInProactiveTray:(id)arg4 tappedProactiveTrayItem:(id)arg5 viewedDetails:(id)arg6 invalidVehicleLocation:(id)arg7 missingVehicleLocation:(id)arg8 rideAppId:(id)arg9 rideAppVersion:(id)arg10 intentResponseFailures:(id)arg11 additionalStates:(id)arg12 providedDropRate:(id)arg13 completionQueue:(id)arg14 completionBlock:(id)arg15 ;
+(void)captureRideBookingWithRideBookingSessionId:(id)arg0 statusIssue:(int)arg1 endState:(int)arg2 endView:(int)arg3 rideAppId:(id)arg4 rideAppVersion:(id)arg5 originBlurred:(id)arg6 destinationBlurred:(id)arg7 exploredOtherOptions:(id)arg8 distanceToPickupInMeters:(id)arg9 paymentIsApplePay:(id)arg10 numberOfAvailableExtensions:(id)arg11 switchedApp:(id)arg12 comparedRideOptions:(id)arg13 showedSurgePricingAlert:(id)arg14 durationOfSessionInSeconds:(id)arg15 installedApp:(id)arg16 timestamp:(id)arg17 unavailable:(id)arg18 movedPickupLocation:(id)arg19 errorMessages:(id)arg20 intentResponseFailures:(id)arg21 ;
+(void)captureRideBookingWithRideBookingSessionId:(id)arg0 statusIssue:(int)arg1 endState:(int)arg2 endView:(int)arg3 rideAppId:(id)arg4 rideAppVersion:(id)arg5 originBlurred:(id)arg6 destinationBlurred:(id)arg7 exploredOtherOptions:(id)arg8 distanceToPickupInMeters:(id)arg9 paymentIsApplePay:(id)arg10 numberOfAvailableExtensions:(id)arg11 switchedApp:(id)arg12 comparedRideOptions:(id)arg13 showedSurgePricingAlert:(id)arg14 durationOfSessionInSeconds:(id)arg15 installedApp:(id)arg16 timestamp:(id)arg17 unavailable:(id)arg18 movedPickupLocation:(id)arg19 errorMessages:(id)arg20 intentResponseFailures:(id)arg21 additionalStates:(id)arg22 providedDropRate:(id)arg23 completionQueue:(id)arg24 completionBlock:(id)arg25 ;
+(void)captureSessionlessUserActionWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureStandardShortWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureTableBookedEventWithSessionId:(id)arg0 bookedUsingMaps:(BOOL)arg1 cancelled:(BOOL)arg2 viewedInProactiveTray:(BOOL)arg3 tappedProactiveTrayItem:(BOOL)arg4 viewedInPlacecard:(BOOL)arg5 viewedDetailsInPlacecard:(BOOL)arg6 isAsync:(BOOL)arg7 bookedAppId:(id)arg8 muid:(NSUInteger)arg9 called:(BOOL)arg10 routed:(BOOL)arg11 tappedChangeReservation:(BOOL)arg12 tappedCancelReservation:(BOOL)arg13 ;
+(void)captureTableBookedWithBookedTableSessionId:(id)arg0 bookedTables:(id)arg1 ;
+(void)captureTableBookedWithBookedTableSessionId:(id)arg0 bookedTables:(id)arg1 additionalStates:(id)arg2 providedDropRate:(id)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5 ;
+(void)captureTableBookingWithBookTableSessionId:(id)arg0 endState:(int)arg1 endView:(int)arg2 bookTableAppId:(id)arg3 muid:(id)arg4 blurredReservationTimestamp:(id)arg5 blurredBookingTimestamp:(id)arg6 durationOfSessionInSeconds:(id)arg7 installNeeded:(id)arg8 installNeededTappedAppId:(id)arg9 installCompleted:(id)arg10 tableSize:(id)arg11 addedSpecialRequest:(id)arg12 swipedAvailableTimes:(id)arg13 tappedDatePicker:(id)arg14 errorMessages:(id)arg15 ;
+(void)captureTableBookingWithBookTableSessionId:(id)arg0 endState:(int)arg1 endView:(int)arg2 bookTableAppId:(id)arg3 muid:(id)arg4 blurredReservationTimestamp:(id)arg5 blurredBookingTimestamp:(id)arg6 durationOfSessionInSeconds:(id)arg7 installNeeded:(id)arg8 installNeededTappedAppId:(id)arg9 installCompleted:(id)arg10 tableSize:(id)arg11 addedSpecialRequest:(id)arg12 swipedAvailableTimes:(id)arg13 tappedDatePicker:(id)arg14 errorMessages:(id)arg15 additionalStates:(id)arg16 providedDropRate:(id)arg17 completionQueue:(id)arg18 completionBlock:(id)arg19 ;
+(void)captureTelemetricEntityCountForEventKey:(int)arg0 eventDetail:(id)arg1 ;
+(void)captureTelemetricEntityCountForEventKey:(int)arg0 eventValue:(NSUInteger)arg1 eventDetail:(id)arg2 ;
+(void)captureTelemetricWithTelemetricEntitys:(id)arg0 ;
+(void)captureTelemetricWithTelemetricEntitys:(id)arg0 additionalStates:(id)arg1 providedDropRate:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4 ;
+(void)captureThrottleEventWithNetworkService:(int)arg0 requestAppIdentifier:(id)arg1 throttleType:(int)arg2 throttleMode:(int)arg3 throttleReqType:(id)arg4 throttleTriggerCount:(id)arg5 throttleTriggerDuration:(id)arg6 throttleCount:(id)arg7 throttleDuration:(id)arg8 ;
+(void)captureThrottleEventWithNetworkService:(int)arg0 requestAppIdentifier:(id)arg1 throttleType:(int)arg2 throttleMode:(int)arg3 throttleReqType:(id)arg4 throttleTriggerCount:(id)arg5 throttleTriggerDuration:(id)arg6 throttleCount:(id)arg7 throttleDuration:(id)arg8 additionalStates:(id)arg9 providedDropRate:(id)arg10 completionQueue:(id)arg11 completionBlock:(id)arg12 ;
+(void)captureTileCacheHitWithGEOCacheHit_requestorType:(int)arg0 GEOCacheHit_tileSourceType:(int)arg1 GEOCacheHit_count:(id)arg2 GEOCacheHit_bytes:(id)arg3 tileSet_tileSetInfos:(id)arg4 ;
+(void)captureTileCacheHitWithGEOCacheHit_requestorType:(int)arg0 GEOCacheHit_tileSourceType:(int)arg1 GEOCacheHit_count:(id)arg2 GEOCacheHit_bytes:(id)arg3 tileSet_tileSetInfos:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureTileCacheMissWithGEOCacheMiss_requestorType:(int)arg0 GEOCacheMiss_missType:(int)arg1 GEOCacheMiss_count:(id)arg2 GEOCacheMiss_bytes:(id)arg3 GEOCacheMiss_httpStatus:(id)arg4 GEOCacheMiss_errors:(id)arg5 tileSet_tileSetInfos:(id)arg6 ;
+(void)captureTileCacheMissWithGEOCacheMiss_requestorType:(int)arg0 GEOCacheMiss_missType:(int)arg1 GEOCacheMiss_count:(id)arg2 GEOCacheMiss_bytes:(id)arg3 GEOCacheMiss_httpStatus:(id)arg4 GEOCacheMiss_errors:(id)arg5 tileSet_tileSetInfos:(id)arg6 additionalStates:(id)arg7 providedDropRate:(id)arg8 completionQueue:(id)arg9 completionBlock:(id)arg10 ;
+(void)captureTileSetStateWithTileSetStateType:(int)arg0 newCoverage:(id)arg1 oldCoverage:(id)arg2 durationInOldState:(id)arg3 ;
+(void)captureTileSetStateWithTileSetStateType:(int)arg0 newCoverage:(id)arg1 oldCoverage:(id)arg2 durationInOldState:(id)arg3 additionalStates:(id)arg4 providedDropRate:(id)arg5 completionQueue:(id)arg6 completionBlock:(id)arg7 ;
+(void)captureTimeToLeaveHypothesisEventWithEarlyDepartureDelta:(CGFloat)arg0 lateDepartureDelta:(CGFloat)arg1 earlyArrivalDelta:(CGFloat)arg2 lateArrivalDelta:(CGFloat)arg3 rerouteCount:(NSUInteger)arg4 uiNotification:(int)arg5 ;
+(void)captureTimeToLeaveIntialTravelTimeEventWithTravelTime:(CGFloat)arg0 ;
+(void)captureTransitAppLaunchSource:(struct ? )arg0 destination:(struct ? )arg1 bundleIdentifier:(id)arg2 ;
+(void)captureTransitAppLaunchWithBundleIdentifier:(id)arg0 source:(id)arg1 destination:(id)arg2 timestamp:(id)arg3 ;
+(void)captureTransitAppLaunchWithBundleIdentifier:(id)arg0 source:(id)arg1 destination:(id)arg2 timestamp:(id)arg3 additionalStates:(id)arg4 providedDropRate:(id)arg5 completionQueue:(id)arg6 completionBlock:(id)arg7 ;
+(void)captureTransitPlaceCardUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 mapItem:(id)arg3 timestamp:(CGFloat)arg4 resultIndex:(int)arg5 targetID:(NSUInteger)arg6 providerID:(id)arg7 animationID:(NSUInteger)arg8 transitCardCategory:(int)arg9 transitSystem:(id)arg10 transitDepartureSequence:(id)arg11 transitIncident:(id)arg12 ;
+(void)captureTransitShortUserActionTargetPairWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureTripDepartureWithTransportMode:(int)arg0 distanceFromOrigin:(id)arg1 timeFromOrigin:(id)arg2 ;
+(void)captureTripDepartureWithTransportMode:(int)arg0 distanceFromOrigin:(id)arg1 timeFromOrigin:(id)arg2 additionalStates:(id)arg3 providedDropRate:(id)arg4 completionQueue:(id)arg5 completionBlock:(id)arg6 ;
+(void)captureTtlHypothesisWithArrival:(int)arg0 departure:(int)arg1 ttlUiNotificationShown:(int)arg2 earliestArrivalOffset:(id)arg3 earliestDepartureOffset:(id)arg4 latestArrivalOffset:(id)arg5 latestDepartureOffset:(id)arg6 numberOfReroutes:(id)arg7 ;
+(void)captureTtlHypothesisWithArrival:(int)arg0 departure:(int)arg1 ttlUiNotificationShown:(int)arg2 earliestArrivalOffset:(id)arg3 earliestDepartureOffset:(id)arg4 latestArrivalOffset:(id)arg5 latestDepartureOffset:(id)arg6 numberOfReroutes:(id)arg7 additionalStates:(id)arg8 providedDropRate:(id)arg9 completionQueue:(id)arg10 completionBlock:(id)arg11 ;
+(void)captureTtlInitialTimeWithTravelTime:(id)arg0 ;
+(void)captureTtlInitialTimeWithTravelTime:(id)arg0 additionalStates:(id)arg1 providedDropRate:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4 ;
+(void)captureUGCSessionlessUserActionTargetPairWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureUGCShortUserActionTargetPairWithAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureUGCUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 photoSources:(id)arg3 ;
+(void)captureUgcDeleteLogsWithCertificates:(id)arg0 signature:(id)arg1 ;
+(void)captureUgcDeleteLogsWithCertificates:(id)arg0 signature:(id)arg1 additionalStates:(id)arg2 providedDropRate:(id)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5 ;
+(void)captureUgcDeleteWithSignature:(id)arg0 certificates:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)captureUserAccountUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 signedIntoIcloud:(id)arg3 possibleActionsReadBlock:(id)arg4 ;
+(void)captureUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 ;
+(void)captureUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 additionalStates:(id)arg3 providedDropRate:(id)arg4 completionQueue:(id)arg5 completionBlock:(id)arg6 ;
+(void)captureUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 categoriesDisplayed:(id)arg3 categorySelected:(id)arg4 ;
+(void)captureUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 categoriesMetadataDisplayed:(id)arg3 categoryMetadataSelected:(id)arg4 ;
+(void)captureUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 mapRegion:(id)arg3 zoomLevel:(CGFloat)arg4 mapType:(int)arg5 ;
+(void)captureUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 mapsServerMetadata:(id)arg3 ;
+(void)captureUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(id)arg3 moduleMetadata:(id)arg4 additionalStates:(id)arg5 providedDropRate:(id)arg6 completionQueue:(id)arg7 completionBlock:(id)arg8 ;
+(void)captureUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 moduleType:(int)arg3 moduleMetadata:(id)arg4 ;
+(void)captureUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 placeActionDetails:(id)arg3 ;
+(void)captureUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 placeActionDetails:(id)arg3 mapRegion:(id)arg4 zoomLevel:(CGFloat)arg5 mapType:(int)arg6 ;
+(void)captureUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 routeDetails:(id)arg3 ;
+(void)captureUserAction:(int)arg0 target:(int)arg1 value:(id)arg2 transitStep:(id)arg3 ;
+(void)captureVlfUsageWithEntryPoint:(id)arg0 sessionTimeMs:(id)arg1 timeRoundedToHour:(id)arg2 localizationDetails:(id)arg3 finalState:(int)arg4 postFusionCorrection:(id)arg5 initialPositionContextClassification:(struct GEOVLFPositionContextClassification )arg6 ;
+(void)captureVlfUsageWithEntryPoint:(id)arg0 sessionTimeMs:(id)arg1 timeRoundedToHour:(id)arg2 localizationDetails:(id)arg3 finalState:(int)arg4 postFusionCorrection:(id)arg5 initialPositionContextClassification:(struct GEOVLFPositionContextClassification )arg6 additionalStates:(id)arg7 providedDropRate:(id)arg8 completionQueue:(id)arg9 completionBlock:(id)arg10 ;
+(void)captureWidgetInteractionWithMapsWidgetType:(int)arg0 endState:(int)arg1 lockedMode:(id)arg2 localHour:(id)arg3 localDayOfWeek:(id)arg4 duration:(id)arg5 mapsNearbyWidget:(id)arg6 mapsTransitWidget:(id)arg7 mapsDestinationsWidget:(id)arg8 ;
+(void)captureWidgetInteractionWithMapsWidgetType:(int)arg0 endState:(int)arg1 lockedMode:(id)arg2 localHour:(id)arg3 localDayOfWeek:(id)arg4 duration:(id)arg5 mapsNearbyWidget:(id)arg6 mapsTransitWidget:(id)arg7 mapsDestinationsWidget:(id)arg8 additionalStates:(id)arg9 providedDropRate:(id)arg10 completionQueue:(id)arg11 completionBlock:(id)arg12 ;
+(void)captureWifiProbeWithWifiConnectionQuality:(id)arg0 ;
+(void)captureWifiProbeWithWifiConnectionQuality:(id)arg0 additionalStates:(id)arg1 providedDropRate:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4 ;
// +(void)reportLogMsgEvent:(id)arg0 uploadBatchId:(NSUInteger)arg1 completion:(id)arg2 completionQueue:(unk)arg3  ;


@end


#endif