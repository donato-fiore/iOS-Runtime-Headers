// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXREDIRECTEDEVENTDETECTOR_H
#define AXREDIRECTEDEVENTDETECTOR_H

@class AXDispatchTimer, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXRedirectedEventDetector : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) AXDispatchTimer *flushEventsTimer; // ivar: _flushEventsTimer
@property (retain, nonatomic) NSMutableArray *recentEvents; // ivar: _recentEvents


+(void)flushEvents;
-(BOOL)isRedirectedEvent:(id)arg0 ;
-(CGFloat)_elapsedTimeFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(id)init;
-(void)_flushEventsIfNecessary;
-(void)addEvent:(id)arg0 ;


@end


#endif