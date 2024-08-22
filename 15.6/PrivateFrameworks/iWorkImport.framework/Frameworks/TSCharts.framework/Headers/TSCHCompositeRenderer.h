// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCOMPOSITERENDERER_H
#define TSCHCOMPOSITERENDERER_H

@class NSString, NSArray;
@protocol TSCHCompositeRendering;


#import "TSCHRenderer.h"

@interface TSCHCompositeRenderer : TSCHRenderer <TSCHCompositeRendering>

 {
    TSCHRenderer *_eventHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *renderers; // ivar: _subRenderers
@property (readonly) Class superclass;


+(void)p_delegateSelector:(SEL)arg0 toRenderer:(id)arg1 transparencyLayer:(int)arg2 inContext:(struct CGContext *)arg3 ;
+(void)renderTSCHCompositeRendering:(id)arg0 intoContext:(struct CGContext *)arg1 visible:(struct CGRect )arg2 ;
-(BOOL)needsAnySeparateLayers;
-(id)initWithChartRep:(id)arg0 withSubRenderers:(id)arg1 ;
-(id)transparencyLayers;
-(void)didBeginTransparencyLayer:(int)arg0 inContext:(struct CGContext *)arg1 ;
-(void)didEndTransparencyLayer:(int)arg0 inContext:(struct CGContext *)arg1 ;
-(void)drawIntoLayer:(int)arg0 inContext:(struct CGContext *)arg1 visible:(struct CGRect )arg2 ;
-(void)p_delegateSelectorToRenderers:(SEL)arg0 transparencyLayer:(int)arg1 inContext:(struct CGContext *)arg2 ;
-(void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;
-(void)willBeginTransparencyLayer:(int)arg0 inContext:(struct CGContext *)arg1 ;
-(void)willEndTransparencyLayer:(int)arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif