// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLDEPTHSTENCILDESCRIPTOR_H
#define MTLDEPTHSTENCILDESCRIPTOR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTLStencilDescriptor.h"

@interface MTLDepthStencilDescriptor : NSObject <NSCopying>



@property (copy, nonatomic) MTLStencilDescriptor *backFaceStencil;
@property (nonatomic) NSUInteger depthCompareFunction;
@property (readonly) *MTLDepthStencilDescriptorPrivate depthStencilPrivate;
@property (nonatomic, getter=isDepthWriteEnabled) BOOL depthWriteEnabled;
@property (copy, nonatomic) MTLStencilDescriptor *frontFaceStencil;
@property (copy, nonatomic) NSString *label;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif