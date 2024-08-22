// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRHEALTHLITEDATACOLLECTOR_H
#define HDHRHEALTHLITEDATACOLLECTOR_H

@class HDProfile, HDHeartRateDataAggregator, HDTachycardiaDataAggregator, HDBradycardiaDataAggregator, HDDataCollectorConfiguration, HDDataCollectorState, CMCatherineFeeder, HDDeviceEntity, NSString;
@protocol HDDiagnosticObject, HDHealthDaemonReadyObserver, HDDataCollector, HDHeartRateDataCollector, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDHRHealthLiteDataCollector : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDDataCollector, HDHeartRateDataCollector>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _heartRateEnabledInPrivacy;
    int _privacyPreferencesNotificationToken;
    HDHeartRateDataAggregator *_heartRateAggregator;
    HDTachycardiaDataAggregator *_tachycardiaAggregator;
    HDBradycardiaDataAggregator *_bradycardiaAggregator;
    HDDataCollectorConfiguration *_heartRateCollectionConfiguration;
    HDDataCollectorConfiguration *_tachycardiaCollectionConfiguration;
    HDDataCollectorConfiguration *_bradycardiaCollectionConfiguration;
    HDDataCollectorState *_heartRateCollectionState;
    HDDataCollectorState *_tachycardiaCollectionState;
    HDDataCollectorState *_bradycardiaCollectionState;
    CMCatherineFeeder *_catherineFeeder;
    HDDeviceEntity *_localDeviceEntity;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_queue_hasHeartRateClientsWithoutWorkouts;
-(id)deviceForDataAggregator:(id)arg0 ;
-(id)diagnosticDescription;
-(id)identifierForDataAggregator:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)sourceForDataAggregator:(id)arg0 ;
-(void)_assertionManagerStateChanged:(id)arg0 ;
-(void)_queue_createHealthLiteManager;
-(void)_queue_privacyPreferencesDidChange;
-(void)_queue_updateAllCollectionTypes;
-(void)_queue_updateBradycardiaCollectionType;
-(void)_queue_updateHeartRateCollectionType;
-(void)_queue_updateTachycardiaCollectionType;
-(void)_registerPowerLogEvent:(id)arg0 ;
-(void)_setCatherineFeeder:(id)arg0 ;
-(void)_startObservingAssertionManagerChanges;
-(void)_startObservingCurrentWorkoutChanges;
-(void)_workoutManagerStateDidChange;
-(void)beginCollectionForDataAggregator:(id)arg0 lastPersistedSensorDatum:(id)arg1 ;
-(void)daemonReady:(id)arg0 ;
-(void)dataAggregator:(id)arg0 wantsCollectionWithConfiguration:(id)arg1 ;
-(void)dataCollector:(id)arg0 didCollectHeartRate:(id)arg1 device:(id)arg2 source:(id)arg3 ;
-(void)dealloc;


@end


#endif