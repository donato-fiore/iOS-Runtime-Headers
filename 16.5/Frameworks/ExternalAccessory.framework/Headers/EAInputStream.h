// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EAINPUTSTREAM_H
#define EAINPUTSTREAM_H

@class NSInputStream, NSMutableData, NSCondition, NSRecursiveLock;
@protocol OS_dispatch_queue, OS_dispatch_source;


#import "EAAccessory.h"
#import "EASession.h"

@interface EAInputStream : NSInputStream {
    id *_delegate;
    EAAccessory *_accessory;
    EASession *_session;
    int _sock;
    BOOL _useSocket;
    NSMutableData *_inputFromAccData;
    NSCondition *_inputFromAccCondition;
    NSRecursiveLock *_statusLock;
    NSRecursiveLock *_runloopLock;
    NSObject<OS_dispatch_queue> *_inputFromAccQueue;
    NSObject<OS_dispatch_source> *_sockListenSource;
    char * _inputFromAccBuffer;
    BOOL _isOpenCompletedEventSent;
    BOOL _hasNewBytesAvailable;
    BOOL _isAtEndEventSent;
    NSUInteger _streamStatus;
    *__CFRunLoop _runLoop;
    *__CFRunLoopSource _runLoopSource;
}


@property int zeroBytesReadCount; // ivar: _zeroBytesReadCount


-(BOOL)getBuffer:(*char *)arg0 length:(*NSUInteger)arg1 ;
-(BOOL)hasBytesAvailable;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)read:(char *)arg0 maxLength:(NSUInteger)arg1 ;
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
-(void)close;
-(void)dealloc;
-(void)endStream;
-(void)open;
-(void)openCompleted;
-(void)processIncomingAccessoryData:(id)arg0 ;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif