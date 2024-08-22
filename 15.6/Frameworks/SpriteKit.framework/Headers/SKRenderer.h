// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKRENDERER_H
#define SKRENDERER_H

@class NSMapTable, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SKScene.h"
#import "SKTransition.h"

@interface SKRenderer : NSObject {
    BOOL _needsInitialUpdate;
    BOOL _disableInput;
    BOOL _hasRenderedForCurrentUpdate;
    CGFloat _currentTime;
    CGFloat _previousTime;
    *void _skcRenderer;
    SKScene *_nextScene;
    SKTransition *_transition;
    CGRect _renderBounds;
    NSMapTable *_touchMap;
    NSMutableDictionary *_renderOptions;
}


@property (nonatomic) BOOL ignoresSiblingOrder;
@property (retain, nonatomic) SKScene *scene; // ivar: _scene
@property (nonatomic) BOOL shouldCullNonVisibleNodes;
@property (nonatomic) BOOL showsDrawCount;
@property (nonatomic) BOOL showsFields;
@property (nonatomic) BOOL showsNodeCount;
@property (nonatomic) BOOL showsPhysics;
@property (nonatomic) BOOL showsQuadCount;


+(id)rendererWithDevice:(id)arg0 ;
-(id)_getOptions;
-(id)initWithSKCRenderer:(*void)arg0 ;
-(void)_initialize;
-(void)_notifyWillRenderContent;
-(void)_update:(CGFloat)arg0 ;
-(void)dealloc;
-(void)renderWithViewport:(struct CGRect )arg0 commandBuffer:(id)arg1 renderPassDescriptor:(id)arg2 ;
-(void)renderWithViewport:(struct CGRect )arg0 renderCommandEncoder:(id)arg1 renderPassDescriptor:(id)arg2 commandQueue:(id)arg3 ;
-(void)updateAtTime:(CGFloat)arg0 ;


@end


#endif