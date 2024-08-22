// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSISTANTSIRIANALYTICSCLOCKWATCHER_H
#define ASSISTANTSIRIANALYTICSCLOCKWATCHER_H

@class NSString;
@protocol SiriAnalyticsWhiteRoseDelegate;

#import <Foundation/Foundation.h>

#import "SiriAnalyticsInternalTelemetry.h"
#import "SiriAnalyticsSensitiveConditionsObservers.h"
#import "SiriAnalyticsClientMessageStream.h"

@interface AssistantSiriAnalyticsClockWatcher : NSObject <SiriAnalyticsWhiteRoseDelegate>

 {
    SiriAnalyticsInternalTelemetry *_internalTelemetry;
    SiriAnalyticsSensitiveConditionsObservers *_sensitiveConditionsObservers;
    SiriAnalyticsClientMessageStream *_clientMessageStream;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithInternalTelemetry:(id)arg0 sensitiveConditionsObservers:(id)arg1 clientMessageStream:(id)arg2 ;
-(void)_triggerDeviceFixedContextOnStreamUUID:(id)arg0 ;
-(void)_triggerSiriAccountInformation;
-(void)whiteRose:(id)arg0 derivativeClockCreated:(id)arg1 rootClock:(id)arg2 ;
-(void)whiteRose:(id)arg0 rootClockCreated:(id)arg1 trailingRootClock:(id)arg2 ;
-(void)whiteRose:(id)arg0 rootClockDestroyed:(id)arg1 ;
-(void)whiteRose:(id)arg0 willCreateRootClock:(id)arg1 completion:(id)arg2 ;


@end


#endif