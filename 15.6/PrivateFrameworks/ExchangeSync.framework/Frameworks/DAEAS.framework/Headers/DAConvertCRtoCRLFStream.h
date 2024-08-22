// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DACONVERTCRTOCRLFSTREAM_H
#define DACONVERTCRTOCRLFSTREAM_H

@class NSInputStream, NSData;


#import "ASTrafficLogger.h"

@interface DAConvertCRtoCRLFStream : NSInputStream {
    NSData *_mimeData;
    NSData *_preflightData;
    NSData *_postflightData;
    NSUInteger _totalLength;
    NSUInteger _readOffset;
    BOOL _lastByteCopiedWasCR;
    BOOL _openEventSent;
    NSUInteger _streamStatus;
    BOOL _intendToStream;
    id *_delegate;
    *__CFRunLoopSource _rls;
    *unk _clientCallback;
    ? _clientContext;
    ASTrafficLogger *_trafficLogger;
}




-(BOOL)_setCFClientFlags:(NSUInteger)arg0 callback:(*unk)arg1 context:(struct ? *)arg2 ;
-(BOOL)getBuffer:(*char *)arg0 length:(*NSUInteger)arg1 ;
-(BOOL)hasBytesAvailable;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)read:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)streamStatus;
-(id)delegate;
-(id)initWithData:(id)arg0 ;
-(id)initWithMIMEData:(id)arg0 preflightData:(id)arg1 postflightData:(id)arg2 intendToStream:(BOOL)arg3 ;
-(id)propertyForKey:(id)arg0 ;
-(id)streamError;
-(void)_scheduleCallback;
-(void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1 ;
-(void)_streamEventTrigger;
-(void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1 ;
-(void)close;
-(void)dealloc;
-(void)open;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif