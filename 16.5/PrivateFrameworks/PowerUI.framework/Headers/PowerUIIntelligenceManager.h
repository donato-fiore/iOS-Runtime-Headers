// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWERUIINTELLIGENCEMANAGER_H
#define POWERUIINTELLIGENCEMANAGER_H

@class _OSChargingPredictor, NSString, NSDictionary;
@protocol _CDContext, OS_os_log, _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>

#import "PowerUINotificationManager.h"
#import "PowerUITrialManager.h"

@interface PowerUIIntelligenceManager : NSObject

@property (retain, nonatomic) _OSChargingPredictor *chargingPredictor; // ivar: _chargingPredictor
@property (retain, nonatomic) NSObject<_CDContext> *context; // ivar: _context
@property (retain, nonatomic) NSString *defaultsDomain; // ivar: _defaultsDomain
@property (retain, nonatomic) NSDictionary *lastPluginPredictionInfo; // ivar: _lastPluginPredictionInfo
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) PowerUINotificationManager *notificationManager; // ivar: _notificationManager
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *store; // ivar: _store
@property (retain, nonatomic) PowerUITrialManager *trialManager; // ivar: _trialManager


-(id)initWithDefaultsDomain:(id)arg0 withContextStore:(id)arg1 withKnowledgeStore:(id)arg2 withTrialManager:(id)arg3 ;
-(id)queryPredictedPlugoutDate;
-(id)ttrURLforBadPredictionsWithStateDictionary:(id)arg0 ;
-(void)handleCallback;
-(void)postAnalyticsEventForNewEventTypeWithPredictedDurationMinutes:(NSInteger)arg0 andActualDurationMinutes:(NSInteger)arg1 andConfidence:(CGFloat)arg2 andWasWireless:(BOOL)arg3 andPredictionScheme:(id)arg4 ;
-(void)postAnalyticsEventForOldEventTypeWithPredictedDurationMinutes:(NSInteger)arg0 andActualDurationMinutes:(NSInteger)arg1 ;
-(void)postPluginNotificationWithPredictorOutput:(id)arg0 andError:(id)arg1 andState:(id)arg2 ;
-(void)removePluginNotification;


@end


#endif