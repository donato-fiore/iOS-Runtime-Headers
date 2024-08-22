// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLRENDERPIPELINECOLORATTACHMENTDESCRIPTOR_H
#define MTLRENDERPIPELINECOLORATTACHMENTDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLRenderPipelineColorAttachmentDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger alphaBlendOperation;
@property (nonatomic, getter=isBlendingEnabled) BOOL blendingEnabled;
@property (nonatomic) NSUInteger destinationAlphaBlendFactor;
@property (nonatomic) NSUInteger destinationRGBBlendFactor;
@property (nonatomic) NSUInteger pixelFormat;
@property (nonatomic) NSUInteger rgbBlendOperation;
@property (nonatomic) NSUInteger sourceAlphaBlendFactor;
@property (nonatomic) NSUInteger sourceRGBBlendFactor;
@property (nonatomic) NSUInteger writeMask;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif