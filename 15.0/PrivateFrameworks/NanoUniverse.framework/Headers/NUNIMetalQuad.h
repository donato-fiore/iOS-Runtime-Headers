// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUNIMETALQUAD_H
#define NUNIMETALQUAD_H

@class CLKUIQuad;


#import "NUNIRenderer.h"
#import "NUNIResources.h"
#import "NUNIScene.h"

@interface NUNIMetalQuad : CLKUIQuad {
    CGFloat _baseTime;
    NUNIRenderer *_renderer;
    NUNIResources *_resources;
    CGSize _viewport;
    BOOL _isPrepared;
}


@property (retain, nonatomic) NUNIScene *scene; // ivar: _scene


-(BOOL)prepareForTime:(CGFloat)arg0 ;
-(id)initWithResources:(id)arg0 ;
-(void)performOffscreenPassesWithCommandBuffer:(id)arg0 ;
-(void)renderForDisplayWithEncoder:(id)arg0 ;
-(void)setupForQuadView:(id)arg0 ;


@end


#endif