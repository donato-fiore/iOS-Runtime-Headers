// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCPLAYBACKENGINELOGGINGCONSUMER_H
#define MPCPLAYBACKENGINELOGGINGCONSUMER_H

@class NSString;
@protocol MPCPlaybackEngineEventConsumer, MPCPlaybackEngineEventStreamSubscription;

#import <Foundation/Foundation.h>


@interface MPCPlaybackEngineLoggingConsumer : NSObject <MPCPlaybackEngineEventConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<MPCPlaybackEngineEventStreamSubscription> *subscription; // ivar: _subscription
@property (readonly) Class superclass;


+(id)identifier;
-(BOOL)_logAccountEvent:(id)arg0 subscription:(id)arg1 cursor:(id)arg2 ;
-(void)subscribeToEventStream:(id)arg0 ;
-(void)unsubscribeFromEventStream:(id)arg0 ;


@end


#endif