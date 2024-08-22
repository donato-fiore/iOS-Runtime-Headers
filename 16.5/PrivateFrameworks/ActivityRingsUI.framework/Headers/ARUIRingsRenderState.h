// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUIRINGSRENDERSTATE_H
#define ARUIRINGSRENDERSTATE_H

@class NSString;
@protocol ARUIRendering, ARUIPrecompiledRendering, ARUIRingsState, MTLRenderPipelineState;

#import <Foundation/Foundation.h>


@interface ARUIRingsRenderState : NSObject <ARUIRendering, ARUIPrecompiledRendering, ARUIRingsState>

 {
    id<MTLRenderPipelineState> *_renderPipelineState;
}


@property (nonatomic) NSInteger centeredAroundPercentSegmentDrawCount; // ivar: _centeredAroundPercentSegmentDrawCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger renderArea; // ivar: _renderArea
@property (retain, nonatomic) NSObject<MTLRenderPipelineState> *renderPipelineState;
@property (readonly) Class superclass;


-(BOOL)shouldRunStateForRing:(id)arg0 ;
-(id)initWithDevice:(id)arg0 library:(id)arg1 ;
-(id)initWithPipelineLibrary:(id)arg0 ;
-(id)name;
-(id)renderPipelineDescriptorFromLibrary:(id)arg0 ;
-(void)didInitialize;


@end


#endif