// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOWESTIMATE_H
#define FLOWESTIMATE_H

@protocol OS_dispatch_queue;


#import "EspressoModel.h"

@interface FlowEstimate : EspressoModel {
    NSObject<OS_dispatch_queue> *_submissionQueue;
}


@property NSUInteger channels; // ivar: _channels
@property NSUInteger height; // ivar: _height
@property unsigned int level; // ivar: _level
@property NSUInteger width; // ivar: _width


-(BOOL)bindCVPixelBuffers:(struct __CVBuffer *)arg0 correlation:(struct __CVBuffer *)arg1 flow:(struct __CVBuffer *)arg2 output:(struct __CVBuffer *)arg3 ;
-(BOOL)estimateFlow:(struct __CVBuffer *)arg0 correlation:(struct __CVBuffer *)arg1 flow:(struct __CVBuffer *)arg2 output:(struct __CVBuffer *)arg3 callback:(id)arg4 ;
-(id)initWithMode:(NSInteger)arg0 level:(unsigned int)arg1 ;


@end


#endif