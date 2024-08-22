// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASLAZYPURGEABLERESULT_H
#define _PASLAZYPURGEABLERESULT_H

@class PASLazyResult;
@protocol OS_dispatch_source;



@interface _PASLazyPurgeableResult : PASLazyResult {
    id *_weakData;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    NSObject<OS_dispatch_source> *_idleTimeoutSource;
    CGFloat _idleTimeout;
    uint8_t _nil;
}




-(id)initWithBlock:(id)arg0 ;
// -(id)initWithBlock:(id)arg0 idleTimeout:(unk)arg1  ;
-(id)result;
-(id)resultIfAvailable;
-(void)dealloc;


@end


#endif