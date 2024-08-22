// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYSETTINGSMESSAGEDISPATCHERSTARTSENDINGMESSAGEEVENT_H
#define HMACCESSORYSETTINGSMESSAGEDISPATCHERSTARTSENDINGMESSAGEEVENT_H

@class NSString;


#import "HMCoreAnalyticsMetricEvent.h"

@interface HMAccessorySettingsMessageDispatcherStartSendingMessageEvent : HMCoreAnalyticsMetricEvent

@property (readonly, copy) NSString *messageName; // ivar: _messageName


-(id)eventPayload;
-(id)initWithMessageName:(id)arg0 ;


@end


#endif