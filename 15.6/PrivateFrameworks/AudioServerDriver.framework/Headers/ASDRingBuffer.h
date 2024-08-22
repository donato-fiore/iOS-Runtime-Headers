// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDRINGBUFFER_H
#define ASDRINGBUFFER_H

@class NSString;
@protocol ASDRingBuffer;

#import <Foundation/Foundation.h>

#import "ASDStreamFormat.h"

@interface ASDRingBuffer : NSObject <ASDRingBuffer>

 {
    unique_ptr<AudioRingBuffer, std::default_delete<AudioRingBuffer>> _ringBuffer;
}


@property (nonatomic, getter=isAllocated) BOOL allocated; // ivar: _allocated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger frameCapacity; // ivar: _frameCapacity
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *readBlock;
@property (copy, nonatomic) ASDStreamFormat *readFormat; // ivar: _readFormat
@property (readonly, nonatomic) id *readWithZerosBlock;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *writeBlock;
@property (copy, nonatomic) ASDStreamFormat *writeFormat; // ivar: _writeFormat


-(id)initWithFrameCapacity:(NSInteger)arg0 ;
-(id)initWithFrameCapacity:(NSInteger)arg0 writeFormat:(id)arg1 readFormat:(id)arg2 ;
-(void)allocate;
-(void)clear;
-(void)deallocate;


@end


#endif