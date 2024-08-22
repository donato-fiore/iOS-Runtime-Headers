// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSACTIONRESPONDER_H
#define BSACTIONRESPONDER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_BSActionResponder.h"

@interface BSActionResponder : NSObject {
    NSObject<OS_dispatch_queue> *_lock_queue;
    id *_lock_handler;
    _BSActionResponder *_lock_underlying;
    NSUInteger _lock_timeout;
    os_unfair_lock_s _lock;
}




+(id)responderByWrappingResponder:(id)arg0 withHandler:(id)arg1 ;
+(id)responderWithHandler:(id)arg0 ;
-(id)init;
-(void)annul;
-(void)dealloc;
-(void)setQueue:(id)arg0 ;
-(void)setTimeout:(NSUInteger)arg0 ;


@end


#endif