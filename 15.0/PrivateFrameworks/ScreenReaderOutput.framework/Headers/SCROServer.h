// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCROSERVER_H
#define SCROSERVER_H

@class NSLock;
@protocol SCROServerDelegate;

#import <Foundation/Foundation.h>


@interface SCROServer : NSObject {
    NSLock *_contentLock;
    id<SCROServerDelegate> *_delegate;
    *__CFRunLoopSource _serverSource;
    *__CFRunLoopSource _deathSource;
    *__CFRunLoopTimer _deathTimer;
    unsigned int _serverPort;
    unsigned int _deathPort;
    NSInteger _clientCount;
    BOOL _isRegisteredWithMach;
}




+(id)sharedServer;
-(BOOL)_registerWithMachServiceName:(char *)arg0 ;
-(BOOL)isRegisteredWithMach;
-(BOOL)registerWithMach;
-(NSInteger)_clientCount;
-(NSInteger)_incrementClientCount;
-(id)delegate;
-(id)init;
-(int)_registerForNotificationOnDeathPort:(unsigned int)arg0 ;
-(struct __CFRunLoopSource *)serverSource;
-(struct __CFRunLoopTimer *)_deathTimer;
-(void)_setClientCount:(NSInteger)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)unregisterWithMach;


@end


#endif