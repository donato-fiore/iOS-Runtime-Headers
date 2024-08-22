// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWERUICECMANAGER_H
#define POWERUICECMANAGER_H

@class NSDate, NSString, NSUserDefaults, NSNumber, NSDictionary;
@protocol PowerUINotificationManagerClient, PowerUISignalMonitor, _CDLocalContext, _DKKnowledgeQuerying, OS_os_log, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PowerUIBDCDataManager.h"
#import "PowerUIChargingController.h"
#import "PowerUICECPredictedTimeManager.h"
#import "PowerUINotificationManager.h"

@interface PowerUICECManager : NSObject <PowerUINotificationManagerClient, PowerUISignalMonitor>



@property (retain, nonatomic) PowerUIBDCDataManager *bdcDataManager; // ivar: _bdcDataManager
@property (retain, nonatomic) NSDate *cecTemporarilyDisabledDate; // ivar: _cecTemporarilyDisabledDate
@property (retain, nonatomic) PowerUIChargingController *chargingController; // ivar: _chargingController
@property (retain, nonatomic) NSObject<_CDLocalContext> *context; // ivar: _context
@property (nonatomic) NSUInteger currentPhase; // ivar: _currentPhase
@property (nonatomic) NSUInteger currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *debugStatus; // ivar: _debugStatus
@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayedFirstTimeNotification; // ivar: _displayedFirstTimeNotification
@property (nonatomic) BOOL firstChargingEvaluation; // ivar: _firstChargingEvaluation
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCECEnabled; // ivar: _isCECEnabled
@property (nonatomic) BOOL isCECTemporarilyDisabled; // ivar: _isCECTemporarilyDisabled
@property (nonatomic) BOOL isChargingPaused; // ivar: _isChargingPaused
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSDate *pauseChargingCheckDate; // ivar: _pauseChargingCheckDate
@property (retain, nonatomic) NSNumber *pausedMaxBatteryLevel; // ivar: _pausedMaxBatteryLevel
@property (retain, nonatomic) NSDictionary *phaseDescriptions; // ivar: _phaseDescriptions
@property (retain, nonatomic) NSDate *pluggedInDate; // ivar: _pluggedInDate
@property (retain, nonatomic) PowerUICECPredictedTimeManager *pluggedInTimeManager; // ivar: _pluggedInTimeManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL shouldSupportCEC; // ivar: _shouldSupportCEC
@property (readonly) Class superclass;
@property (nonatomic) BOOL tOverrideActiveCheck; // ivar: _tOverrideActiveCheck
@property (nonatomic) CGFloat tPluggedInWaitInterval; // ivar: _tPluggedInWaitInterval
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (retain, nonatomic) PowerUINotificationManager *unManager; // ivar: _unManager
@property (retain, nonatomic) NSDate *userDeadline; // ivar: _userDeadline


+(BOOL)isCECSupported;
+(id)fetchEstimatedCountryCode;
+(id)manager;
+(id)monitorWithDelegate:(id)arg0 ;
-(BOOL)didDischargeWithBatteryLevel:(NSInteger)arg0 ;
-(BOOL)evaluateEngagementAndSetup;
-(BOOL)hasInfluencedCharging;
-(BOOL)isActiveRegion;
-(BOOL)isEnabled;
-(BOOL)isEngaged;
-(BOOL)shouldEngageCEC;
-(NSUInteger)cecState;
-(NSUInteger)signalID;
-(id)dateFormatter;
-(id)defaultDateToDisableUntilGivenDate:(id)arg0 ;
-(id)init;
-(id)requiredFullChargeDate;
-(id)sessionEndCECAnalytics;
-(id)status;
-(void)analyticsCECEngagementEvaluation:(BOOL)arg0 byPredictedTime:(BOOL)arg1 byGridMix:(BOOL)arg2 ;
-(void)analyticsCECSessionChargingState:(BOOL)arg0 ;
-(void)clearAnalyticsDate;
-(void)evaluatePausingNow;
-(void)handleCallback:(id)arg0 ;
-(void)handleChargeUp;
-(void)handleDisengagement;
-(void)handleNewDebugState:(id)arg0 ;
-(void)handleNotificationResponse:(id)arg0 ;
-(void)handlePowerUICECStateChange:(NSUInteger)arg0 withHandler:(id)arg1 ;
-(void)loadState;
-(void)monitorBatteryNotifications;
-(void)promptBDCToQueryCurrentState;
-(void)recordAnalytics;
-(void)recordPowerLogEvent;
-(void)refreshShouldSupportCEC;
-(void)registerTimer;
-(void)resetState;
-(void)setTemporarilyDisabled:(BOOL)arg0 from:(id)arg1 ;
-(void)setupTempDisabledCheckAfterInterval:(CGFloat)arg0 ;
-(void)startMonitoring;
-(void)stopMonitoring;
-(void)unregisterTimer;
-(void)updatePhaseFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;


@end


#endif