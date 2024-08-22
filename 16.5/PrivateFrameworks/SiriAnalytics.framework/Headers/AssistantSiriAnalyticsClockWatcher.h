// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASSISTANTSIRIANALYTICSCLOCKWATCHER_H
#define ASSISTANTSIRIANALYTICSCLOCKWATCHER_H

@class NSString;
@protocol SiriAnalyticsWhiteRoseDelegate;

#import <Foundation/Foundation.h>

#import "SiriAnalyticsInternalTelemetry.h"
#import "SiriAnalyticsSensitiveConditionsObservers.h"
#import "SiriAnalyticsClientMessageStream.h"
#import "SiriAnalyticsPreprocessor.h"
#import "SiriAnalyticsMetastore.h"
#import "SiriAnalyticsClockInactivityScheduler.h"

@interface AssistantSiriAnalyticsClockWatcher : NSObject <SiriAnalyticsWhiteRoseDelegate>

 {
    SiriAnalyticsInternalTelemetry *_internalTelemetry;
    SiriAnalyticsSensitiveConditionsObservers *_sensitiveConditionsObservers;
    SiriAnalyticsClientMessageStream *_clientMessageStream;
    SiriAnalyticsPreprocessor *_preprocessor;
    SiriAnalyticsMetastore *_metastore;
    SiriAnalyticsClockInactivityScheduler *_inactivityScheduler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithInternalTelemetry:(id)arg0 sensitiveConditionsObservers:(id)arg1 clientMessageStream:(id)arg2 preprocessor:(id)arg3 metastore:(id)arg4 scheduler:(id)arg5 ;
-(void)_triggerDeviceFixedContextOnStreamUUID:(id)arg0 ;
-(void)_triggerSiriAccountInformation;
-(void)whiteRose:(id)arg0 derivativeClockCreated:(id)arg1 rootClock:(id)arg2 ;
-(void)whiteRose:(id)arg0 rootClockCreated:(id)arg1 trailingRootClock:(id)arg2 ;
-(void)whiteRose:(id)arg0 rootClockDestroyed:(id)arg1 reason:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)whiteRose:(id)arg0 willCreateRootClock:(id)arg1 completion:(id)arg2 ;


@end


#endif