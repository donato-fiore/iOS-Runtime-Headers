// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGSUBTITLECALAYER_H
#define FIGSUBTITLECALAYER_H

@class NSString;
@protocol CALayerDelegate;


#import "FigSubtitleBackdropCALayer.h"

@interface FigSubtitleCALayer : FigSubtitleBackdropCALayer <CALayerDelegate>

 {
    *OpaqueFigSubtitleCALayerInternal layerInternal;
}


@property (copy, nonatomic) NSString *captionRenderingStrategy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;
@property (readonly) Class superclass;


+(id)defaultActionForKey:(id)arg0 ;
-(id)actionForKey:(id)arg0 ;
-(id)init;
-(id)initWithLayer:(id)arg0 ;
-(void)_addBoundsAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)_addPositionAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)addAnimations:(id)arg0 forKey:(id)arg1 ;
-(void)clear;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)handleNeedsLayoutNotification;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)removeAnimationsForKey:(id)arg0 ;
-(void)setCaptionRendererOutputOptions:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setCaptionRendererOutputSeparated:(BOOL)arg0 ;
-(void)setCaptionsAvoidanceMargins:(struct FigGeometryMargins )arg0 ;
-(void)setPlayer:(struct OpaqueFigPlayer *)arg0 ;
-(void)setSubtitleGravityNonObscuring:(unsigned char)arg0 ;
-(void)setVideoRelativeToViewport:(struct CGRect )arg0 ;
-(void)setVideosize:(struct CGSize )arg0 ;
-(void)setViewport:(struct CGRect )arg0 ;
-(void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg0 ;


@end


#endif