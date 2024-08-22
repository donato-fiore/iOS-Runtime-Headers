// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDMANAGEDRINGBUFFER_H
#define ASDMANAGEDRINGBUFFER_H

@class NSString;
@protocol ASDManagedRingBuffer, OS_dispatch_queue;


#import "ASDRingBuffer.h"
#import "ASDStreamFormat.h"

@interface ASDManagedRingBuffer : ASDRingBuffer <ASDManagedRingBuffer>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic, getter=isAllocated) BOOL allocated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger frameCapacity;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *readBlock;
@property (copy, nonatomic) ASDStreamFormat *readFormat;
@property (readonly, nonatomic) id *readWithZerosBlock;
@property (nonatomic) BOOL readerRunning; // ivar: _readerRunning
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *writeBlock;
@property (copy, nonatomic) ASDStreamFormat *writeFormat;
@property (nonatomic) BOOL writerRunning; // ivar: _writerRunning


-(id)initWithFrameCapacity:(NSInteger)arg0 writeFormat:(id)arg1 readFormat:(id)arg2 ;
-(void)startReader;
-(void)startWriter;
-(void)stopReader;
-(void)stopWriter;


@end


#endif