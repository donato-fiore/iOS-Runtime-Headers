// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSPREYBUFFEREDOUTPUTSTREAM_H
#define OSPREYBUFFEREDOUTPUTSTREAM_H

@class NSOutputStream, NSMutableData, NSString;
@protocol NSStreamDelegate, OS_dispatch_queue;



@interface OspreyBufferedOutputStream : NSOutputStream <NSStreamDelegate>

 {
    NSMutableData *_outputBuffer;
    NSOutputStream *_outputStream;
    BOOL _closed;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_flushBuffer;
-(BOOL)hasBufferedData;
-(BOOL)hasSpaceAvailable;
-(NSInteger)write:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(id)initWithBufferSize:(NSUInteger)arg0 underlyingOutputStream:(id)arg1 queue:(id)arg2 ;
-(id)streamError;
-(void)_closeUnderlying;
-(void)close;
-(void)dealloc;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif