// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC26AIMLINSTRUMENTATIONSTREAMS20EVENTGRAPHSPUBLISHER34CONNECTEDCOMPONENTGROUPSSUBSCRIBER_H
#define _TTCC26AIMLINSTRUMENTATIONSTREAMS20EVENTGRAPHSPUBLISHER34CONNECTEDCOMPONENTGROUPSSUBSCRIBER_H

@protocol BPSSubscriber;

#import <Foundation/Foundation.h>


@interface _TtCC26AIMLInstrumentationStreams20EventGraphsPublisher34ConnectedComponentGroupsSubscriber : NSObject <BPSSubscriber>

 {
    ? downstream;
    ? graphBuilder;
    ? logicalClockBuilder;
    ? eventTypeBuilder;
    ? graphSessionWindowLength;
    ? dimExpiryTime;
    ? latestRecievedTimestamp;
    ? upstreamFinished;
    ? logger;
}




-(NSInteger)receiveInput:(id)arg0 ;
-(id)init;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;


@end


#endif