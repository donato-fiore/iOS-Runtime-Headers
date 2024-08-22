// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLTOOLSPARALLELRENDERCOMMANDENCODER_H
#define MTLTOOLSPARALLELRENDERCOMMANDENCODER_H

@class NSString;
@protocol MTLParallelRenderCommandEncoder, MTLDevice;


#import "MTLToolsCommandEncoder.h"

@interface MTLToolsParallelRenderCommandEncoder : MTLToolsCommandEncoder <MTLParallelRenderCommandEncoder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;


-(BOOL)isMemorylessRender;
-(id)renderCommandEncoder;
-(void)endEncoding;
-(void)setColorStoreAction:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setColorStoreActionOptions:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setDepthStoreAction:(NSUInteger)arg0 ;
-(void)setDepthStoreActionOptions:(NSUInteger)arg0 ;
-(void)setStencilStoreAction:(NSUInteger)arg0 ;
-(void)setStencilStoreActionOptions:(NSUInteger)arg0 ;


@end


#endif