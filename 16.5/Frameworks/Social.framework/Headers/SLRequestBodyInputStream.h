// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLREQUESTBODYINPUTSTREAM_H
#define SLREQUESTBODYINPUTSTREAM_H

@class NSInputStream, NSArray;
@protocol NSStreamDelegate;


#import "SLRequestMultiPartInputStream.h"
#import "SLRequestBodyInputStream.h"

@interface SLRequestBodyInputStream : NSInputStream {
    NSArray *_inputStreams;
    SLRequestMultiPartInputStream *_currentStream;
    NSUInteger _dataLength;
    NSUInteger _dataOffset;
    NSUInteger _currentIndex;
    NSUInteger _currentOffset;
    NSUInteger _currentLength;
    BOOL _openEventSent;
    NSUInteger _streamStatus;
    *__CFRunLoopSource _rls;
    *unk _clientCallback;
    ? _clientContext;
    SLRequestBodyInputStream *_selfReferenceDuringStreamEventTrigger;
}


@property (weak) NSObject<NSStreamDelegate> *delegate; // ivar: _delegate
@property (readonly) NSUInteger totalBytes;


-(BOOL)_setCFClientFlags:(NSUInteger)arg0 callback:(*unk)arg1 context:(struct ? *)arg2 ;
-(BOOL)getBuffer:(*char *)arg0 length:(*NSUInteger)arg1 ;
-(BOOL)hasBytesAvailable;
-(NSInteger)read:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)bytesRead;
-(NSUInteger)streamStatus;
-(id)initWithMultiParts:(id)arg0 multiPartBoundary:(id)arg1 ;
-(id)nextStream;
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


@end


#endif