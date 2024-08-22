// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSSTOPWATCH_H
#define MSSTOPWATCH_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MSStopwatch : NSObject

@property (nonatomic) NSUInteger elapsedTime; // ivar: _elapsedTime
@property (nonatomic) NSUInteger elapsedTimeMS; // ivar: _elapsedTimeMS
@property (nonatomic) BOOL isLocked; // ivar: _isLocked
@property (retain, nonatomic) NSMutableArray *laps; // ivar: _laps
@property (nonatomic) NSUInteger lastLapTime; // ivar: _lastLapTime
@property (nonatomic) NSUInteger startTime; // ivar: _startTime
@property (nonatomic) NSInteger status; // ivar: _status
@property (nonatomic) NSUInteger stopTime; // ivar: _stopTime


-(id)init;
-(void)lap;
-(void)lapWithName:(id)arg0 ;
-(void)reset;
-(void)start;
-(void)stop;
-(void)toggleLock:(BOOL)arg0 ;


@end


#endif