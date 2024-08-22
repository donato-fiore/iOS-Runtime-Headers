// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTILERENDERPIPELINECOLORATTACHMENTDESCRIPTORINTERNAL_H
#define MTLTILERENDERPIPELINECOLORATTACHMENTDESCRIPTORINTERNAL_H



#import "MTLTileRenderPipelineColorAttachmentDescriptor.h"

@interface MTLTileRenderPipelineColorAttachmentDescriptorInternal : MTLTileRenderPipelineColorAttachmentDescriptor {
    MTLTileRenderPipelineAttachmentDescriptorPrivate _private;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)pixelFormat;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(void)dealloc;
-(void)setPixelFormat:(NSUInteger)arg0 ;


@end


#endif