// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUFILEIOCHANNEL_H
#define TSUFILEIOCHANNEL_H

@class NSString;
@protocol TSUReadChannel, TSUStreamReadChannel, TSUStreamWriteChannel, TSURandomWriteChannel, OS_dispatch_io;

#import <Foundation/Foundation.h>


@interface TSUFileIOChannel : NSObject <TSUReadChannel, TSUStreamReadChannel, TSUStreamWriteChannel, TSURandomWriteChannel>

 {
    NSObject<OS_dispatch_io> *_channel;
    BOOL _isClosed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createRandomAccessChannel;
-(id)initForRandomWritingURL:(id)arg0 ;
-(id)initForReadingURL:(id)arg0 ;
-(id)initForStreamWritingURL:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 URL:(id)arg1 oflag:(int)arg2 mode:(unsigned short)arg3 ;
-(id)initWithType:(NSUInteger)arg0 channel:(id)arg1 ;
-(void)addBarrier:(id)arg0 ;
-(void)close;
-(void)readFromOffset:(NSInteger)arg0 length:(NSUInteger)arg1 queue:(id)arg2 handler:(id)arg3 ;
-(void)readWithQueue:(id)arg0 handler:(id)arg1 ;
-(void)setLowWater:(NSUInteger)arg0 ;
-(void)writeData:(id)arg0 offset:(NSInteger)arg1 queue:(id)arg2 handler:(id)arg3 ;
-(void)writeData:(id)arg0 queue:(id)arg1 handler:(id)arg2 ;


@end


#endif