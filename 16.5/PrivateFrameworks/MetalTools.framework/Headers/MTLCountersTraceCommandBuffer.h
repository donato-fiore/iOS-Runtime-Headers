// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLCOUNTERSTRACECOMMANDBUFFER_H
#define MTLCOUNTERSTRACECOMMANDBUFFER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MTLCountersTraceCommandBuffer : NSObject {
    BinaryBuffer _commands;
    NSMutableArray *_encoders;
    AppendBuffer _samples;
    NSUInteger _flags;
    NSUInteger _timestamp;
}




-(id)blitCommandEncoder;
-(id)computeCommandEncoder;
-(id)init:(BOOL)arg0 ;
-(id)renderCommandEncoder;
-(id)resourceStateCommandEncoder;
-(void)appendSamples:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)presentDrawable:(id)arg0 ;
-(void)presentDrawable:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)saveCommandBuffer:(*void)arg0 queue:(id)arg1 profilingResults:(id)arg2 ;
-(void)waitUntilCompleted;
-(void)waitUntilScheduled;


@end


#endif