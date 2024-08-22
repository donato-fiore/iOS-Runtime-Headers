// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PNPWIZARDSCRATCHPADVIEW_H
#define PNPWIZARDSCRATCHPADVIEW_H

@class UIView, CAShapeLayer, NSMutableArray, NSArray, NSTimer, NSString;
@protocol PKCanvasViewDelegate, PNPPencilInteractionEventDestination, PNPWizardScratchpadViewDelegate;


#import "PNPWizardScratchpadCanvasView.h"
#import "PNPWizardInkWeightControl.h"
#import "PNPWizardScratchpadToast.h"

@interface PNPWizardScratchpadView : UIView <PKCanvasViewDelegate, PNPPencilInteractionEventDestination>

 {
    UIView *_backgroundView;
    PNPWizardScratchpadCanvasView *_canvasView;
    PNPWizardScratchpadCanvasView *_fingerDrawingCanvasView;
    CAShapeLayer *_frameLayer;
    PNPWizardInkWeightControl *_inkWeightControl;
    BOOL _inkWeightControlVisible;
    NSInteger _selectedInkIndex;
    NSInteger _previousMarkingToolIndex;
    NSMutableArray *_inkViews;
    NSArray *_colors;
    UIView *_toolsBackgroundPillView;
    PNPWizardScratchpadToast *_toastView;
    NSTimer *_showToastTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PNPWizardScratchpadViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDrawing; // ivar: _isDrawing
@property (readonly, nonatomic) CGPoint pointForFirstTool;
@property (nonatomic) BOOL showingToast; // ivar: _showingToast
@property (nonatomic) NSUInteger step; // ivar: _step
@property (readonly) Class superclass;


-(BOOL)_viewIsPartOfStylusCanvasView:(id)arg0 ;
-(id)_selectedInk;
-(id)_selectedInkView;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_animateAdjustmentSliderAppearance:(id)arg0 ;
-(void)_animateInkChange:(id)arg0 ;
-(void)_animateLayoutChange:(id)arg0 ;
-(void)_canvasViewWillBeginDrawing:(id)arg0 ;
-(void)_deselectAllInks;
-(void)_dismissToastNotification;
-(void)_initializeToastViewIfNecessary;
-(void)_inkViewPressed:(id)arg0 ;
-(void)_selectInkAtIndex:(NSInteger)arg0 ;
-(void)_showToastNotificationAndAnimateStrokeAway;
-(void)_showToastNotificationWithInitialAnimation;
-(void)_triggerShowToastTimer;
-(void)canvasViewDidBeginDrawing:(id)arg0 ;
-(void)canvasViewDidEndDrawing:(id)arg0 ;
-(void)clearCanvas;
-(void)eventSource:(id)arg0 hadPencilDoubleTapped:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareCanvasViews;
-(void)viewWillMoveToSuperview:(id)arg0 ;


@end


#endif