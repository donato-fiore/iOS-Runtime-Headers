// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPDFHIGHLIGHTER_H
#define UIPDFHIGHLIGHTER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface UIPDFHighlighter : NSObject {
    NSMutableArray *_highLightLayers;
    *CGColor _highlightColor;
    *CGColor _borderColor;
    *CGColor _whiteColor;
    *CGPDFPage _page;
    CGFloat _enlargeFactor;
    CGFloat _pdfToViewScale;
}


@property (nonatomic) CGFloat inset; // ivar: inset


-(id)init;
-(void)addAnimation:(id)arg0 ;
-(void)addHighlightFor:(id)arg0 to:(id)arg1 animated:(BOOL)arg2 ;
-(void)addHighlightLayerFor:(id)arg0 atIndex:(NSUInteger)arg1 to:(id)arg2 animated:(BOOL)arg3 ;
-(void)addRectPath:(struct CGPath *)arg0 toView:(id)arg1 layer:(id)arg2 rectangle:(struct ? )arg3 upright:(BOOL)arg4 ;
-(void)clear;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)makeTheBorderPath:(id)arg0 layer:(id)arg1 rectangle:(struct ? )arg2 upright:(BOOL)arg3 ;
-(void)makeTheClipPath:(id)arg0 layer:(id)arg1 rectangle:(struct ? )arg2 upright:(BOOL)arg3 ;
-(void)setNeedsDisplay;
-(void)unhide;


@end


#endif