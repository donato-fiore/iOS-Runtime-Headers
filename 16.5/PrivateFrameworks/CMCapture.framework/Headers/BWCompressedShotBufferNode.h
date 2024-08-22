// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWCOMPRESSEDSHOTBUFFERNODE_H
#define BWCOMPRESSEDSHOTBUFFERNODE_H

@class NSMutableArray, NSDictionary, NSString;
@protocol BWCompressedShotBuffer, OS_dispatch_queue;


#import "BWNode.h"
#import "BWNodeInput.h"
#import "BWNodeOutput.h"
#import "BWPhotoDecompressor.h"
#import "BWPixelBufferPool.h"

@interface BWCompressedShotBufferNode : BWNode <BWCompressedShotBuffer>

 {
    BWNodeInput *_sensorRawInput;
    BWNodeOutput *_sensorRawOutput;
    os_unfair_lock_s _bufferTrackingLock;
    int _inUseUncompressedBufferCount;
    int _inUseCompressedBufferCount;
    int _uncompressedEquivalentCapacity;
    NSInteger _inUseCompressedBytes;
    NSInteger _compressedByteCapacity;
    NSMutableArray *_queuedCompressedSampleBuffers;
    *CMPhotoCompressionSession _compressionSession;
    NSDictionary *_compressionOptions;
    int _compressionTiles;
    BOOL _compressedSurfacePoolEnabled;
    ? _compressionInputDimensions;
    NSObject<OS_dispatch_queue> *_decompressionQueue;
    BWPhotoDecompressor *_decompressor;
    BWPixelBufferPool *_decompressionPool;
    int _decompressionPoolCapacity;
    *opaqueCMFormatDescription _decompressionFormatDescription;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BWNodeInput *sensorRawInput;
@property (readonly, nonatomic) BWNodeOutput *sensorRawOutput;
@property (readonly) Class superclass;
@property (nonatomic) int uncompressedEquivalentCapacity;


+(void)initialize;
-(id)initWithThreadPriority:(unsigned int)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)flushAndWaitForUncompressedEquivalentFreeBufferCount:(int)arg0 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)handleStillImagePrewarmWithSettings:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif