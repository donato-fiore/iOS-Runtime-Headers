// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTIONLAYER_H
#define FIGCAPTIONLAYER_H

@class NSString;
@protocol CALayerDelegate;


#import "FigBaseCALayer.h"
#import "FigCaptionLayerPrivate.h"

@interface FigCaptionLayer : FigBaseCALayer <CALayerDelegate>

 {
    FigCaptionLayerPrivate *_priv;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)layoutSublayers;
-(void)processCaptionCommand:(unsigned int)arg0 data:(id)arg1 ;
-(void)resetCaptions;
-(void)setCaptionsAvoidanceMargins:(struct FigGeometryMargins )arg0 ;
-(void)setFontName:(char *)arg0 ;
-(void)setOptions:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setSeparatedValue:(BOOL)arg0 ;
-(void)setVideoRelativeToViewport:(struct CGRect )arg0 ;
-(void)updateDisplay:(struct OpaqueFigCFCaptionRenderer *)arg0 ;


@end


#endif