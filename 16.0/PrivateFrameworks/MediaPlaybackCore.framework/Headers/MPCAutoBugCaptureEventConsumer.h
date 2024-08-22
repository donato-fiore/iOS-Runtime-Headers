// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCAUTOBUGCAPTUREEVENTCONSUMER_H
#define MPCAUTOBUGCAPTUREEVENTCONSUMER_H

@class NSString;
@protocol MPCPlaybackEngineEventConsumer, MPCPlaybackEngineEventStreamSubscription;

#import <Foundation/Foundation.h>


@interface MPCAutoBugCaptureEventConsumer : NSObject <MPCPlaybackEngineEventConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<MPCPlaybackEngineEventStreamSubscription> *subscription; // ivar: _subscription
@property (readonly) Class superclass;


+(id)identifier;
-(void)subscribeToEventStream:(id)arg0 ;
-(void)unsubscribeFromEventStream:(id)arg0 ;


@end


#endif