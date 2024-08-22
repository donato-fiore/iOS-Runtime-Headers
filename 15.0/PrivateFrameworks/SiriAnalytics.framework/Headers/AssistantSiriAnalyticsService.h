// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASSISTANTSIRIANALYTICSSERVICE_H
#define ASSISTANTSIRIANALYTICSSERVICE_H

@protocol OS_dispatch_queue, SiriAnalyticsMessageStorage, SiriAnalyticsServiceHostDelegate, SiriAnalyticsObservableMessages;

#import <Foundation/Foundation.h>

#import "SiriAnalyticsXPCServiceListener.h"
#import "SiriAnalyticsTimePeriodBuffer.h"
#import "SiriAnalyticsLargeMessageStorage.h"
#import "SiriAnalyticsMessageObserverStream.h"
#import "SiriAnalyticsWhiteRose.h"
#import "SiriAnalyticsMessageResolutionPipeline.h"
#import "AssistantSiriAnalyticsClockWatcher.h"
#import "SiriAnalyticsPreferences.h"
#import "AssistantSiriAnalyticsMessageTailing.h"
#import "SiriAnalyticsInternalTelemetry.h"

@interface AssistantSiriAnalyticsService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    SiriAnalyticsXPCServiceListener *_siriAnalyticsListener;
    SiriAnalyticsTimePeriodBuffer *_storageBuffer;
    id<SiriAnalyticsMessageStorage> *_storageProvider;
    SiriAnalyticsLargeMessageStorage *_largeMessageStorage;
    SiriAnalyticsMessageObserverStream *_postTransformStream;
    SiriAnalyticsWhiteRose *_whiteRose;
    SiriAnalyticsMessageResolutionPipeline *_messageResolutionPipeline;
    AssistantSiriAnalyticsClockWatcher *_clockWatcher;
    SiriAnalyticsPreferences *_preferences;
    AssistantSiriAnalyticsMessageTailing *_messageTailing;
    SiriAnalyticsInternalTelemetry *_internalTelemetry;
    id<SiriAnalyticsServiceHostDelegate> *_delegate;
}


@property (readonly) NSObject<SiriAnalyticsObservableMessages> *postTransformationStream;


-(BOOL)_analyticsEnabled;
-(id)_applyTransformationsToMessage:(id)arg0 ;
-(id)_applyTransformationsToMessages:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(id)initWithQueue:(id)arg0 storageProvider:(id)arg1 largeMessageStorage:(id)arg2 delegate:(id)arg3 ;
-(void)listener:(id)arg0 largeMessageReceivedWithPath:(id)arg1 messageWrapper:(id)arg2 completion:(id)arg3 ;
-(void)listener:(id)arg0 messagesReceived:(id)arg1 ;
-(void)listener:(id)arg0 unresolvedMessagesReceived:(id)arg1 ;
-(void)registerMessageResolver:(id)arg0 ;


@end


#endif