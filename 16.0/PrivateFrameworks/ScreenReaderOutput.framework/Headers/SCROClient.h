// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCROCLIENT_H
#define SCROCLIENT_H

@class NSLock;

#import <Foundation/Foundation.h>


@interface SCROClient : NSObject {
    NSLock *_lock;
    unsigned int _identifier;
    unsigned int _port;
    int _pid;
    *__CFArray _queue;
    *__CFSet _callbackSet;
}




+(BOOL)isClientTrustedWithPortToken:(struct ? )arg0 ;
+(NSInteger)removeClientWithPort:(unsigned int)arg0 ;
+(id)addClientGetIdentifier:(*unsigned int)arg0 token:(struct ? )arg1 getPort:(*unsigned int)arg2 ;
+(id)callbacksForClientIdentifier:(unsigned int)arg0 ;
+(void)initialize;
+(void)registerCallbackWithKey:(int)arg0 forClientIdentifier:(unsigned int)arg1 ;
+(void)sendCallback:(id)arg0 ;
-(BOOL)_wantsCallback:(id)arg0 ;
-(id)_dequeueCallbacks;
-(id)init;
-(void)_invalidate;
-(void)_lock;
-(void)_registerCallbackWithKey:(int)arg0 ;
-(void)_sendCallback:(id)arg0 ;
-(void)_unlock;
-(void)dealloc;


@end


#endif