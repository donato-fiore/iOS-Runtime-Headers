// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLRENDERPASSATTACHMENTDESCRIPTOR_H
#define MTLRENDERPASSATTACHMENTDESCRIPTOR_H

@protocol NSCopying, MTLTexture;

#import <Foundation/Foundation.h>


@interface MTLRenderPassAttachmentDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger depthPlane;
@property (nonatomic) NSUInteger level;
@property (nonatomic) NSUInteger loadAction;
@property (nonatomic) NSUInteger resolveDepthPlane;
@property (nonatomic) NSUInteger resolveLevel;
@property (nonatomic) NSUInteger resolveSlice;
@property (retain, nonatomic) NSObject<MTLTexture> *resolveTexture;
@property (nonatomic) NSUInteger slice;
@property (nonatomic) NSUInteger storeAction;
@property (nonatomic) NSUInteger storeActionOptions;
@property (retain, nonatomic) NSObject<MTLTexture> *texture;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif