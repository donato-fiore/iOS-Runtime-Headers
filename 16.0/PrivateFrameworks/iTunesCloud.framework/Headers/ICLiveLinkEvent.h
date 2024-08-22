// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICLIVELINKEVENT_H
#define ICLIVELINKEVENT_H


#import <Foundation/Foundation.h>

#import "ICLiveLinkCustomEvent.h"
#import "ICLiveLinkIdentity.h"
#import "ICLiveLinkPlaybackEvent.h"
#import "ICLiveLinkQueueEvent.h"
#import "ICLiveLinkReactionEvent.h"
#import "ICLiveLinkSessionEvent.h"

@interface ICLiveLinkEvent : NSObject

@property (readonly, nonatomic) ICLiveLinkCustomEvent *customEvent; // ivar: _customEvent
@property (readonly, nonatomic) ICLiveLinkIdentity *participant; // ivar: _participant
@property (readonly, nonatomic) ICLiveLinkPlaybackEvent *playbackEvent; // ivar: _playbackEvent
@property (readonly, nonatomic) ICLiveLinkQueueEvent *queueEvent; // ivar: _queueEvent
@property (readonly, nonatomic) ICLiveLinkReactionEvent *reactionEvent; // ivar: _reactionEvent
@property (readonly, nonatomic) ICLiveLinkSessionEvent *sessionEvent; // ivar: _sessionEvent
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)eventWithCustomEvent:(id)arg0 participant:(id)arg1 ;
+(id)eventWithPlaybackEvent:(id)arg0 participant:(id)arg1 ;
+(id)eventWithQueueEvent:(id)arg0 participant:(id)arg1 ;
+(id)eventWithReactionEvent:(id)arg0 participant:(id)arg1 ;
+(id)eventWithSessionEvent:(id)arg0 participant:(id)arg1 ;
-(id)_initWithType:(NSInteger)arg0 participant:(id)arg1 ;
-(id)description;


@end


#endif