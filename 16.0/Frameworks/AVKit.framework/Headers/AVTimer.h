// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTIMER_H
#define AVTIMER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface AVTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _invalidated;
}


@property (readonly) CGFloat interval; // ivar: _interval


-(id)init;
// -(id)initWithTimeInterval:(CGFloat)arg0 queue:(id)arg1 block:(id)arg2 repeats:(unk)arg3  ;
-(void)dealloc;
-(void)invalidate;


@end


#endif