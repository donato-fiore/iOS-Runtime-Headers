// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTMEDIATIMETRACKER_H
#define MTMEDIATIMETRACKER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface MTMediaTimeTracker : NSObject

@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) float playbackRate; // ivar: _playbackRate
@property (nonatomic) NSUInteger position; // ivar: _position


-(id)estimatedTimeAtPastPosition:(NSUInteger)arg0 ;
-(id)estimatedTimeAtPosition:(NSUInteger)arg0 ;
-(id)initWithPosition:(NSUInteger)arg0 playbackRate:(float)arg1 ;
-(void)updatePosition:(NSUInteger)arg0 ;
-(void)updatePosition:(NSUInteger)arg0 playbackRate:(float)arg1 ;


@end


#endif