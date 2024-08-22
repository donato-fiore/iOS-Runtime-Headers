// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NACEVENTTHROTTLER_H
#define NACEVENTTHROTTLER_H

@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NACEventThrottler : NSObject {
    CGFloat _lastUpdateTime;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (copy, nonatomic) id *eventBlock; // ivar: _eventBlock
@property (nonatomic) CGFloat minimumDelay; // ivar: _minimumDelay
@property (retain, nonatomic) id *value; // ivar: _value


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)_fire;
-(void)cancel;


@end


#endif