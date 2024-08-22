// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DRENDERPROCESSOR_H
#define TSCH3DRENDERPROCESSOR_H


#import <Foundation/Foundation.h>

#import "TSCH3DFramebuffer.h"

@interface TSCH3DRenderProcessor : NSObject

@property (retain, nonatomic) TSCH3DFramebuffer *activeFramebuffer; // ivar: _activeFramebuffer


+(id)processor;
+(void)initialize;
-(BOOL)canRenderPrefilteredLines;
-(id)effects;
-(struct RenderHints )renderHints;
-(struct RenderState )renderState;
-(void)beginFrame;
-(void)endFrame;
-(void)geometry:(id)arg0 ;
-(void)normals:(id)arg0 ;
-(void)popRenderState;
-(void)popState;
-(void)pushRenderState;
-(void)pushState;
-(void)resetBuffers;
-(void)setRenderHints:(*void)arg0 ;
-(void)setRenderState:(*void)arg0 ;
-(void)texcoords:(id)arg0 ;
-(void)updateRenderState;
-(void)wipeActiveFramebuffer:(*void)arg0 ;


@end


#endif