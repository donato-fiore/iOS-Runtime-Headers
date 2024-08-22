// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALSTOPWATCH_H
#define CALSTOPWATCH_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CalStopwatch : NSObject {
    BOOL _isRunning;
    NSUInteger _lastStartTime;
    NSUInteger _elapsedTime;
    BOOL _hasValidElapsedTime;
    NSMutableDictionary *_events;
}


@property BOOL usesSignalFlags; // ivar: _usesSignalFlags


-(CGFloat)markEventEnd:(id)arg0 ;
-(CGFloat)markEventSplit:(id)arg0 ;
-(NSUInteger)elapsedTimeAsNumber:(int)arg0 ;
-(NSUInteger)elapsedTimeInNanoseconds;
-(id)description;
-(id)elapsedTimeAsString:(int)arg0 ;
-(id)init;
-(void)markEventStart:(id)arg0 ;
-(void)reset;
-(void)start;
-(void)stop;


@end


#endif