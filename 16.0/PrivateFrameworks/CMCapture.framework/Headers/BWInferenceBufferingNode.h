// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWINFERENCEBUFFERINGNODE_H
#define BWINFERENCEBUFFERINGNODE_H



#import "BWInferenceNode.h"
#import "BWInferenceResultRingBuffers.h"

@interface BWInferenceBufferingNode : BWInferenceNode

@property (readonly, retain, nonatomic) BWInferenceResultRingBuffers *ringBuffers; // ivar: _ringBuffers


-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg0 ;
-(id)initWithConvEngineSupportWithCaptureDevice:(id)arg0 scheduler:(id)arg1 priority:(unsigned int)arg2 ;
-(int)addInferenceOfType:(int)arg0 version:(struct ? )arg1 configuration:(id)arg2 ringBufferCapacity:(int)arg3 ;
-(void)dealloc;
-(void)willEmitSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif