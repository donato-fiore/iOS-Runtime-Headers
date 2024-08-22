// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKOVERLAYPATHVIEW_H
#define MKOVERLAYPATHVIEW_H

@class UIColor, NSArray;


#import "MKOverlayView.h"

@interface MKOverlayPathView : MKOverlayView {
    UIColor *_fillColor;
    UIColor *_strokeColor;
    CGFloat _lineWidth;
    int _lineJoin;
    int _lineCap;
    CGFloat _miterLimit;
    CGFloat _lineDashPhase;
    NSArray *_lineDashPattern;
    *CGPath _path;
}


@property (retain) UIColor *fillColor;
@property int lineCap;
@property (copy) NSArray *lineDashPattern;
@property CGFloat lineDashPhase;
@property int lineJoin;
@property CGFloat lineWidth;
@property CGFloat miterLimit;
@property *CGPath path;
@property (retain) UIColor *strokeColor;


-(BOOL)canDrawMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 ;
-(id)initWithOverlay:(id)arg0 ;
-(void)_performInitialConfiguration;
-(void)applyFillPropertiesToContext:(struct CGContext *)arg0 atZoomScale:(CGFloat)arg1 ;
-(void)applyStrokePropertiesToContext:(struct CGContext *)arg0 atZoomScale:(CGFloat)arg1 ;
-(void)createPath;
-(void)dealloc;
-(void)drawMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;
-(void)fillPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)invalidatePath;
-(void)strokePath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif