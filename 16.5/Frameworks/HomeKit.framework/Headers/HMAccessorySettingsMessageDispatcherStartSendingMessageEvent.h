// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYSETTINGSMESSAGEDISPATCHERSTARTSENDINGMESSAGEEVENT_H
#define HMACCESSORYSETTINGSMESSAGEDISPATCHERSTARTSENDINGMESSAGEEVENT_H

@class NSString;


#import "HMCoreAnalyticsMetricEvent.h"

@interface HMAccessorySettingsMessageDispatcherStartSendingMessageEvent : HMCoreAnalyticsMetricEvent

@property (readonly, copy) NSString *messageName; // ivar: _messageName
@property (readonly, copy) NSString *updateKeyPath; // ivar: _updateKeyPath


-(id)eventPayload;
-(id)initWithMessageName:(id)arg0 updateKeyPath:(id)arg1 ;


@end


#endif