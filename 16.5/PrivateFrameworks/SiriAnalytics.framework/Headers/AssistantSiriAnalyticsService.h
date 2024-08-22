// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASSISTANTSIRIANALYTICSSERVICE_H
#define ASSISTANTSIRIANALYTICSSERVICE_H

@protocol SiriAnalyticsSensitiveConditionsObserverDelegate, OS_dispatch_queue, SiriAnalyticsServiceHostDelegate, SiriAnalyticsObservableMessages;

#import <Foundation/Foundation.h>

#import "SiriAnalyticsXPCServiceListener.h"
#import "SiriAnalyticsMessageProcessingStrategy.h"
#import "SiriAnalyticsLargeMessageStorage.h"
#import "SiriAnalyticsMessageObserverStream.h"
#import "SiriAnalyticsWhiteRose.h"
#import "SiriAnalyticsMessageResolutionPipeline.h"
#import "AssistantSiriAnalyticsClockWatcher.h"
#import "SiriAnalyticsPreferences.h"
#import "AssistantSiriAnalyticsMessageTailing.h"
#import "SiriAnalyticsInternalTelemetry.h"
#import "SiriAnalyticsSensitiveConditionsObservers.h"
#import "SiriAnalyticsMetastore.h"
#import "SiriAnalyticsPreprocessor.h"
#import "SiriAnalyticsFeatureFlags.h"
#import "SiriAnalyticsFBFStorage.h"

@interface AssistantSiriAnalyticsService : NSObject <SiriAnalyticsSensitiveConditionsObserverDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    SiriAnalyticsXPCServiceListener *_siriAnalyticsListener;
    SiriAnalyticsMessageProcessingStrategy *_messageProcessingStrategy;
    SiriAnalyticsLargeMessageStorage *_largeMessageStorage;
    SiriAnalyticsMessageObserverStream *_postTransformStream;
    SiriAnalyticsWhiteRose *_whiteRose;
    SiriAnalyticsMessageResolutionPipeline *_messageResolutionPipeline;
    AssistantSiriAnalyticsClockWatcher *_clockWatcher;
    SiriAnalyticsPreferences *_preferences;
    AssistantSiriAnalyticsMessageTailing *_messageTailing;
    SiriAnalyticsInternalTelemetry *_internalTelemetry;
    id<SiriAnalyticsServiceHostDelegate> *_delegate;
    SiriAnalyticsSensitiveConditionsObservers *_sensitiveConditionsObservers;
    SiriAnalyticsMetastore *_metastore;
    SiriAnalyticsPreprocessor *_preprocessor;
    SiriAnalyticsFeatureFlags *_featureFlags;
    SiriAnalyticsFBFStorage *_fbf;
}


@property (readonly) NSObject<SiriAnalyticsObservableMessages> *postTransformationStream;


-(BOOL)_analyticsEnabled;
-(id)_applyTransformationsToMessage:(id)arg0 ;
-(id)_applyTransformationsToMessages:(id)arg0 ;
-(id)_getPreprocessor;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(id)initWithQueue:(id)arg0 prefs:(id)arg1 localStorageProvider:(id)arg2 largeMessageStorage:(id)arg3 messageStore:(id)arg4 delegate:(id)arg5 ;
-(void)handler:(id)arg0 fetchLogicalClocks:(id)arg1 ;
-(void)handler:(id)arg0 fetchStateForPluginName:(id)arg1 completion:(id)arg2 ;
-(void)handler:(id)arg0 largeMessageReceivedWithPath:(id)arg1 messageWrapper:(id)arg2 completion:(id)arg3 ;
-(void)handler:(id)arg0 messagesReceived:(id)arg1 ;
-(void)handler:(id)arg0 resetLogicalClockWithCompletion:(id)arg1 ;
-(void)handler:(id)arg0 saveState:(id)arg1 forPluginName:(id)arg2 completion:(id)arg3 ;
-(void)handler:(id)arg0 sensitiveCondition:(int)arg1 endedAt:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)handler:(id)arg0 sensitiveCondition:(int)arg1 startedAt:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)handler:(id)arg0 unorderedMessagesReceived:(id)arg1 ;
-(void)handler:(id)arg0 unresolvedMessagesReceived:(id)arg1 ;
-(void)handler:(id)arg0 vendSandboxExtensionWithResource:(NSInteger)arg1 readonly:(BOOL)arg2 completion:(id)arg3 ;
-(void)registerMessageResolver:(id)arg0 ;
-(void)registerSensitiveConditionsObserver:(id)arg0 ;
-(void)sensitiveCondition:(int)arg0 endedAt:(NSUInteger)arg1 ;
-(void)sensitiveCondition:(int)arg0 startedAt:(NSUInteger)arg1 ;
-(void)sensitiveConditionRangesForBootSessionUUIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif