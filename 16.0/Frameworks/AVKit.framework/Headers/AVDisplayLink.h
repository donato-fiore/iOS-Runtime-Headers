// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVDISPLAYLINK_H
#define AVDISPLAYLINK_H

@class CADisplayLink;

#import <Foundation/Foundation.h>


@interface AVDisplayLink : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (copy, nonatomic) id *linkFired; // ivar: _linkFired
@property (weak, nonatomic) id *observer; // ivar: _observer
@property (readonly, nonatomic) CGFloat runningTime;
@property (nonatomic) CGFloat startTime; // ivar: _startTime


-(void)invalidate;
-(void)linkFired:(id)arg0 ;
-(void)startDisplayLinkUpdatesForObserver:(id)arg0 framesPerSecond:(NSInteger)arg1 usingBlock:(id)arg2 ;


@end


#endif