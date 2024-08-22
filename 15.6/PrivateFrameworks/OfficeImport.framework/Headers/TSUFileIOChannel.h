// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUFILEIOCHANNEL_H
#define TSUFILEIOCHANNEL_H

@class NSString;
@protocol TSUReadChannel, TSUStreamWriteChannel, TSURandomWriteChannel, OS_dispatch_queue, OS_dispatch_io;

#import <Foundation/Foundation.h>


@interface TSUFileIOChannel : NSObject <TSUReadChannel, TSUStreamWriteChannel, TSURandomWriteChannel>

 {
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_io> *_channel;
    BOOL _isClosed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) Class superclass;


-(id)initForRandomReadingWritingURL:(id)arg0 error:(*id)arg1 ;
-(id)initForRandomReadingWritingURL:(id)arg0 error:(*id)arg1 cleanupHandler:(id)arg2 ;
-(id)initForRandomWritingURL:(id)arg0 error:(*id)arg1 ;
-(id)initForRandomWritingURL:(id)arg0 error:(*id)arg1 cleanupHandler:(id)arg2 ;
-(id)initForReadingDescriptor:(int)arg0 queue:(id)arg1 cleanupHandler:(id)arg2 ;
-(id)initForReadingURL:(id)arg0 error:(*id)arg1 ;
-(id)initForReadingURL:(id)arg0 error:(*id)arg1 cleanupHandler:(id)arg2 ;
-(id)initForStreamWritingURL:(id)arg0 error:(*id)arg1 ;
-(id)initForStreamWritingURL:(id)arg0 error:(*id)arg1 cleanupHandler:(id)arg2 ;
-(id)initWithType:(NSUInteger)arg0 URL:(id)arg1 oflag:(int)arg2 mode:(unsigned short)arg3 error:(*id)arg4 cleanupHandler:(id)arg5 ;
-(id)initWithType:(NSUInteger)arg0 descriptor:(int)arg1 queue:(id)arg2 cleanupHandler:(id)arg3 ;
-(void)addBarrier:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)flushWithCompletion:(id)arg0 ;
-(void)readFromOffset:(NSInteger)arg0 length:(NSUInteger)arg1 handler:(id)arg2 ;
-(void)readWithHandler:(id)arg0 ;
-(void)setLowWater:(NSUInteger)arg0 ;
-(void)truncateToLength:(NSInteger)arg0 completion:(id)arg1 ;
-(void)writeData:(id)arg0 handler:(id)arg1 ;
-(void)writeData:(id)arg0 offset:(NSInteger)arg1 handler:(id)arg2 ;


@end


#endif