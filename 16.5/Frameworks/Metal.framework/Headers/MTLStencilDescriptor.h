// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLSTENCILDESCRIPTOR_H
#define MTLSTENCILDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLStencilDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger depthFailureOperation;
@property (nonatomic) NSUInteger depthStencilPassOperation;
@property (nonatomic) unsigned int readMask;
@property (nonatomic) NSUInteger stencilCompareFunction;
@property (nonatomic) NSUInteger stencilFailureOperation;
@property (readonly) *MTLStencilDescriptorPrivate stencilPrivate;
@property (nonatomic) unsigned int writeMask;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif