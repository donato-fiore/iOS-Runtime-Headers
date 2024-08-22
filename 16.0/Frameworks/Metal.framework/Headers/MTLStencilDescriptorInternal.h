// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLSTENCILDESCRIPTORINTERNAL_H
#define MTLSTENCILDESCRIPTORINTERNAL_H



#import "MTLStencilDescriptor.h"

@interface MTLStencilDescriptorInternal : MTLStencilDescriptor {
    MTLStencilDescriptorPrivate _private;
}


@property (readonly) *MTLStencilDescriptorPrivate stencilPrivate;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)depthFailureOperation;
-(NSUInteger)depthStencilPassOperation;
-(NSUInteger)hash;
-(NSUInteger)stencilCompareFunction;
-(NSUInteger)stencilFailureOperation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(unsigned int)readMask;
-(unsigned int)writeMask;
-(void)setDepthFailureOperation:(NSUInteger)arg0 ;
-(void)setDepthStencilPassOperation:(NSUInteger)arg0 ;
-(void)setReadMask:(unsigned int)arg0 ;
-(void)setStencilCompareFunction:(NSUInteger)arg0 ;
-(void)setStencilFailureOperation:(NSUInteger)arg0 ;
-(void)setWriteMask:(unsigned int)arg0 ;


@end


#endif