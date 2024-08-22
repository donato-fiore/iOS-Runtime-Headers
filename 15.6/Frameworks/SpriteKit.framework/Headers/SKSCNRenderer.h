// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKSCNRENDERER_H
#define SKSCNRENDERER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SKLabelNode.h"
#import "SKScene.h"

@interface SKSCNRenderer : NSObject {
    CGFloat _timePreviousUpdate;
    *void _skcRenderer;
    NSMutableDictionary *_viewRenderOptions;
    SKLabelNode *_statsLabel;
    CGFloat _prevViewAspect;
    unsigned int _spritesRendered;
    unsigned int _spritesSubmitted;
    int _frames;
    unsigned int _prevSpritesRendered;
    unsigned int _prevSpritesRenderedSubmitted;
    CGFloat _timeBeginFrameCount;
    float _fps;
    BOOL _hasRenderedOnce;
    BOOL _hasRenderedForCurrentUpdate;
    BOOL _isInTransition;
    BOOL _disableInput;
    float _prevBackingScaleFactor;
}


@property (nonatomic) CGFloat backingScaleFactor; // ivar: _backingScaleFactor
@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (nonatomic) BOOL ignoresSiblingOrder;
@property (retain, nonatomic) SKScene *scene; // ivar: _scene
@property (nonatomic) BOOL showsDrawCount;
@property (nonatomic) BOOL showsFPS; // ivar: showsFPS
@property (nonatomic) BOOL showsFields;
@property (nonatomic) BOOL showsNodeCount; // ivar: showsNodeCount
@property (nonatomic) BOOL showsPhysics;


+(id)rendererWithContext:(id)arg0 options:(id)arg1 ;
+(id)rendererWithDevice:(id)arg0 options:(id)arg1 ;
+(int)getOpenGLFramebuffer:(id)arg0 ;
+(void)restoreDefaultOpenGLState:(id)arg0 frameBuffer:(int)arg1 ;
+(void)setPrefersOpenGL:(BOOL)arg0 ;
-(BOOL)_shouldCenterStats;
-(BOOL)_showsCPUStats;
-(BOOL)_showsCoreAnimationFPS;
-(BOOL)_showsCulledNodesInNodeCount;
-(BOOL)_showsGPUStats;
-(BOOL)_showsOutlineInterior;
-(BOOL)_showsSpriteBounds;
-(BOOL)_showsTotalAreaRendered;
-(BOOL)showsQuadCount;
-(BOOL)showsSpriteBounds;
-(CGFloat)_fps;
-(id)_getDestBounds;
-(id)_getOptions;
-(id)_getViewport;
-(id)init;
-(id)initWithSKCRenderer:(*void)arg0 ;
-(int)_spriteRenderCount;
-(int)_spriteSubmitCount;
-(struct ? )_getMatrix;
-(struct CGSize )pixelSize;
-(void)_initialize;
-(void)_showAllStats;
-(void)_update:(CGFloat)arg0 ;
-(void)dealloc;
-(void)render:(BOOL)arg0 ;
-(void)renderToFramebuffer:(int)arg0 shouldClear:(BOOL)arg1 ;
-(void)renderToTexture:(id)arg0 commandQueue:(id)arg1 ;
-(void)renderTransition:(id)arg0 toFramebuffer:(int)arg1 withInputTexture:(unsigned int)arg2 outputTexture:(unsigned int)arg3 inputTextureSize:(struct CGSize )arg4 outputTextureSize:(struct CGSize )arg5 time:(float)arg6 ;
-(void)renderTransition:(id)arg0 withInputTexture:(id)arg1 outputTexture:(id)arg2 time:(float)arg3 encoder:(id)arg4 pass:(id)arg5 commandQueue:(id)arg6 ;
-(void)renderTransition:(id)arg0 withInputTexture:(unsigned int)arg1 outputTexture:(unsigned int)arg2 inputTextureSize:(struct CGSize )arg3 outputTextureSize:(struct CGSize )arg4 time:(float)arg5 ;
-(void)renderWithEncoder:(id)arg0 pass:(id)arg1 commandQueue:(id)arg2 ;
-(void)setShowsQuadCount:(BOOL)arg0 ;
-(void)setShowsSpriteBounds:(BOOL)arg0 ;
-(void)set_shouldCenterStats:(BOOL)arg0 ;
-(void)set_showsCPUStats:(BOOL)arg0 ;
-(void)set_showsCoreAnimationFPS:(BOOL)arg0 ;
-(void)set_showsCulledNodesInNodeCount:(BOOL)arg0 ;
-(void)set_showsGPUStats:(BOOL)arg0 ;
-(void)set_showsOutlineInterior:(BOOL)arg0 ;
-(void)set_showsSpriteBounds:(BOOL)arg0 ;
-(void)set_showsTotalAreaRendered:(BOOL)arg0 ;
-(void)settingsForTransition:(id)arg0 atTime:(CGFloat)arg1 renderIncomingToTexture:(*BOOL)arg2 renderOutgoingToTexture:(*BOOL)arg3 renderIncomingToScreen:(*BOOL)arg4 renderOutgoingToScreen:(*BOOL)arg5 ;
-(void)setupContext;
-(void)updateAtTime:(CGFloat)arg0 ;


@end


#endif