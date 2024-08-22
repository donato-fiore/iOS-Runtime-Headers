// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLLOCATIONINTERNALCLIENT_COREMOTION_H
#define CLLOCATIONINTERNALCLIENT_COREMOTION_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface CLLocationInternalClient_CoreMotion : NSObject {
    NSXPCConnection *_connection;
}




+(id)sharedServiceClient;
-(*void)getLocationDefaultForKey:(struct __CFString *)arg0 ;
-(BOOL)checkAndExerciseAuthorizationForBundleID:(id)arg0 orBundlePath:(id)arg1 services:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteInterestZoneWithId:(id)arg0 registeredForBundleId:(id)arg1 orBundlePath:(id)arg2 error:(*id)arg3 ;
-(BOOL)registerCircularInterestZoneWithId:(id)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 radius:(CGFloat)arg3 serviceMaskOperator:(int)arg4 provenanceType:(int)arg5 forBundleId:(id)arg6 orBundlePath:(id)arg7 error:(*id)arg8 ;
-(BOOL)registerPhenolicInterestZoneWithId:(id)arg0 phenolicLocation:(int)arg1 serviceMaskOperator:(int)arg2 provenanceType:(int)arg3 forBundleId:(id)arg4 orBundlePath:(id)arg5 error:(*id)arg6 ;
-(BOOL)setRelevance:(BOOL)arg0 forInterestZoneWithId:(id)arg1 registeredForBundleId:(id)arg2 orBundlePath:(id)arg3 error:(*id)arg4 ;
-(BOOL)startStopAdvertisingBeacon:(id)arg0 power:(id)arg1 ;
-(CGFloat)modifyOrSetAuthorizationTime:(CGFloat)arg0 forBundleID:(id)arg1 orBundlePath:(id)arg2 ;
-(id)applyArchivedAuthorizationDecisions:(id)arg0 ;
-(id)connection;
-(id)getAccessoryMotionSensorLogs;
-(id)getArchivedAuthorizationDecisionsWithError:(*id)arg0 ;
-(id)getMotionSensorLogs;
-(id)getOdometryBatchedLocations;
-(id)getPipelinedCache;
-(id)getTemporaryAuthorizationStatusForBundleId:(id)arg0 orBundlePath:(id)arg1 error:(*id)arg2 ;
-(id)setAuthorizationPromptMapDisplayEnabled:(unsigned char)arg0 ;
-(id)setTemporaryAuthorizationStatusForBundleId:(id)arg0 orBundlePath:(id)arg1 statusData:(id)arg2 ;
-(id)synchronousRemoteObject;
-(id)timeZoneAtLocation:(id)arg0 ;
-(id)triggerExpiredAuthorizationPurgeOnClientManager;
-(int)getAccessoryPASCDTransmissionState;
-(int)getAccessoryTypeBitSet;
-(int)getStatusBarIconState;
-(struct __CFArray *)copyActivityAlarms;
-(struct __CFArray *)copyGnssBandsInUse;
-(struct __CFArray *)copyTechnologiesInUse;
-(struct __CFDictionary *)copyActiveClientsUsingLocation;
-(struct __CFDictionary *)copyAppsUsingLocation;
-(struct __CFDictionary *)copyMonitoredRegionsForBundleIdentifier:(struct __CFString *)arg0 orBundlePath:(struct __CFString *)arg1 ;
-(struct __CFDictionary *)copyNearbyAssetSettings;
-(struct __CFDictionary *)copyNearbyAssetSettingsOfAccessoryFile:(struct __CFString *)arg0 ;
-(struct __CFDictionary *)copyZaxisStats;
-(struct __CFString *)copyMicroLocationInternalVersion;
-(unsigned char)clearLocationAuthorizations;
-(unsigned char)compassCalibrationDatabaseGetBias:(struct ? *)arg0 magneticField:(struct ? )arg1 acceleration:(struct ? )arg2 ;
-(unsigned char)compassCalibrationDatabaseSetBias:(struct ? )arg0 magneticField:(struct ? )arg1 level:(int)arg2 magnitude:(float)arg3 inclination:(float)arg4 ;
-(unsigned char)configure:(struct ? )arg0 ;
-(unsigned char)copyLastLog;
-(unsigned char)deleteCurrentEmergencyLocationAsset;
-(unsigned char)displayStatistics;
-(unsigned char)dumpLogs:(struct __CFString *)arg0 ;
-(unsigned char)getAuthorizationPromptMapDisplayEnabled:(char *)arg0 ;
-(unsigned char)getAuthorizationStatus:(*int)arg0 forBundleID:(struct __CFString *)arg1 orBundlePath:(struct __CFString *)arg2 ;
-(unsigned char)getAuthorizationStatusForApp:(*int)arg0 withAuditToken:(struct ? )arg1 ;
-(unsigned char)getControlPlaneStatusReportClear:(int)arg0 startTime:(*CGFloat)arg1 endTime:(*CGFloat)arg2 latitude:(*CGFloat)arg3 longitude:(*CGFloat)arg4 altitude:(*CGFloat)arg5 accuracy:(*CGFloat)arg6 status:(*unsigned int)arg7 ;
-(unsigned char)getEmergencyLocationSettingsCompatibilityVersion:(*int)arg0 andContentVersion:(*int)arg1 ;
-(unsigned char)getGestureServiceEnabled:(char *)arg0 ;
-(unsigned char)getGroundAltitudeForBundleID:(struct __CFString *)arg0 orBundlePath:(struct __CFString *)arg1 location:(id)arg2 groundAltitude:(struct ? *)arg3 ;
-(unsigned char)getGyroCalibrationDatabaseBiasFit:(struct ? *)arg0 atTemperature:(float)arg1 ;
-(unsigned char)getGyroCalibrationDatabaseNumTemperatures:(*int)arg0 ;
-(unsigned char)getIncidentalUseMode:(*int)arg0 forBundleID:(struct __CFString *)arg1 orBundlePath:(struct __CFString *)arg2 ;
-(unsigned char)getLocationForBundleID:(struct __CFString *)arg0 orBundlePath:(struct __CFString *)arg1 dynamicAccuracyReductionEnabled:(unsigned char)arg2 allowsAlteredAccessoryLocations:(unsigned char)arg3 location:(struct ? *)arg4 ;
-(unsigned char)getLocationServicesEnabled:(char *)arg0 ;
-(unsigned char)getPrecisionPermission:(char *)arg0 forBundleID:(struct __CFString *)arg1 orBundlePath:(struct __CFString *)arg2 ;
-(unsigned char)getPrivateMode;
-(unsigned char)getStatusBarIconEnabled:(*BOOL)arg0 forEntityClass:(unsigned int)arg1 ;
-(unsigned char)gyroCalibrationDatabaseSupportsMiniCalibration:(*int)arg0 ;
-(unsigned char)gyroCalibrationDatabaseWipe;
-(unsigned char)insertGyroCalibrationDatabaseBiasEstimateIfValid:(struct ? )arg0 temperature:(float)arg1 variance:(struct ? )arg2 timestamp:(CGFloat)arg3 ;
-(unsigned char)performMigration;
-(unsigned char)pingDaemon;
-(unsigned char)setAuthorizationStatus:(unsigned char)arg0 withCorrectiveCompensation:(int)arg1 forBundleID:(struct __CFString *)arg2 orBundlePath:(struct __CFString *)arg3 ;
-(unsigned char)setAuthorizationStatusByType:(int)arg0 withCorrectiveCompensation:(int)arg1 andZoneIdentifier:(struct __CFString *)arg2 andSubIdentityIdentifier:(struct __CFString *)arg3 forBundleID:(struct __CFString *)arg4 orBundlePath:(struct __CFString *)arg5 ;
-(unsigned char)setBackgroundIndicatorForBundleID:(struct __CFString *)arg0 orBundlePath:(struct __CFString *)arg1 enabled:(unsigned char)arg2 ;
-(unsigned char)setIncidentalUseMode:(int)arg0 forBundleID:(struct __CFString *)arg1 orBundlePath:(struct __CFString *)arg2 ;
-(unsigned char)setLocationButtonUseMode:(int)arg0 forBundleID:(struct __CFString *)arg1 orBundlePath:(struct __CFString *)arg2 ;
-(unsigned char)setStatusBarIconEnabled:(BOOL)arg0 forEntityClass:(unsigned int)arg1 ;
-(unsigned char)setTemporaryAuthorizationGranted:(unsigned char)arg0 forBundleID:(struct __CFString *)arg1 orBundlePath:(struct __CFString *)arg2 orAuditToken:(struct ? )arg3 byLocationButton:(unsigned char)arg4 voiceInteractionEnabled:(unsigned char)arg5 ;
-(unsigned char)shouldDisplayEEDUI;
-(unsigned char)shutdownDaemon;
-(unsigned char)timeSyncMachTimeStamp:(*NSUInteger)arg0 oscarTimeStamp:(*NSUInteger)arg1 ;
-(unsigned char)updateCorrectiveCompensationChoiceForOutstandingPrompt:(int)arg0 ;
-(void)clearLocationAuthorizationForBundleId:(struct __CFString *)arg0 orBundlePath:(struct __CFString *)arg1 ;
-(void)notifyPassKitPayment:(id)arg0 transaction:(id)arg1 info:(id)arg2 ;
-(void)notifyWeatherForecast:(id)arg0 airQualityConditions:(id)arg1 hourlyForecasts:(id)arg2 dailyForecasts:(id)arg3 latitude:(CGFloat)arg4 longitude:(CGFloat)arg5 ;
-(void)setGestureServiceEnabled:(unsigned char)arg0 ;
-(void)setLocationDefaultForKey:(struct __CFString *)arg0 value:(*void)arg1 ;
-(void)setLocationServicesEnabled:(unsigned char)arg0 ;
-(void)setMapMatchingRouteHint:(struct ? *)arg0 count:(int)arg1 routingType:(int)arg2 stepType:(int)arg3 ;
-(void)setPrivateMode:(unsigned char)arg0 ;


@end


#endif