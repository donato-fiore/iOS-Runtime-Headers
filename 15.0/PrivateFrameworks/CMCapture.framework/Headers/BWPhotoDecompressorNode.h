// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWPHOTODECOMPRESSORNODE_H
#define BWPHOTODECOMPRESSORNODE_H

@class NSMutableArray, NSMutableSet;


#import "BWNode.h"
#import "BWPhotoDecompressor.h"

@interface BWPhotoDecompressorNode : BWNode {
    BOOL _downstreamIsSharingOutputPool;
    BOOL _synchronizedSlaveAttachedMediaDecompressionEnabled;
    BWPhotoDecompressor *_photoDecompressor;
    BWPhotoDecompressor *_synchronizedSlavePhotoDecompressor;
    NSMutableArray *_emitSampleBufferSemaphores;
    NSMutableArray *_emitSynchronizedSlaveSampleBufferSemaphores;
    NSMutableSet *_disabledSynchronizedSlaveSemaphores;
    int _numberOfTimesWaited;
    int _numberOfBuffersEmitted;
    int _numberOfTimesSynchronizedSlaveWaited;
    int _numberOfSynchronizedSlaveBuffersEmitted;
}




+(void)initialize;
-(BOOL)downstreamIsSharingOutputPool;
-(id)initWithSynchronizedSlaveAttachedMediaDecompressionEnabled:(BOOL)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)_ensureSemaphoresAreBalanced;
-(void)_releaseResources;
-(void)_setOverCaptureSynchronizedSlaveSemaphoreEnabled:(BOOL)arg0 ;
-(void)addEmitSampleBufferSemaphore:(id)arg0 ;
-(void)addEmitSynchronizedSlaveSampleBufferSemaphore:(id)arg0 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setDownstreamIsSharingOutputPool:(BOOL)arg0 ;


@end


#endif