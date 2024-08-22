// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKINKPAGEOVERLAYCONTROLLER_H
#define AKINKPAGEOVERLAYCONTROLLER_H

@class NSString;
@protocol AKInkOverlayViewDelegate, AKShapeDetectionControllerDelegate, PKRulerHostingDelegate;

#import <Foundation/Foundation.h>

#import "AKInkOverlayView.h"
#import "AKPageController.h"
#import "AKShapeDetectionController.h"

@interface AKInkPageOverlayController : NSObject <AKInkOverlayViewDelegate, AKShapeDetectionControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (copy) id *delayedShapeDetectionBlock; // ivar: _delayedShapeDetectionBlock
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL ignoreAnnotationAndSelectionKVO; // ivar: _ignoreAnnotationAndSelectionKVO
@property (retain) AKInkOverlayView *inkOverlayView; // ivar: _inkOverlayView
@property CGFloat lastStrokeEndTime; // ivar: _lastStrokeEndTime
@property BOOL onlyPencilDraws; // ivar: _onlyPencilDraws
@property (weak) AKPageController *pageController; // ivar: _pageController
@property (weak, nonatomic) NSObject<PKRulerHostingDelegate> *rulerHostingDelegate; // ivar: _rulerHostingDelegate
@property (retain) AKShapeDetectionController *shapeDetectionController; // ivar: _shapeDetectionController
@property (readonly) Class superclass;


+(id)newInkOverlayDrawingUndoTargetWithPageController:(id)arg0 ;
-(BOOL)inputViewCanBeginDrawing:(id)arg0 withTouch:(id)arg1 ;
-(BOOL)isIgnoringAnnotationAndSelectionKVO:(id)arg0 ;
-(BOOL)isWaitingToCoalesceStrokes;
-(BOOL)shapeDetectionController:(id)arg0 shouldSelectCandidateAnnotation:(id)arg1 ;
-(id)_convertCHDrawing:(id)arg0 fromDrawingInCanvasView:(id)arg1 toInkOverlayView:(id)arg2 ;
-(id)initWithPageController:(id)arg0 ;
-(id)overlayView:(id)arg0 ;
-(struct CGRect )_convertRect:(struct CGRect )arg0 fromDrawingInCanvasView:(id)arg1 toPageControllerModelSpace:(id)arg2 ;
-(struct CGRect )shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg0 ;
-(struct CGSize )scaleFromDrawingInCanvasView:(id)arg0 toPageControllerModelSpace:(id)arg1 ;
-(void)_controllerWillSave:(id)arg0 ;
-(void)_enclosingScrollViewDidScroll:(id)arg0 ;
-(void)_fullSetup;
-(void)_inkCanvasAnnotationUpdated:(id)arg0 ;
-(void)_inkDidChangeNotification:(id)arg0 ;
-(void)_partialTeardown;
-(void)_performDelayedShapeDetection;
-(void)_setupGestureDependencies;
-(void)_tearDownGestureDependencies;
-(void)_toolStatusUpdated:(id)arg0 ;
-(void)_updateAllowedTouchTypesAllEnabled:(BOOL)arg0 pencilEnabled:(BOOL)arg1 ;
-(void)_updateGestureDependencyPriority;
-(void)annotationEditingDidEndWithCompletion:(id)arg0 ;
-(void)beginIgnoringAnnotationSelectionObservation:(id)arg0 ;
-(void)didToggleRuler;
-(void)endIgnoringAnnotationSelectionObservation:(id)arg0 ;
-(void)inputView:(id)arg0 didCollectDrawingForAnalysis:(id)arg1 ;
-(void)inputViewDidBeginStroke:(id)arg0 ;
-(void)setup;
-(void)shapeDetectionControllerWillPickCandidate:(id)arg0 isInk:(BOOL)arg1 ;
-(void)teardown;


@end


#endif