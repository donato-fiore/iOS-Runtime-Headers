// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCOREDUETAGENT_H
#define PLCOREDUETAGENT_H

@class PLAgent, PLNSNotificationOperatorComposition, _CDInBedDetector, PLXPCListenerOperatorComposition;



@interface PLCoreDuetAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification; // ivar: _dailyTaskNotification
@property (retain) _CDInBedDetector *inBedDetector; // ivar: _inBedDetector
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionListener; // ivar: _inactivityPredictionListener


+(id)entryEventIntervalDefinitionInBedDetection;
+(id)entryEventIntervalDefinitionInactivityPrediction;
+(id)entryEventIntervalDefinitions;
+(void)load;
-(id)init;
-(void)handleInBedDetection:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)log;
-(void)logEventIntervalInBedDetection:(id)arg0 ;
-(void)logEventIntervalInactivityPrediction:(id)arg0 ;
-(void)registerForDailyNotification;
-(void)registerForTaskingNotification:(id)arg0 ;


@end


#endif