// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARUIRENDERSTATE_H
#define ARUIRENDERSTATE_H

@class NSString;
@protocol ARUIRendering, MTLRenderPipelineState;

#import <Foundation/Foundation.h>


@interface ARUIRenderState : NSObject <ARUIRendering>

 {
    id<MTLRenderPipelineState> *_renderPipelineState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MTLRenderPipelineState> *renderPipelineState;
@property (readonly) Class superclass;


-(id)initWithDevice:(id)arg0 library:(id)arg1 ;
-(id)renderPipelineDescriptorFromLibrary:(id)arg0 ;


@end


#endif