// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDPERSISTEDCOALESCINGTIMER_H
#define _CDPERSISTEDCOALESCINGTIMER_H

@class _PASCoalescingTimer, NSString, BMStoreStream, BMSource;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CDPersistedCoalescingTimer : NSObject {
    CGFloat _delay;
    CGFloat _leeway;
    NSObject<OS_dispatch_queue> *_queue;
    _PASCoalescingTimer *_coalescingTimer;
    NSString *_persistencePath;
    BMStoreStream *_storeStream;
    BMSource *_source;
}




// -(id)initWithDelay:(CGFloat)arg0 coalesceData:(id)arg1 operation:(unk)arg2 persistencePath:(id)arg3  ;
-(void)processData:(id)arg0 ;


@end


#endif