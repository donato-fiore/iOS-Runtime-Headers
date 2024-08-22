// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTCOMPOSITORTEXTUREPROVIDER_H
#define AVTCOMPOSITORTEXTUREPROVIDER_H

@class NSString, NSMutableSet;
@protocol SCNMaterialPropertyTextureProvider;

#import <Foundation/Foundation.h>

#import "AVTMemoji.h"
#import "AVTCompositor.h"
#import "AVTCompositorPipeline.h"

@interface AVTCompositorTextureProvider : NSObject <SCNMaterialPropertyTextureProvider>

 {
    AVTMemoji *_memoji;
    AVTCompositor *_compositor;
    AVTCompositorPipeline *_pipeline;
    NSString *_propertyName;
    BOOL _skinIsDirty;
    NSUInteger _componentDirtyMask;
    NSMutableSet *_helperTokens;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCompositor:(id)arg0 memoji:(id)arg1 propertyName:(id)arg2 ;
-(id)newTextureForDevice:(id)arg0 ;
-(void)componentDidChangeForTypes:(NSUInteger)arg0 ;
-(void)dealloc;
// -(void)renderToTexture:(id)arg0 computeCommandHandler:(id)arg1 blitCommandHandler:(unk)arg2 helper:(id)arg3  ;
-(void)skinColorDidChange;


@end


#endif