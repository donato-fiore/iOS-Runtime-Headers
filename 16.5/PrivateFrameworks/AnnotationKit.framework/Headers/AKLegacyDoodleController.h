// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKLEGACYDOODLECONTROLLER_H
#define AKLEGACYDOODLECONTROLLER_H

@class NSString, NSMutableArray;
@protocol AKSmoothPathViewDelegate, AKShapeDetectionControllerDelegate;

#import <Foundation/Foundation.h>

#import "AKAnnotation.h"
#import "AKController.h"
#import "AKSmoothPathView.h"
#import "AKShapeDetectionController.h"

@interface AKLegacyDoodleController : NSObject <AKSmoothPathViewDelegate, AKShapeDetectionControllerDelegate>



@property (retain) AKAnnotation *coalescedAnnotation; // ivar: _coalescedAnnotation
@property (nonatomic) BOOL coalescesDoodles; // ivar: _coalescesDoodles
@property (weak) AKController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL ignoreAnnotationAndSelectionKVO; // ivar: _ignoreAnnotationAndSelectionKVO
@property (retain, nonatomic) AKSmoothPathView *intelligentSketchOverlayView; // ivar: _intelligentSketchOverlayView
@property BOOL isShowingOverlay; // ivar: _isShowingOverlay
@property BOOL isWaitingToCoalesceStrokes; // ivar: _isWaitingToCoalesceStrokes
@property (copy, nonatomic) id *performRecognitionBlock; // ivar: _performRecognitionBlock
@property (nonatomic) BOOL preferDoodle; // ivar: _preferDoodle
@property BOOL pressureSensitiveDoodleMode; // ivar: _pressureSensitiveDoodleMode
@property (retain) NSMutableArray *recentDoodlePaths; // ivar: _recentDoodlePaths
@property (retain) NSMutableArray *recentDoodlesAnnotations; // ivar: _recentDoodlesAnnotations
@property CGRect recentDrawingBoundsInInputView; // ivar: _recentDrawingBoundsInInputView
@property (nonatomic) BOOL selectNewlyCreatedAnnotations; // ivar: _selectNewlyCreatedAnnotations
@property (retain, nonatomic) AKShapeDetectionController *shapeDetectionController; // ivar: _shapeDetectionController
@property (nonatomic, getter=shapeDetectionEnabled) BOOL shapeDetectionEnabled; // ivar: _shapeDetectionEnabled
@property (readonly) Class superclass;


-(BOOL)isIgnoringAnnotationAndSelectionKVO:(id)arg0 ;
-(BOOL)isShowingCandidatePicker;
-(BOOL)shapeDetectionController:(id)arg0 shouldSelectCandidateAnnotation:(id)arg1 ;
-(id)createDoodleAnnotationWithPath:(struct CGPath *)arg0 drawingBoundsInView:(struct CGRect )arg1 drawingCenter:(struct CGPoint )arg2 pathIsPrestroked:(BOOL)arg3 shouldGoToPageController:(*id)arg4 ;
-(id)initWithController:(id)arg0 ;
-(id)overlayView:(id)arg0 ;
-(struct CGRect )_frameForOurOverlayInHostingView:(id)arg0 ;
-(struct CGRect )shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg0 ;
-(void)_addAnnotationImmediatelyFor:(struct CGPath *)arg0 withDrawingCenter:(struct CGPoint )arg1 drawingBoundsInView:(struct CGRect )arg2 pathIsPrestroked:(BOOL)arg3 isSingelDot:(BOOL)arg4 fromInputView:(id)arg5 ;
-(void)_beginOrExtendCoalescingTimer;
-(void)_clearCoalescingState;
-(void)_coalesceDrawingsCancelled;
-(void)_coalesceRecentDrawings;
-(void)_executeDeferredRecognition;
-(void)_inputView:(id)arg0 didCollectPath:(struct CGPath *)arg1 isPrestroked:(BOOL)arg2 ;
-(void)_removeAnnotations:(id)arg0 mostLikelyFromPageController:(id)arg1 ;
-(void)_scheduleDelayedRecognitionForDrawing:(id)arg0 withPath:(struct CGPath *)arg1 boundsInView:(struct CGRect )arg2 center:(struct CGPoint )arg3 isPrestroked:(BOOL)arg4 ;
-(void)beginIgnoringAnnotationSelectionObservation:(id)arg0 ;
-(void)dealloc;
-(void)dismissCandidatePicker;
-(void)enclosingScrollViewNotification:(id)arg0 ;
-(void)endIgnoringAnnotationSelectionObservation:(id)arg0 ;
-(void)handleDragAction:(id)arg0 ;
-(void)handleForwardedEvent:(id)arg0 ;
-(void)handleTapAction:(id)arg0 ;
-(void)inputView:(id)arg0 didCollectPath:(struct CGPath *)arg1 ;
-(void)inputView:(id)arg0 didCollectPrestrokedPath:(struct CGPath *)arg1 ;
-(void)inputViewWillStartDrawing:(id)arg0 ;
-(void)removeOverlay;
-(void)shapeDetectionControllerWillPickCandidate:(id)arg0 isInk:(BOOL)arg1 ;
-(void)showOverlay;
-(void)toolbarNotification:(id)arg0 ;
-(void)updateOverlayBoundsAndBackingScale:(id)arg0 ;
-(void)updateStrokeAttributes;


@end


#endif