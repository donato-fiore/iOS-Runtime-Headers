// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFANALYTICSRESUMESETUPNONCONFIGUREDACCESSORYCOUNTEVENT_H
#define HFANALYTICSRESUMESETUPNONCONFIGUREDACCESSORYCOUNTEVENT_H

@class NSString, NSNumber;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsResumeSetupNonConfiguredAccessoryCountEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *homeID; // ivar: _homeID
@property (retain, nonatomic) NSNumber *nonConfiguredAccessoryCount; // ivar: _nonConfiguredAccessoryCount
@property (retain, nonatomic) NSNumber *nonConfiguredBridgeCount; // ivar: _nonConfiguredBridgeCount
@property (retain, nonatomic) NSNumber *nonConfiguredBridgedCount; // ivar: _nonConfiguredBridgedCount


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif