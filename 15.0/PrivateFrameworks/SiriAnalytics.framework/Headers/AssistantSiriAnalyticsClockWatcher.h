// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASSISTANTSIRIANALYTICSCLOCKWATCHER_H
#define ASSISTANTSIRIANALYTICSCLOCKWATCHER_H

@class NSString;
@protocol SiriAnalyticsWhiteRoseDelegate;

#import <Foundation/Foundation.h>

#import "SiriAnalyticsInternalTelemetry.h"

@interface AssistantSiriAnalyticsClockWatcher : NSObject <SiriAnalyticsWhiteRoseDelegate>

 {
    SiriAnalyticsInternalTelemetry *_internalTelemetry;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithInternalTelemetry:(id)arg0 ;
-(void)_triggerDeviceFixedContext;
-(void)_triggerSiriAccountInformation;
-(void)whiteRose:(id)arg0 clockCreated:(id)arg1 trailingClock:(id)arg2 ;
-(void)whiteRose:(id)arg0 clockDestroyed:(id)arg1 ;
-(void)whiteRose:(id)arg0 derivativeClockCreated:(id)arg1 parentClock:(id)arg2 ;


@end


#endif