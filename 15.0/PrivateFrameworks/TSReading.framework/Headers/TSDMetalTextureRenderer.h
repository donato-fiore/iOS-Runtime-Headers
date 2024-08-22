// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMETALTEXTURERENDERER_H
#define TSDMETALTEXTURERENDERER_H

@class NSMutableArray, NSArray;
@protocol TSDMTLDataBuffer;

#import <Foundation/Foundation.h>

#import "TSDMetalContext.h"
#import "TSDMetalShader.h"
#import "TSDMetalRenderTarget.h"

@interface TSDMetalTextureRenderer : NSObject {
    TSDMetalContext *_metalContext;
    CGSize _size;
    NSMutableArray *_drawValues;
    TSDMetalShader *_shader;
    TSDMetalShader *_blendingShader;
    id<TSDMTLDataBuffer> *_encodingDataBuffer;
    TSDMetalRenderTarget *_renderTarget;
}


@property (readonly, nonatomic) NSArray *dataBuffers; // ivar: _dataBuffers
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (nonatomic) BOOL shouldDrawOffscreenPass; // ivar: _shouldDrawOffscreenPass
@property (retain, nonatomic) NSArray *textures; // ivar: _textures


-(id)initWithTextures:(id)arg0 size:(struct CGSize )arg1 context:(id)arg2 ;
-(void)drawWithEncoder:(id)arg0 andContext:(id)arg1 atPercent:(CGFloat)arg2 ;
-(void)p_generateValuesAndBuffers;
-(void)p_setupBlendingShader;
-(void)p_setupOffscreenPass;
-(void)p_setupShader;
-(void)updateWithTexture:(id)arg0 blendPercent:(CGFloat)arg1 outgoingTexture:(id)arg2 incomingTexture:(id)arg3 ;
-(void)updateWithTexture:(id)arg0 opacity:(CGFloat)arg1 ;
-(void)updateWithTexture:(id)arg0 transform:(struct CATransform3D )arg1 opacity:(CGFloat)arg2 cullBackFace:(BOOL)arg3 ;


@end


#endif