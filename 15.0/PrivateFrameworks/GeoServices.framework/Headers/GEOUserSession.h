// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(CGFloat)_currentTime;
-(CGFloat)_getPersisted15MoSessionStartTime;
-(NSUInteger)_get15moSessionConfiguredEpoch;
-(NSUInteger)_getPersisted15MoSessionDeviceEpoch;
-(id)_create15MonthSessionAtTime:(CGFloat)arg0 epoch:(NSUInteger)arg1 mapsFirstUseDate:(CGFloat)arg2 ;
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
-(void)_get15moSessionDataUsingTime:(CGFloat)arg0 currentEpoch:(NSUInteger)arg1 queue:(id)arg2 callback:(id)arg3 ;
-(void)_getPersisted15MoSessionDataOnQueue:(id)arg0 callback:(id)arg1 ;
-(void)_initializeLongSessionData;
-(void)_initializeShortAndNavData;
-(void)_mapsShortSessionValues:(id)arg0 ;
-(void)_processMapsAppDeletion;
-(void)_removePersisted15MoSessionDeviceEpoch;
-(void)_removePersisted15MoSessionId;
-(void)_removePersisted15MoSessionStartTime;
-(void)_resetShortSessionID;
-(void)_saveSharedSessionDataByAppId:(id)arg0 ;
-(void)_setPersisted15MoSessionData:(id)arg0 onQueue:(id)arg1 callback:(id)arg2 ;
-(void)_setPersistedLongSessionData:(id)arg0 ;
-(void)_setShortSessionId:(struct GEOSessionID )arg0 sessionCreateTime:(CGFloat)arg1 ;
-(void)_updateNavSessionIDAtTime:(CGFloat)arg0 ;
-(void)endNavigationSession;
-(void)fifteenMonthSessionValuesOnQueue:(id)arg0 valuesBlock:(id)arg1 ;
-(void)longSessionValuesForAppId:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
// -(void)mapsSessionEntityWithCallback:(id)arg0 shareSessionIDWithMaps:(unk)arg1 resetSession:(BOOL)arg2  ;
-(void)resetLongSessionValuesForAppId:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)setSharedMapsUserSessionEntity:(id)arg0 shareSessionIDWithMaps:(BOOL)arg1 ;
-(void)shortAndNavSessionValues:(id)arg0 ;
-(void)shortSessionValues:(id)arg0 ;
-(void)startNavigationSessionWithDirectionsID:(id)arg0 originalDirectionsID:(id)arg1 ;


@end


#endif