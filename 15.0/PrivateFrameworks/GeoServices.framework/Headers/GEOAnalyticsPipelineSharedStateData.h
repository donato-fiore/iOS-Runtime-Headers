// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOANALYTICSPIPELINESHAREDSTATEDATA_H
#define GEOANALYTICSPIPELINESHAREDSTATEDATA_H

@class geo_isolater;
@protocol OS_dispatch_queue, OS_dispatch_source;


#import "GEOAnalyticsPipelineStateData.h"

@interface GEOAnalyticsPipelineSharedStateData : GEOAnalyticsPipelineStateData {
    geo_isolater *_placeIso;
    geo_isolater *_mapViewIso;
    geo_isolater *_mapSettingsIso;
    geo_isolater *_mapUIShownIso;
    geo_isolater *_userProfileIso;
    geo_isolater *_mapFeaturesIso;
    geo_isolater *_mapUserSettingsIso;
    geo_isolater *_routingSettingsIso;
    NSObject<OS_dispatch_queue> *_taskQueue;
    NSObject<OS_dispatch_source> *_periodicSettingsTimer;
}




+(id)sharedData;
-(BOOL)_hasActualFallbackMetro;
-(BOOL)_hasActualUserHomeCountry;
-(BOOL)_hasActualUserHomeMetro;
-(BOOL)_isHandoff;
-(BOOL)_isHandoffFromDeviceType:(id)arg0 ;
-(BOOL)hasMapLaunchData;
-(BOOL)hasMapRestoreData;
-(BOOL)hasMapsServerData;
-(BOOL)hasPlaceCardStateData;
-(BOOL)hasPlaceCard_PlaceActionDetails;
-(BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard;
-(BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard_TransitDepartureSequence;
-(BOOL)hasSuggestionsData;
-(BOOL)isIPadHandoff;
-(BOOL)isIPhoneHandoff;
-(BOOL)isMacHandoff;
-(BOOL)isWatchHandoff;
-(id)_metroForLatLng:(id)arg0 inCountry:(id)arg1 filterWithAllowList:(BOOL)arg2 ;
-(id)bestCurrentMetro;
-(id)bestUserHomeCountry;
-(id)bestUserHomeMetro;
-(id)init;
-(id)stateMapSettings;
-(id)stateMapUIShown;
-(id)stateMapsFeatures;
-(id)stateMapsUserSettings;
-(id)stateRoutingSettings;
-(int)_geoTransportModeForAPTransportMode:(int)arg0 ;
-(int)_geoVoiceGuidanceLevelFromAPVoiceGuidanceLevel:(int)arg0 ;
-(int)activeNavModeAsGEOTransportType;
-(int)layoutInfoAsGEOLayoutInfo;
-(int)layoutStyleAsGEOLayoutStyle;
-(int)locationPrecisionTypeAsGEOSettingsLocationType;
-(int)navVoiceVolumeAsGEONavVoiceVolume;
-(int)transportModeAsGEOTransportMode;
-(void)_handleTaskTimer;
-(void)_performSyncStateUpdateWithIsolator:(id)arg0 updateBlock:(id)arg1 ;
-(void)_performUserProfileStateOperation:(id)arg0 ;
-(void)_populateWithGEOTransitDepartureSequenceUsage:(id)arg0 ;
-(void)_populateWithGEOTransitPlaceCard:(id)arg0 ;
-(void)_resetTaskTimer;
-(void)_stopTaskTimer;
-(void)clearPlaceCardStateData;
-(void)clearSuggestionsData;
-(void)performMapFeaturesStateOperation:(id)arg0 ;
-(void)performMapSettingsStateOperation:(id)arg0 ;
-(void)performMapUIShownStateOperation:(id)arg0 ;
-(void)performMapUserSettingsStateOperation:(id)arg0 ;
-(void)performMapViewStateUpdate:(id)arg0 ;
-(void)performPlaceCardStateUpdate:(id)arg0 ;
-(void)performRoutingSettingsStateOperation:(id)arg0 ;
-(void)periodicSettingsHandler;
-(void)populateWithChildPlace:(id)arg0 timestamp:(CGFloat)arg1 resultIndex:(int)arg2 ;
-(void)populateWithPlace:(id)arg0 timestamp:(CGFloat)arg1 resultIndex:(int)arg2 ;
-(void)populateWithPlaceActionDetails:(id)arg0 ;
-(void)setCurrentMetro:(id)arg0 ;
-(void)setHasMapSettingsAvoidBusyRoads:(BOOL)arg0 ;
-(void)setHasMapSettingsAvoidHighways:(BOOL)arg0 ;
-(void)setHasMapSettingsAvoidHills:(BOOL)arg0 ;
-(void)setHasMapSettingsAvoidStairs:(BOOL)arg0 ;
-(void)setHasMapSettingsAvoidTolls:(BOOL)arg0 ;
-(void)setHasMapSettingsEBike:(BOOL)arg0 ;
-(void)setHasMapSettingsFindMyCarEnabled:(BOOL)arg0 ;
-(void)setHasMapSettingsHeadingEnabled:(BOOL)arg0 ;
-(void)setHasMapSettingsLabelEnabled:(BOOL)arg0 ;
-(void)setHasMapSettingsLocationPrecisionType:(BOOL)arg0 ;
-(void)setHasMapSettingsNavVolume:(BOOL)arg0 ;
-(void)setHasMapSettingsPauseSpokenAudioEnabled:(BOOL)arg0 ;
-(void)setHasMapSettingsSpeedLimitEnabled:(BOOL)arg0 ;
-(void)setHasMapSettingsTrafficEnabled:(BOOL)arg0 ;
-(void)setHasMapSettingsTransportMode:(BOOL)arg0 ;
-(void)setHasMapUiShownActiveNavMode:(BOOL)arg0 ;
-(void)setHasMapUiShownAqiShown:(BOOL)arg0 ;
-(void)setHasMapUiShownWeatherShown:(BOOL)arg0 ;
-(void)setMapSettingsAvoidBusyRoads:(BOOL)arg0 ;
-(void)setMapSettingsAvoidHighways:(BOOL)arg0 ;
-(void)setMapSettingsAvoidHills:(BOOL)arg0 ;
-(void)setMapSettingsAvoidStairs:(BOOL)arg0 ;
-(void)setMapSettingsAvoidTolls:(BOOL)arg0 ;
-(void)setMapSettingsEBike:(BOOL)arg0 ;
-(void)setMapSettingsFindMyCarEnabled:(BOOL)arg0 ;
-(void)setMapSettingsHeadingEnabled:(BOOL)arg0 ;
-(void)setMapSettingsLabelEnabled:(BOOL)arg0 ;
-(void)setMapSettingsLocationPrecisionType:(int)arg0 ;
-(void)setMapSettingsNavVolume:(int)arg0 ;
-(void)setMapSettingsPauseSpokenAudioEnabled:(BOOL)arg0 ;
-(void)setMapSettingsSpeedLimitEnabled:(BOOL)arg0 ;
-(void)setMapSettingsTrafficEnabled:(BOOL)arg0 ;
-(void)setMapSettingsTransportMode:(int)arg0 ;
-(void)setMapUiShownActiveNavMode:(int)arg0 ;
-(void)setMapUiShownAqiShown:(BOOL)arg0 ;
-(void)setMapUiShownWeatherShown:(BOOL)arg0 ;
-(void)setMapViewViewMode:(int)arg0 ;
-(void)setMeCardHomeCountry:(id)arg0 andHomeLocation:(id)arg1 ;
-(void)setNavVoiceGuidanceLevel:(int)arg0 forTransportMode:(int)arg1 ;
-(void)setUserProfileAvailableActions:(id)arg0 ;
-(void)setUserProfileUserIsLoggedIntoICloud:(BOOL)arg0 ;


@end


#endif