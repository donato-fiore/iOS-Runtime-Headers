// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POWERUICECMANAGER_H
#define POWERUICECMANAGER_H

@class NSString, NSUserDefaults, NSDate, NSDictionary;
@protocol PowerUINotificationManagerClient, PowerUISignalMonitor, _CDLocalContext, _DKKnowledgeQuerying, OS_os_log, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PowerUIChargingController.h"
#import "PowerUICECPredictedTimeManager.h"
#import "PowerUINotificationManager.h"

@interface PowerUICECManager : NSObject <PowerUINotificationManagerClient, PowerUISignalMonitor>



@property (retain, nonatomic) PowerUIChargingController *chargingController; // ivar: _chargingController
@property (retain, nonatomic) NSObject<_CDLocalContext> *context; // ivar: _context
@property (nonatomic) NSUInteger currentPhase; // ivar: _currentPhase
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isChargingPaused; // ivar: _isChargingPaused
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (nonatomic) BOOL obcNotificationPresent; // ivar: _obcNotificationPresent
@property (retain, nonatomic) NSDate *pauseChargingCheckDate; // ivar: _pauseChargingCheckDate
@property (retain, nonatomic) NSDictionary *phaseDescriptions; // ivar: _phaseDescriptions
@property (retain, nonatomic) PowerUICECPredictedTimeManager *pluggedInTimeManager; // ivar: _pluggedInTimeManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (nonatomic) BOOL tOverrideActiveCheck; // ivar: _tOverrideActiveCheck
@property (nonatomic) CGFloat tPluggedInWaitInterval; // ivar: _tPluggedInWaitInterval
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (retain, nonatomic) PowerUINotificationManager *unManager; // ivar: _unManager
@property (retain, nonatomic) NSDate *userDeadline; // ivar: _userDeadline


+(BOOL)isCECSupported;
+(id)manager;
+(id)monitorWithDelegate:(id)arg0 ;
-(BOOL)evaluateEngagementAndSetup;
-(BOOL)isActiveRegion;
-(NSUInteger)signalID;
-(id)init;
-(id)requiredFullChargeDate;
-(id)status;
-(void)evaluatePausingNow;
-(void)handleCallback:(id)arg0 ;
-(void)handleChargeUp;
-(void)handleDisengagement;
-(void)handleNotificationResponse:(id)arg0 ;
-(void)handlePowerUIStateChange:(NSUInteger)arg0 ;
-(void)loadState;
-(void)monitorBatteryNotifications;
-(void)resetState;
-(void)startMonitoring;
-(void)stopMonitoring;
-(void)updatePhaseFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;


@end


#endif