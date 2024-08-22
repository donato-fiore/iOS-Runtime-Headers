// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCOREANALYTICSMETRICEVENTDISPATCHER_H
#define HMCOREANALYTICSMETRICEVENTDISPATCHER_H

@class HMFObject;



@interface HMCoreAnalyticsMetricEventDispatcher : HMFObject {
    id *_sendEventHandler;
}




-(id)init;
-(id)initWithSendEventHandler:(id)arg0 ;
-(void)sendEvent:(id)arg0 ;


@end


#endif