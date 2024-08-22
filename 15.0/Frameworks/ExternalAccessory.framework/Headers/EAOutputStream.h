// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EAOUTPUTSTREAM_H
#define EAOUTPUTSTREAM_H

@class NSOutputStream, NSRecursiveLock;


#import "EAAccessory.h"
#import "EASession.h"

@interface EAOutputStream : NSOutputStream {
    id *_delegate;
    int _sock;
    EAAccessory *_accessory;
    EASession *_session;
    NSRecursiveLock *_statusLock;
    NSRecursiveLock *_runloopLock;
    BOOL _useSocket;
    *__CFSocket _cfSocket;
    BOOL _isOpenCompletedEventSent;
    BOOL _hasSpaceAvailableEventSent;
    BOOL _hasSpaceAvailable;
    BOOL _isAtEndEventSent;
    NSUInteger _streamStatus;
    *__CFRunLoop _runLoop;
    *__CFRunLoopSource _runLoopSource;
    *__CFRunLoopSource _socketRunLoopSource;
}




-(BOOL)hasSpaceAvailable;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)write:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)streamStatus;
-(id)delegate;
-(id)initWithAccessory:(id)arg0 forSession:(id)arg1 socket:(int)arg2 ;
-(id)initWithAccessoryWithoutSocket:(id)arg0 forSession:(id)arg1 ;
-(id)propertyForKey:(id)arg0 ;
-(id)streamError;
-(void)_accessoryDidDisconnect:(id)arg0 ;
-(void)_performAtEndOfStreamValidation;
-(void)_scheduleCallback;
-(void)_streamEventTrigger;
-(void)_streamWriteable;
-(void)close;
-(void)dealloc;
-(void)endStream;
-(void)open;
-(void)openCompleted;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif