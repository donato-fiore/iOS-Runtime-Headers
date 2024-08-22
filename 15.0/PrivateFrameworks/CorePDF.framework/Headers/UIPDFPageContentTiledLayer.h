// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPDFPAGECONTENTTILEDLAYER_H
#define UIPDFPAGECONTENTTILEDLAYER_H

@class CATiledLayer, CALayer;
@protocol UIPDFSelectionLayer;



@interface UIPDFPageContentTiledLayer : CATiledLayer <UIPDFSelectionLayer>

 {
    CALayer *_selectionLayer;
}




-(id)init;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)layoutSublayers;
-(void)setNeedsDisplay;
-(void)setSelectionNeedsDisplay;


@end


#endif