// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLDEPTHSTENCILDESCRIPTORINTERNAL_H
#define MTLDEPTHSTENCILDESCRIPTORINTERNAL_H



#import "MTLDepthStencilDescriptor.h"

@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor {
    MTLDepthStencilDescriptorPrivate _private;
}


@property (readonly) *MTLDepthStencilDescriptorPrivate depthStencilPrivate;


-(BOOL)isDepthWriteEnabled;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)depthCompareFunction;
-(NSUInteger)hash;
-(id)backFaceStencil;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)frontFaceStencil;
-(id)init;
-(id)label;
-(void)dealloc;
-(void)setBackFaceStencil:(id)arg0 ;
-(void)setDepthCompareFunction:(NSUInteger)arg0 ;
-(void)setDepthWriteEnabled:(BOOL)arg0 ;
-(void)setFrontFaceStencil:(id)arg0 ;
-(void)setLabel:(id)arg0 ;


@end


#endif