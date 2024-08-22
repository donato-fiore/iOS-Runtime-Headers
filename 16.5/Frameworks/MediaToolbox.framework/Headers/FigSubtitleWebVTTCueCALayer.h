// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGSUBTITLEWEBVTTCUECALAYER_H
#define FIGSUBTITLEWEBVTTCUECALAYER_H

@class NSString;
@protocol CALayerDelegate;


#import "FigSubtitleBackdropCALayer.h"

@interface FigSubtitleWebVTTCueCALayer : FigSubtitleBackdropCALayer <CALayerDelegate>

 {
    *OpaqueFigSubtitleWebVTTCueCALayerInternal layerInternal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(struct CGRect )getSuggestedBounds:(unsigned char)arg0 ;
-(struct __CFString *)getContentID;
-(unsigned char)isDirty;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)setContent:(struct __CFAttributedString *)arg0 ;
-(void)setCuePosition:(struct CGPoint )arg0 ;
-(void)setDefaultFontSize:(CGFloat)arg0 ;
-(void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg0 ;
-(void)setViewport:(struct CGRect )arg0 ;


@end


#endif