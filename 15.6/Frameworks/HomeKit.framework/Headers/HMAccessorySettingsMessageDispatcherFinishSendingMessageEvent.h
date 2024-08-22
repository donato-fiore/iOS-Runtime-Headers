// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYSETTINGSMESSAGEDISPATCHERFINISHSENDINGMESSAGEEVENT_H
#define HMACCESSORYSETTINGSMESSAGEDISPATCHERFINISHSENDINGMESSAGEEVENT_H

@class NSString;


#import "HMCoreAnalyticsTimedMetricEvent.h"

@interface HMAccessorySettingsMessageDispatcherFinishSendingMessageEvent : HMCoreAnalyticsTimedMetricEvent

@property (readonly) NSString *messageName; // ivar: _messageName


-(id)eventPayload;
-(id)initWithMessageName:(id)arg0 ;


@end


#endif