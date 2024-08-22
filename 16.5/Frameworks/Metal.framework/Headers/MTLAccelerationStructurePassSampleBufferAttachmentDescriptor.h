// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLACCELERATIONSTRUCTUREPASSSAMPLEBUFFERATTACHMENTDESCRIPTOR_H
#define MTLACCELERATIONSTRUCTUREPASSSAMPLEBUFFERATTACHMENTDESCRIPTOR_H

@protocol NSCopying, MTLCounterSampleBuffer;

#import <Foundation/Foundation.h>


@interface MTLAccelerationStructurePassSampleBufferAttachmentDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger endOfEncoderSampleIndex; // ivar: _endOfEncoderSampleIndex
@property (retain, nonatomic) NSObject<MTLCounterSampleBuffer> *sampleBuffer; // ivar: _sampleBuffer
@property (nonatomic) NSUInteger startOfEncoderSampleIndex; // ivar: _startOfEncoderSampleIndex


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif