// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLGPUDEBUGBUFFERERRORLOG_H
#define MTLGPUDEBUGBUFFERERRORLOG_H

@class MTLArgument;
@protocol MTLBuffer;


#import "MTLGPUDebugGPULog.h"

@interface MTLGPUDebugBufferErrorLog : MTLGPUDebugGPULog

@property (nonatomic) int addressSpace; // ivar: _addressSpace
@property (retain, nonatomic) MTLArgument *argument; // ivar: _argument
@property (retain, nonatomic) NSObject<MTLBuffer> *buffer; // ivar: _buffer
@property (nonatomic) NSUInteger offset; // ivar: _offset
@property (nonatomic) int operation; // ivar: _operation
@property (nonatomic) int specifiedUsage; // ivar: _specifiedUsage


-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif