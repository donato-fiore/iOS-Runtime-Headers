// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIVIDEODECODER_H
#define HMIVIDEODECODER_H

@class NSString, HMFWeakObject;
@protocol HMFLogging, HMIVideoDecoderDelegate, OS_dispatch_queue;


#import "HMIVideoProcessingNode.h"

@interface HMIVideoDecoder : HMIVideoProcessingNode <HMFLogging>



@property *opaqueCMBufferQueue buffer; // ivar: _buffer
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMIVideoDecoderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property ? lastSampleBufferDTS; // ivar: _lastSampleBufferDTS
@property ? lastSampleBufferPTS; // ivar: _lastSampleBufferPTS
@property (retain) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) NSUInteger reorderBufferSize; // ivar: _reorderBufferSize
@property *OpaqueVTDecompressionSession session; // ivar: _session
@property (readonly) Class superclass;
@property (retain) HMFWeakObject *weakDecoder; // ivar: _weakDecoder
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_createSessionWithFormatDescription:(struct opaqueCMFormatDescription *)arg0 ;
-(BOOL)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 outputFrame:(BOOL)arg1 ;
-(id)init;
-(id)initWithFrameReordering:(BOOL)arg0 ;
-(void)_didDecodeSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_evictSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_failWithDescription:(id)arg0 ;
-(void)dealloc;
-(void)flush;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif