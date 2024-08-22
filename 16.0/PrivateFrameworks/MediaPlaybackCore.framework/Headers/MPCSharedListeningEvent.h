// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCSHAREDLISTENINGEVENT_H
#define MPCSHAREDLISTENINGEVENT_H


#import <Foundation/Foundation.h>

#import "MPCSharedListeningCustomEvent.h"
#import "MPCSharedListeningEventParticipant.h"
#import "MPCSharedListeningPlaybackEvent.h"
#import "MPCSharedListeningQueueEvent.h"
#import "MPCSharedListeningReactionEvent.h"
#import "MPCSharedListeningSessionEvent.h"

@interface MPCSharedListeningEvent : NSObject

@property (readonly, nonatomic) MPCSharedListeningCustomEvent *customEvent; // ivar: _customEvent
@property (readonly, nonatomic) MPCSharedListeningEventParticipant *participant; // ivar: _participant
@property (readonly, nonatomic) MPCSharedListeningPlaybackEvent *playbackEvent; // ivar: _playbackEvent
@property (readonly, nonatomic) MPCSharedListeningQueueEvent *queueEvent; // ivar: _queueEvent
@property (readonly, nonatomic) MPCSharedListeningReactionEvent *reactionEvent; // ivar: _reactionEvent
@property (readonly, nonatomic) MPCSharedListeningSessionEvent *sessionEvent; // ivar: _sessionEvent
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