// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKINKSIGNATUREVIEW_H
#define AKINKSIGNATUREVIEW_H

@class UIView, PKCanvasView, NSString, PKDrawing, UIColor, PKTool;
@protocol PKCanvasViewDelegate;



@interface AKInkSignatureView : UIView <PKCanvasViewDelegate>



@property (retain) PKCanvasView *canvasView; // ivar: _canvasView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL hasStrokes; // ivar: _hasStrokes
@property (readonly) NSUInteger hash;
@property (retain) PKDrawing *latestDrawing; // ivar: _latestDrawing
@property (retain, nonatomic) UIColor *strokeColor; // ivar: _strokeColor
@property (readonly) Class superclass;
@property (copy) PKTool *tool; // ivar: _tool


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPath *)copyPotracedPathAndReturnDrawing:(*id)arg0 ;
-(void)_commonInit;
-(void)_updateTool;
-(void)canvasViewDrawingDidChange:(id)arg0 ;
-(void)clear;
-(void)layoutSubviews;
-(void)teardown;


@end


#endif