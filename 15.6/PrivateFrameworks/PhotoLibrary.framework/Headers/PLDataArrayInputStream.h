// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDATAARRAYINPUTSTREAM_H
#define PLDATAARRAYINPUTSTREAM_H

@class NSInputStream, NSArray, NSMutableData;
@protocol PLDataArrayInputStreamProgressDelegate;



@interface PLDataArrayInputStream : NSInputStream {
    NSArray *_dataArray;
    NSMutableData *_bodyData;
    NSUInteger _dataCount;
    NSUInteger _dataLength;
    NSUInteger _dataOffset;
    NSUInteger _currentIndex;
    NSUInteger _currentOffset;
    NSUInteger _currentLength;
    BOOL _openEventSent;
    NSUInteger _streamStatus;
    id *_delegate;
    *__CFRunLoopSource _rls;
    *unk _clientCallback;
    ? _clientContext;
}


@property (nonatomic) NSObject<PLDataArrayInputStreamProgressDelegate> *progressDelegate; // ivar: _progressDelegate


-(BOOL)_setCFClientFlags:(NSUInteger)arg0 callback:(*unk)arg1 context:(struct ? *)arg2 ;
-(BOOL)getBuffer:(*char *)arg0 length:(*NSUInteger)arg1 ;
-(BOOL)hasBytesAvailable;
-(NSInteger)read:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)bytesRead;
-(NSUInteger)streamStatus;
-(NSUInteger)totalBytes;
-(id)delegate;
-(id)initWithDataArray:(id)arg0 ;
-(id)streamError;
-(void)_scheduleCallback;
-(void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1 ;
-(void)_scheduleProgressUpdate;
-(void)_streamEventTrigger;
-(void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1 ;
-(void)_updateProgress;
-(void)close;
-(void)dealloc;
-(void)open;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif