// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAINTAREAVIEW_H
#define PKPAINTAREAVIEW_H

@class UIView, NSMutableArray, NSString;
@protocol PKDrawingGestureRecognizerDelegate, PKDrawingGestureTarget, PKShapeDrawingControllerDelegate, PKPaintAreaViewDelegate;


#import "PKDrawingGestureRecognizer.h"
#import "PKPaintAreaViewSurface.h"
#import "PKAlternativeStrokesAnimation.h"
#import "PKShapeDrawingController.h"
#import "PKTool.h"

@interface PKPaintAreaView : UIView <PKDrawingGestureRecognizerDelegate, PKDrawingGestureTarget, PKShapeDrawingControllerDelegate>

 {
    PKDrawingGestureRecognizer *_drawingGestureRecognizer;
    PKPaintAreaViewSurface *_currentPaintSurfaceObject;
    NSMutableArray *_liveSurfaces;
}


@property (retain, nonatomic) PKAlternativeStrokesAnimation *alternativeStrokesAnimation; // ivar: _alternativeStrokesAnimation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaintAreaViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fingerDrawingEnabled; // ivar: _fingerDrawingEnabled
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat liveAnimationStartTime; // ivar: _liveAnimationStartTime
@property (retain, nonatomic) PKShapeDrawingController *shapeDrawingController; // ivar: _shapeDrawingController
@property (readonly, nonatomic) CGAffineTransform strokeTransform;
@property (readonly) Class superclass;
@property (nonatomic) BOOL switchSurfacesDuringStrokes; // ivar: _switchSurfacesDuringStrokes
@property (retain, nonatomic) PKTool *tool; // ivar: _tool


-(BOOL)_isLiveAnimating;
-(BOOL)canAddStroke;
-(BOOL)canBecomeFirstResponder;
-(BOOL)drawingGestureRecognizer:(id)arg0 shouldBeginDrawingWithTouches:(id)arg1 event:(id)arg2 ;
-(id)_drawingController;
-(id)_rendererController;
-(id)hitSurface:(struct CGPoint )arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)shapeDrawingControllerRendererController:(id)arg0 ;
-(struct CGPoint )applyTransformToTouchLocation:(struct CGPoint )arg0 ;
-(struct CGPoint )applyTransformToTouchLocation:(struct CGPoint )arg0 previousPoint:(struct CGPoint )arg1 newSurface:(*id)arg2 ;
-(void)_commonInit;
-(void)_endAlternativeStrokeIfNecessaryAccepted:(BOOL)arg0 ;
-(void)checkAnimationsDidEndAtTime:(CGFloat)arg0 ;
-(void)drawingBegan:(id)arg0 ;
-(void)drawingCancelled;
-(void)drawingEnded:(id)arg0 ;
-(void)drawingEstimatedPropertiesUpdated:(id)arg0 ;
-(void)drawingMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)shapeDrawingControllerShapeDetectionCancelled:(id)arg0 ;
-(void)shapeDrawingControllerShapeGestureDetected:(id)arg0 ;
-(void)switchToNewPaintSurface:(id)arg0 ;
-(void)vsync:(CGFloat)arg0 ;


@end


#endif