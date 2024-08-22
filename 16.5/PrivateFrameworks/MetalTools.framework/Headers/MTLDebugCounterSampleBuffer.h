// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLDEBUGCOUNTERSAMPLEBUFFER_H
#define MTLDEBUGCOUNTERSAMPLEBUFFER_H

@class MTLCounterSampleBufferDescriptor;


#import "MTLToolsCounterSampleBuffer.h"

@interface MTLDebugCounterSampleBuffer : MTLToolsCounterSampleBuffer

@property (readonly, nonatomic) MTLCounterSampleBufferDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) NSUInteger storageMode; // ivar: _storageMode


-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithCounterSampleBuffer:(id)arg0 device:(id)arg1 descriptor:(id)arg2 ;
-(id)resolveCounterRange:(struct _NSRange )arg0 ;
-(void)dealloc;


@end


#endif