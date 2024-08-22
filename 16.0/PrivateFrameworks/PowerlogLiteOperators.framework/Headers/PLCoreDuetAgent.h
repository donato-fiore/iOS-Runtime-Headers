// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCOREDUETAGENT_H
#define PLCOREDUETAGENT_H

@class PLAgent, PLNSNotificationOperatorComposition, _CDInBedDetector, PLXPCListenerOperatorComposition;



@interface PLCoreDuetAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification; // ivar: _dailyTaskNotification
@property (retain) _CDInBedDetector *inBedDetector; // ivar: _inBedDetector
@property (retain) PLXPCListenerOperatorComposition *inactivityFeaturesListener; // ivar: _inactivityFeaturesListener
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionInterruptionListener; // ivar: _inactivityPredictionInterruptionListener
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionListener; // ivar: _inactivityPredictionListener
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionQueryListener; // ivar: _inactivityPredictionQueryListener
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionTimelineListener; // ivar: _inactivityPredictionTimelineListener


+(id)entryEventForwardDefinitionInactivityFeatures;
+(id)entryEventForwardDefinitionInactivityPredictionInterruption;
+(id)entryEventForwardDefinitionInactivityPredictionQuery;
+(id)entryEventForwardDefinitionInactivityPredictionTimeline;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitionInBedDetection;
+(id)entryEventIntervalDefinitionInactivityPrediction;
+(id)entryEventIntervalDefinitions;
+(void)load;
-(id)init;
-(void)handleInBedDetection:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)log;
-(void)logEventForwardInactivityFeatures:(id)arg0 ;
-(void)logEventForwardInactivityPredictionInterruption:(id)arg0 ;
-(void)logEventForwardInactivityPredictionQuery:(id)arg0 ;
-(void)logEventForwardInactivityPredictionTimeline:(id)arg0 ;
-(void)logEventIntervalInBedDetection:(id)arg0 ;
-(void)logEventIntervalInactivityPrediction:(id)arg0 ;
-(void)registerForDailyNotification;
-(void)registerForTaskingNotification:(id)arg0 ;


@end


#endif