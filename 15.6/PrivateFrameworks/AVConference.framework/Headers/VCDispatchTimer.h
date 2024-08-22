// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCDISPATCHTIMER_H
#define VCDISPATCHTIMER_H

@protocol OS_dispatch_source, OS_dispatch_queue;


#import "VCObject.h"

@interface VCDispatchTimer : VCObject {
    NSObject<OS_dispatch_source> *_timer;
    unsigned int _intervalSeconds;
    NSObject<OS_dispatch_queue> *_clientQueue;
}


@property (readonly, nonatomic) id *callbackBlock; // ivar: _callbackBlock
@property (readonly, nonatomic) BOOL isRunning; // ivar: _running


-(id)initWithIntervalSeconds:(unsigned int)arg0 callbackBlock:(id)arg1 ;
// -(id)initWithIntervalSeconds:(unsigned int)arg0 callbackBlock:(id)arg1 clientQueue:(unk)arg2  ;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif