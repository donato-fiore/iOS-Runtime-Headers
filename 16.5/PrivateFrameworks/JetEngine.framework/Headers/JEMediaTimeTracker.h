// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JEMEDIATIMETRACKER_H
#define JEMEDIATIMETRACKER_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "JEMediaTimeTrackerDateProvider.h"

@interface JEMediaTimeTracker : NSObject

@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) JEMediaTimeTrackerDateProvider *dateProvider; // ivar: _dateProvider
@property (nonatomic) float playbackRate; // ivar: _playbackRate
@property (nonatomic) NSUInteger position; // ivar: _position


-(id)estimatedTimeAtPastPosition:(NSUInteger)arg0 ;
-(id)estimatedTimeAtPosition:(NSUInteger)arg0 ;
-(id)initWithPosition:(NSUInteger)arg0 playbackRate:(float)arg1 ;
-(void)updatePosition:(NSUInteger)arg0 ;
-(void)updatePosition:(NSUInteger)arg0 playbackRate:(float)arg1 ;


@end


#endif