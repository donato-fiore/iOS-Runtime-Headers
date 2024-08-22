// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKIMAGERENDERER_H
#define PKIMAGERENDERER_H


#import <Foundation/Foundation.h>

#import "PKMetalRendererController.h"

@interface PKImageRenderer : NSObject

@property (nonatomic) NSInteger cancelCount; // ivar: _cancelCount
@property (nonatomic) BOOL invertColors;
@property (retain, nonatomic) PKMetalRendererController *rendererController; // ivar: _rendererController
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) BOOL sixChannelBlending;
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (nonatomic) BOOL synchronous; // ivar: _synchronous


+(void)_fuzzTestUnzippedData:(id)arg0 ;
-(id)initSyncWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)initWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)initWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 renderQueue:(id)arg2 ;
-(id)initWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 renderQueue:(id)arg2 sixChannelBlending:(BOOL)arg3 ;
-(id)initWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 useMetal:(BOOL)arg2 ;
-(id)initWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 useMetal:(BOOL)arg2 renderQueue:(id)arg3 ;
-(void)_renderCGStrokes:(id)arg0 clippedToStrokeSpaceRect:(struct CGRect )arg1 scale:(CGFloat)arg2 completion:(id)arg3 ;
-(void)buildStrokeRenderCacheForDrawing:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)renderCGStrokes:(id)arg0 clippedToStrokeSpaceRect:(struct CGRect )arg1 scale:(CGFloat)arg2 completion:(id)arg3 ;
-(void)renderDrawing:(id)arg0 clippedToStrokeSpaceRect:(struct CGRect )arg1 scale:(CGFloat)arg2 completion:(id)arg3 ;
-(void)renderDrawing:(id)arg0 completion:(id)arg1 ;
-(void)renderStrokes:(id)arg0 clippedToStrokeSpaceRect:(struct CGRect )arg1 scale:(CGFloat)arg2 completion:(id)arg3 ;
-(void)resume;
-(void)setupWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 renderQueue:(id)arg2 sixChannelBlending:(BOOL)arg3 synchronous:(BOOL)arg4 ;
-(void)sixChannelCGRenderDrawing:(id)arg0 clippedToStrokeSpaceRect:(struct CGRect )arg1 scale:(CGFloat)arg2 completion:(id)arg3 ;
-(void)sixChannelCGRenderStrokes:(id)arg0 clippedToStrokeSpaceRect:(struct CGRect )arg1 scale:(CGFloat)arg2 completion:(id)arg3 ;


@end


#endif