// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLRENDERPASSSAMPLEBUFFERATTACHMENTDESCRIPTOR_H
#define MTLRENDERPASSSAMPLEBUFFERATTACHMENTDESCRIPTOR_H

@protocol NSCopying, MTLCounterSampleBuffer;

#import <Foundation/Foundation.h>


@interface MTLRenderPassSampleBufferAttachmentDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger endOfFragmentSampleIndex;
@property (nonatomic) NSUInteger endOfVertexSampleIndex;
@property (retain, nonatomic) NSObject<MTLCounterSampleBuffer> *sampleBuffer;
@property (nonatomic) NSUInteger startOfFragmentSampleIndex;
@property (nonatomic) NSUInteger startOfVertexSampleIndex;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif