// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PNPWIZARDSCRATCHPADCANVASVIEW_H
#define PNPWIZARDSCRATCHPADCANVASVIEW_H

@class UIView, NSMutableArray, PKInk, PKCanvasView, UIGestureRecognizer;
@protocol PKCanvasViewDelegate;



@interface PNPWizardScratchpadCanvasView : UIView {
    NSMutableArray *_snapshotImageViews;
    PKInk *_ink;
    id<PKCanvasViewDelegate> *_canvasViewDelegate;
}


@property (readonly, nonatomic) PKCanvasView *canvasView; // ivar: _canvasView
@property (weak, nonatomic) NSObject<PKCanvasViewDelegate> *delegate;
@property (readonly, nonatomic) UIGestureRecognizer *drawingGestureRecognizer;
@property (retain, nonatomic) PKInk *ink;
@property (nonatomic) BOOL showingSnapshot; // ivar: _showingSnapshot


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_playClearAnimationWithImage:(id)arg0 ;
-(void)clearDrawingAnimated;
-(void)layoutSubviews;
-(void)prepareCanvasView;


@end


#endif