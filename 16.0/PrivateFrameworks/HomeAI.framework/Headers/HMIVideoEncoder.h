// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIVIDEOENCODER_H
#define HMIVIDEOENCODER_H

@class NSString;
@protocol HMFLogging, HMIVideoEncoderDelegate, OS_dispatch_queue;


#import "HMIVideoProcessingNode.h"

@interface HMIVideoEncoder : HMIVideoProcessingNode <HMFLogging>



@property (nonatomic) NSInteger averageBitRate;
@property (nonatomic) HMIVideoEncoderDataRate dataRateLimit;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMIVideoEncoderDelegate> *delegate; // ivar: _delegate
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat expectedDuration;
@property (nonatomic) NSInteger expectedFrameRate;
@property BOOL forceKeyFrameOnNextEncodedFrame; // ivar: _forceKeyFrameOnNextEncodedFrame
@property (readonly) NSUInteger hash;
@property (retain) NSString *logIdentifier; // ivar: _logIdentifier
@property (nonatomic) NSInteger maxFrameDelayCount;
@property (nonatomic) NSInteger maxKeyFrameIntervalDuration;
@property (readonly) NSUInteger numberOfDroppedFrames; // ivar: _numberOfDroppedFrames
@property (nonatomic) CGFloat quality;
@property *OpaqueVTCompressionSession session; // ivar: _session
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_initSessionWithDimensions:(struct ? )arg0 codecType:(unsigned int)arg1 useHardwareAcceleration:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)prepare;
-(id)initWithDimensions:(struct ? )arg0 codecType:(unsigned int)arg1 useHardwareAcceleration:(BOOL)arg2 error:(*id)arg3 ;
-(int)_getFloat64Property:(struct __CFString *)arg0 propertyValueOut:(*CGFloat)arg1 ;
-(int)_getProperty:(struct __CFString *)arg0 propertyValue:(**void)arg1 ;
-(int)_getSInt32Property:(struct __CFString *)arg0 propertyValueOut:(*int)arg1 ;
-(int)_setFloat64Property:(struct __CFString *)arg0 propertyValue:(CGFloat)arg1 ;
-(int)_setProperty:(struct __CFString *)arg0 propertyValue:(*void)arg1 ;
-(int)_setSInt32Property:(struct __CFString *)arg0 propertyValue:(int)arg1 ;
-(void)_invalidate;
-(void)_invalidateWithErr:(int)arg0 ;
-(void)dealloc;
-(void)flush;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif