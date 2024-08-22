// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPTUPLOADDATASTREAM_H
#define NPTUPLOADDATASTREAM_H

@class NSInputStream;
@protocol OS_dispatch_queue, NSStreamDelegate;



@interface NPTUploadDataStream : NSInputStream {
    NSUInteger remainingLength;
    NSUInteger status;
    NSObject<OS_dispatch_queue> *callBackQueue;
    id<NSStreamDelegate> *_delegate;
}




-(BOOL)getBuffer:(*char *)arg0 length:(*NSUInteger)arg1 ;
-(BOOL)hasBytesAvailable;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)read:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)streamStatus;
-(id)delegate;
-(id)initWithLength:(NSUInteger)arg0 ;
-(id)propertyForKey:(id)arg0 ;
-(id)streamError;
-(void)close;
-(void)open;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif