// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARUISPRITEPARTICLERENDERSTATE_H
#define ARUISPRITEPARTICLERENDERSTATE_H

@class NSString;
@protocol ARUIRendering, ARUIPrecompiledRendering, MTLRenderPipelineState;

#import <Foundation/Foundation.h>


@interface ARUISpriteParticleRenderState : NSObject <ARUIRendering, ARUIPrecompiledRendering>

 {
    id<MTLRenderPipelineState> *_renderPipelineState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MTLRenderPipelineState> *renderPipelineState;
@property (readonly) Class superclass;


-(id)initWithDevice:(id)arg0 library:(id)arg1 ;
-(id)initWithPipelineLibrary:(id)arg0 ;
-(id)name;
-(id)renderPipelineDescriptorFromLibrary:(id)arg0 ;


@end


#endif