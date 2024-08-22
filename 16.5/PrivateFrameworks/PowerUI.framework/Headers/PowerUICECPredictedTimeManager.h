// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWERUICECPREDICTEDTIMEMANAGER_H
#define POWERUICECPREDICTEDTIMEMANAGER_H

@class NSDate, NSString, NSUserDefaults, NSArray, _OSChargingPredictor;
@protocol PowerUISignalMonitorDelegate, _CDLocalContext, _DKKnowledgeQuerying, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PowerUIBatteryMitigationManager.h"
#import "PowerUITrialManager.h"

@interface PowerUICECPredictedTimeManager : NSObject <PowerUISignalMonitorDelegate>



@property (retain, nonatomic) PowerUIBatteryMitigationManager *batteryMitigationManager; // ivar: _batteryMitigationManager
@property (retain, nonatomic) NSObject<_CDLocalContext> *context; // ivar: _context
@property (retain, nonatomic) NSDate *deadline; // ivar: _deadline
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *debugStatus; // ivar: _debugStatus
@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSDate *modelDeadline; // ivar: _modelDeadline
@property (retain, nonatomic) NSArray *monitors; // ivar: _monitors
@property (retain, nonatomic) _OSChargingPredictor *pluggedInPredictor; // ivar: _pluggedInPredictor
@property (nonatomic) CGFloat predictionLeeway; // ivar: _predictionLeeway
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (nonatomic) BOOL tBypassSignals; // ivar: _tBypassSignals
@property (retain, nonatomic) NSDate *tModelPredition; // ivar: _tModelPredition
@property (retain, nonatomic) PowerUITrialManager *trialManager; // ivar: _trialManager


+(id)managerWithKnowledgeStore:(id)arg0 withContextStore:(id)arg1 withHandler:(id)arg2 ;
-(BOOL)hasSufficientTimeForFullCharge;
-(BOOL)testOverrideForSignalMonitors;
-(CGFloat)leewayForConfidence:(CGFloat)arg0 ;
-(CGFloat)timeToFullChargeFromBatteryLevel:(NSUInteger)arg0 ;
-(id)initWithKnowledgeStore:(id)arg0 withContextStore:(id)arg1 withHandler:(id)arg2 ;
-(id)predictedUnplugTime;
-(id)testingOverrideForPredictedUnplugTime;
-(void)debug;
-(void)monitor:(id)arg0 maySuggestNewFullChargeDeadline:(id)arg1 ;
-(void)resetState;
-(void)startAllMonitoring;
-(void)stopAllMonitoring;


@end


#endif