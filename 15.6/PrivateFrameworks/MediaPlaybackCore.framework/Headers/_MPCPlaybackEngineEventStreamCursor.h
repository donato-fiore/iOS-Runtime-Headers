// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPCPLAYBACKENGINEEVENTSTREAMCURSOR_H
#define _MPCPLAYBACKENGINEEVENTSTREAMCURSOR_H

@class NSString;
@protocol MPCPlaybackEngineEventStreamCursor;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngineEvent.h"
#import "MPCPlaybackEngineEventStream.h"

@interface _MPCPlaybackEngineEventStreamCursor : NSObject <MPCPlaybackEngineEventStreamCursor>

 {
    NSUInteger _startNS;
    NSUInteger _endNS;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MPCPlaybackEngineEvent *endEvent; // ivar: _endEvent
@property (readonly, nonatomic) MPCPlaybackEngineEventStream *eventStream; // ivar: _eventStream
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MPCPlaybackEngineEvent *startEvent; // ivar: _startEvent
@property (readonly) Class superclass;


-(NSInteger)countOfPreviousEventsWithType:(id)arg0 matchingPayload:(id)arg1 ;
-(NSInteger)countOfPreviousEventsWithTypes:(id)arg0 matchingPayload:(id)arg1 ;
-(id)cursorFromEvent:(id)arg0 untilEvent:(id)arg1 ;
-(id)cursorUntilEvent:(id)arg0 ;
-(id)findPreviousEventWithType:(id)arg0 matchingPayload:(id)arg1 ;
-(id)findPreviousEventWithTypes:(id)arg0 matchingPayload:(id)arg1 ;
-(id)initWithEventStream:(id)arg0 startEvent:(id)arg1 endEvent:(id)arg2 ;
-(void)enumeratePreviousEventsWithType:(id)arg0 matchingPayload:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumeratePreviousEventsWithType:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePreviousEventsWithTypes:(id)arg0 matchingPayload:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumeratePreviousEventsWithTypes:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif