// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMOMENTSHISTORYBUFFER_H
#define VCMOMENTSHISTORYBUFFER_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VCMomentsHistoryBuffer : NSObject {
    id *_delegate;
    int _bufferLength;
    NSMutableArray *_timestampQueue;
    NSMutableDictionary *_sampleMap;
    unsigned int _lastTimestamp;
}




-(id)delegate;
-(id)initWithDelegate:(id)arg0 bufferLength:(int)arg1 dispatchQueue:(id)arg2 ;
-(int)getCount;
-(struct opaqueCMSampleBuffer *)getClosestSampleForTimestamp:(unsigned int)arg0 ;
-(unsigned int)getUpdatedTimestampWithTimestamp:(unsigned int)arg0 ;
-(void)dealloc;
-(void)dequeueOneFrame;
-(void)enqueueWithSample:(struct opaqueCMSampleBuffer *)arg0 timestamp:(unsigned int)arg1 ;
-(void)flushBuffer;
-(void)updateBufferWithSample:(struct opaqueCMSampleBuffer *)arg0 timestamp:(unsigned int)arg1 ;


@end


#endif