// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PK_HTTPPROXY_H
#define PK_HTTPPROXY_H

@class OneShotXPC;
@protocol OS_dispatch_queue;



@interface PK_HTTPProxy : OneShotXPC {
    NSObject<OS_dispatch_queue> *_httpQueue;
    int _msTimeout;
}


@property (readonly) int lastError; // ivar: _lastError


-(id)initWithTimeout:(int)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)withProtocolAsync:(id)arg0 ;
-(void)withProtocolSync:(id)arg0 ;


@end


#endif