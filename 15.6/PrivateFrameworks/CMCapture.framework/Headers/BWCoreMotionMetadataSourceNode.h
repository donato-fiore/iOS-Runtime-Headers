// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWCOREMOTIONMETADATASOURCENODE_H
#define BWCOREMOTIONMETADATASOURCENODE_H

@class CMMotionManager;
@protocol OS_dispatch_queue;


#import "BWSourceNode.h"

@interface BWCoreMotionMetadataSourceNode : BWSourceNode {
    CMMotionManager *_motionManager;
    int _bufferGenerationRate;
    int _samplesPerBuffer;
    BOOL _running;
    *BWCoreMotionMetadataSampleData _sampleDataForBuffer;
    int _numSamplesInBuffer;
    *opaqueCMFormatDescription _boxedMetadataFormatDescription;
    unsigned int _localIDOfCoreMotionMetadata_BE;
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
}


@property (readonly, nonatomic) *opaqueCMFormatDescription formatDescription; // ivar: _formatDescription


+(int)extractBWCoreMotionMetadataFromBlockBuffer:(struct OpaqueCMBlockBuffer *)arg0 intoNativeEndianSampleData:(struct BWCoreMotionMetadataSampleData *)arg1 ;
+(int)extractBWCoreMotionMetadataFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 intoNativeEndianSampleData:(struct BWCoreMotionMetadataSampleData *)arg1 ;
+(void)initialize;
-(BOOL)start:(*id)arg0 ;
-(BOOL)stop:(*id)arg0 ;
-(id)initWithBufferGenerationRate:(int)arg0 samplesPerBuffer:(int)arg1 ;
-(id)nodeSubType;
-(struct OpaqueCMClock *)clock;
-(void)_emitMetadataSampleBuffer;
-(void)dealloc;


@end


#endif