// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLBLITPASSSAMPLEBUFFERATTACHMENTDESCRIPTOR_H
#define MTLBLITPASSSAMPLEBUFFERATTACHMENTDESCRIPTOR_H

@protocol NSCopying, MTLCounterSampleBuffer;

#import <Foundation/Foundation.h>


@interface MTLBlitPassSampleBufferAttachmentDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger endOfEncoderSampleIndex;
@property (retain, nonatomic) NSObject<MTLCounterSampleBuffer> *sampleBuffer;
@property (nonatomic) NSUInteger startOfEncoderSampleIndex;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif