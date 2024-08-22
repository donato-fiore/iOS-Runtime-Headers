// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFFILECHUNKINPUTSTREAM_H
#define WFFILECHUNKINPUTSTREAM_H

@class NSInputStream;



@interface WFFileChunkInputStream : NSInputStream

@property (readonly, nonatomic) NSInputStream *inputStream; // ivar: _inputStream
@property (readonly, nonatomic) NSUInteger length; // ivar: _length
@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset


-(BOOL)_setCFClientFlags:(NSUInteger)arg0 callback:(*unk)arg1 context:(struct ? *)arg2 ;
-(BOOL)getBuffer:(*char *)arg0 length:(*NSUInteger)arg1 ;
-(BOOL)hasBytesAvailable;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)read:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)streamStatus;
-(id)initWithURL:(id)arg0 offset:(NSUInteger)arg1 length:(NSUInteger)arg2 ;
-(id)propertyForKey:(id)arg0 ;
-(id)streamError;
-(void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1 ;
-(void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1 ;
-(void)close;
-(void)open;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;


@end


#endif