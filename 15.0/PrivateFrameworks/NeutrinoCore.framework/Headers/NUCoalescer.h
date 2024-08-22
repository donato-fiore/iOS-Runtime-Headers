// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUCOALESCER_H
#define NUCOALESCER_H

@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NUCoalescer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
}


@property (readonly) CGFloat delay; // ivar: _delay
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(id)initWithDelay:(CGFloat)arg0 ;
-(id)initWithDelay:(CGFloat)arg0 queue:(id)arg1 ;
-(void)coalesceBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif