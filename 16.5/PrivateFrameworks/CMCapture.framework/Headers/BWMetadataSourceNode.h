// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWMETADATASOURCENODE_H
#define BWMETADATASOURCENODE_H

@protocol OS_dispatch_queue;


#import "BWSourceNode.h"

@interface BWMetadataSourceNode : BWSourceNode {
    BOOL _running;
    *OpaqueCMClock _clock;
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
}


@property (readonly, nonatomic) *opaqueCMFormatDescription formatDescription; // ivar: _formatDescription


+(void)initialize;
-(BOOL)start:(*id)arg0 ;
-(BOOL)stop:(*id)arg0 ;
-(id)initWithFormatDescription:(struct opaqueCMFormatDescription *)arg0 clock:(struct OpaqueCMClock *)arg1 ;
-(id)nodeSubType;
-(struct OpaqueCMClock *)clock;
-(void)appendMetadataSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;


@end


#endif