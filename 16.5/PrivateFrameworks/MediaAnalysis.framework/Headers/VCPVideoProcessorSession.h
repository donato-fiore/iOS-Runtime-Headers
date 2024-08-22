// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVIDEOPROCESSORSESSION_H
#define VCPVIDEOPROCESSORSESSION_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCPVideoProcessorSession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_nodes;
    BOOL _modified;
    ? _startTime;
    CF<opaqueCMSampleBuffer *> _nextSampleBuffer;
    NSUInteger _frameCount;
}


@property (nonatomic) unsigned int orientation; // ivar: _orientation


-(BOOL)addRequest:(id)arg0 withConfiguration:(id)arg1 error:(*id)arg2 ;
-(BOOL)flushWithEndTime:(struct ? )arg0 error:(*id)arg1 ;
-(BOOL)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
-(BOOL)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 withEndTime:(struct ? )arg1 error:(*id)arg2 ;
-(BOOL)removeRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldProcessSampleWithTimeRange:(struct ? )arg0 atSamplingInterval:(struct ? )arg1 ;
-(id)init;


@end


#endif