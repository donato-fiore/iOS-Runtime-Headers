// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVCMSAMPLEBUFFER_H
#define PVCMSAMPLEBUFFER_H


#import <Foundation/Foundation.h>

#import "PVImageBuffer.h"

@interface PVCMSampleBuffer : NSObject

@property (readonly, nonatomic) PVImageBuffer *backingPVImageBuffer; // ivar: _backingPVImageBuffer
@property (readonly, nonatomic) ? presentationTimeStamp;
@property (readonly, nonatomic) *opaqueCMSampleBuffer sampleBufferRef; // ivar: _sampleBufferRef


+(id)sampleBufferWithPVImageBuffer:(id)arg0 timestamp:(struct ? )arg1 frameDuration:(struct ? )arg2 ;
+(id)sampleBufferWithPVImageBuffer:(id)arg0 timestamp:(struct ? )arg1 frameDuration:(struct ? )arg2 error:(*id)arg3 ;
+(struct opaqueCMSampleBuffer *)createCMSampleBufferForPVImageBuffer:(id)arg0 timingInfo:(struct ? )arg1 error:(*id)arg2 ;
-(id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif