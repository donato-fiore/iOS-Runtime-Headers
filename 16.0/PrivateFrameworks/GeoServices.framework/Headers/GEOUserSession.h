// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOUSERSESSION_H
#define GEOUSERSESSION_H

@class NSData, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOUserSessionEntity.h"

@interface GEOUserSession : NSObject {
    GEOSessionID _shortSessionID;
    CGFloat _shortSessionStartTime;
    os_unfair_lock_s _shortNavSessionLock;
    BOOL _shortNavSessionNeedsInit;
    int _shortSessionChangedToken;
    NSData *_navigationDirectionsID;
    GEOSessionID _navigationSessionID;
    CGFloat _navigationSessionStartTime;
    NSData *_previousNavigationDirectionsID;
    GEOSessionID _previousNavigationSessionID;
    CGFloat _previousNavigationSessionStartTime;
    CGFloat _previousNavigationSessionEndTime;
    os_unfair_lock_s _longSessionLock;
    NSMutableDictionary *_longSessionByAppID;
    BOOL _longSessionNeedsInit;
    GEOSessionID _zeroSessionID;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (copy, nonatomic) GEOUserSessionEntity *mapsShortSession;
@property (copy, nonatomic) GEOUserSessionEntity *mapsUserSessionEntity;
@property (readonly, nonatomic) GEOSessionID navSessionID;
@property (nonatomic) BOOL shareSessionWithMaps; // ivar: _shareSessionWithMaps


+(BOOL)initialShareSessionWithMaps;
+(id)highBytesStringFromSession:(struct GEOSessionID )arg0 ;
+(id)lowBytesStringFromSession:(struct GEOSessionID )arg0 ;
+(id)mapsUnifiedBundleId;
+(id)sharedInstance;
+(struct GEOSessionID )_newSessionId;
+(void)setInitialShareSessionWithMaps:(BOOL)arg0 ;
-(BOOL)_15moSyncDeleteExpiredSessionsEnabled;
-(BOOL)_15moSyncEnabled;
-(BOOL)_getPreSyncDeviceSessionDataHasMigrated;
-(BOOL)_hasGoodTimeSync;
-(BOOL)_hasMapsUserStartDate;
-(BOOL)_updateNavSessionIDAtTime:(CGFloat)arg0 ;
-(BOOL)fifteenMonthUserSessionInitialized;
-(BOOL)shouldSuppressSession;
-(CGFloat)_currentTime;
-(CGFloat)_get15moUserSessionCreateDateInUse;
-(CGFloat)_getMapsUserStartDate;
-(CGFloat)_getPersisted15MoSessionStartTime;
-(CGFloat)_preferredSessionStartDateDerivedFromMapsUserStartDate:(CGFloat)arg0 currentDate:(CGFloat)arg1 ;
-(NSUInteger)_get15moDeviceSessionConfiguredEpoch;
-(NSUInteger)_get15moUserSessionConfiguredEpoch;
-(NSUInteger)_getPersisted15MoSessionDeviceEpoch;
-(id)_get15moDeviceRawSessionData;
-(id)_get15moDeviceSessionData;
-(id)_get15moUserPresyncDeviceRawSessionData;
-(id)_get15moUserPresyncDeviceSessionData;
-(id)_get15moUserPresyncUserRawSessionData;
-(id)_get15moUserPresyncUserSessionData;
-(id)_getPersisted15MoSessionIdPBData;
-(id)_getPersistedLongSessionData;
-(id)_pbDataForSessionID:(struct GEOSessionID )arg0 ;
-(id)_sharedSessionDataByAppId;
-(id)init;
-(id)longSessionAppIdForActualAppId:(id)arg0 ;
-(struct GEOSessionID )_getPersisted15MoSessionId;
-(struct GEOSessionID )_sessionIDFromPBData:(id)arg0 ;
-(void)_accessLongSessionValuesInBlock:(id)arg0 ;
-(void)_currentTimeResult:(id)arg0 ;
-(void)_generateNewNavSessionIDAtTime:(CGFloat)arg0 ;
-(void)_get15MoUserSessionDataOnQueue:(id)arg0 callback:(id)arg1 ;
-(void)_initializeLongSessionData;
-(void)_initializeShortAndNavData;
-(void)_mapsShortSessionValues:(id)arg0 ;
-(void)_mapsSyncGet15MoSessionDataWithCompletion:(id)arg0 ;
-(void)_mapsSyncRemovePersisted15MoSessionData:(id)arg0 completion:(id)arg1 ;
-(void)_mapsSyncSave15MoSessionData:(id)arg0 completion:(id)arg1 ;
-(void)_migrate15moDeviceSessionComponentsToSessionData;
-(void)_migrate15moDeviceSessionData;
-(void)_migrate15moDeviceSessionDataToUserSessionPreSyncData;
-(void)_processMapsAppDeletion;
-(void)_remove15MoUserSessionData:(id)arg0 onQueue:(id)arg1 callback:(id)arg2 ;
-(void)_remove15moUserPresyncDeviceSessionData;
-(void)_removePersisted15MoSessionDeviceEpoch;
-(void)_removePersisted15MoSessionId;
-(void)_removePersisted15MoSessionStartTime;
-(void)_removePreSync15MoData;
-(void)_resetShortSessionID;
-(void)_saveSharedSessionDataByAppId:(id)arg0 ;
-(void)_set15MoUserSessionData:(id)arg0 onQueue:(id)arg1 callback:(id)arg2 ;
-(void)_set15moDeviceRawSessionData:(id)arg0 ;
-(void)_set15moDeviceSessionData:(id)arg0 ;
-(void)_set15moUserPresyncDeviceRawSessionData:(id)arg0 ;
-(void)_set15moUserPresyncDeviceSessionData:(id)arg0 ;
-(void)_set15moUserPresyncUserRawSessionData:(id)arg0 ;
-(void)_set15moUserPresyncUserSessionData:(id)arg0 ;
-(void)_set15moUserSessionCreateDateInUse:(CGFloat)arg0 ;
-(void)_setMapsUserStartDate:(CGFloat)arg0 ;
-(void)_setPersisted15MoSessionStartTime:(CGFloat)arg0 ;
-(void)_setPersistedLongSessionData:(id)arg0 ;
-(void)_setPreSyncDeviceSessionDataHasMigrated:(BOOL)arg0 ;
-(void)_setShortSessionId:(struct GEOSessionID )arg0 sessionCreateTime:(CGFloat)arg1 ;
-(void)endNavigationSession;
-(void)fifteenMonthDeviceSessionValues:(id)arg0 ;
-(void)fifteenMonthUserSessionValuesOnQueue:(id)arg0 valuesBlock:(id)arg1 ;
-(void)longSessionValuesForAppId:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
// -(void)mapsSessionEntityWithCallback:(id)arg0 shareSessionIDWithMaps:(unk)arg1 resetSession:(BOOL)arg2  ;
-(void)pauseNavigationWithRouteID:(id)arg0 ;
-(void)resetLongSessionValuesForAppId:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)resumeNavigationWithRouteID:(id)arg0 ;
-(void)setSharedMapsUserSessionEntity:(id)arg0 shareSessionIDWithMaps:(BOOL)arg1 ;
-(void)shortAndNavSessionValues:(id)arg0 ;
-(void)shortSessionValues:(id)arg0 ;
-(void)startNavigationSessionWithDirectionsID:(id)arg0 originalDirectionsID:(id)arg1 ;
-(void)startNavigationWithRouteID:(id)arg0 isEVRoute:(BOOL)arg1 ;
-(void)terminateNavigationWithRouteID:(id)arg0 ;


@end


#endif