// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKSHAPEDETECTIONCONTROLLER_H
#define AKSHAPEDETECTIONCONTROLLER_H

@class NSMutableArray, NSMutableDictionary, CHDrawing, CHRecognizer;
@protocol AKShapeDetectionControllerDelegate;

#import <Foundation/Foundation.h>

#import "AKAnnotation.h"
#import "AKCandidatePickerView_iOS.h"
#import "AKController.h"
#import "AKPageModelController.h"

@interface AKShapeDetectionController : NSObject

@property (retain, nonatomic) NSMutableArray *candidateAKTags; // ivar: _candidateAKTags
@property (retain, nonatomic) NSMutableDictionary *candidateAKTagsToAnnotationInfoMap; // ivar: _candidateAKTagsToAnnotationInfoMap
@property (weak, nonatomic) AKAnnotation *candidateAnnotation; // ivar: _candidateAnnotation
@property (retain, nonatomic) CHDrawing *candidateDrawing; // ivar: _candidateDrawing
@property (retain, nonatomic) AKCandidatePickerView_iOS *candidatePickerView; // ivar: _candidatePickerView
@property (nonatomic) BOOL coalescesDoodles; // ivar: _coalescesDoodles
@property (weak, nonatomic) AKController *controller; // ivar: _controller
@property (weak, nonatomic) NSObject<AKShapeDetectionControllerDelegate> *delegate; // ivar: _delegate
@property BOOL isPreviousCandidateAnnotationUndecided; // ivar: _isPreviousCandidateAnnotationUndecided
@property (readonly, nonatomic) BOOL isShowingCandidatePicker;
@property (retain, nonatomic) CHDrawing *lastDrawing; // ivar: _lastDrawing
@property (retain, nonatomic) AKPageModelController *modelControllerToObserveForAnnotationsAndSelections; // ivar: _modelControllerToObserveForAnnotationsAndSelections
@property (nonatomic) BOOL preferDoodle; // ivar: _preferDoodle
@property (nonatomic, getter=shapeDetectionEnabled) BOOL shapeDetectionEnabled; // ivar: _shapeDetectionEnabled
@property (retain, nonatomic) CHRecognizer *shapeRecognizer; // ivar: _shapeRecognizer
@property CGFloat veryHighConfidenceLevel; // ivar: _veryHighConfidenceLevel


+(BOOL)drawingIsValidForRecognition:(id)arg0 withPath:(struct CGPath *)arg1 ;
+(void)logAllResults:(id)arg0 ;
-(BOOL)_isResultVeryHighConfidence:(id)arg0 ;
-(NSInteger)_matchingBlurEffectStyleForCurrentTintColor:(id)arg0 ;
-(NSInteger)_toolTagForCHRecognitionResult:(id)arg0 ;
-(id)_createAnnotationWithRecognizerResult:(id)arg0 forDrawingBoundsInInputView:(struct CGRect )arg1 shouldGoToPageController:(*id)arg2 ;
-(id)_createDoodleShapeResultWithPath:(struct CGPath *)arg0 withDrawingCenter:(struct CGPoint )arg1 pathIsPrestroked:(BOOL)arg2 ;
-(id)_createFlippedCHDrawingFromCHDrawing:(id)arg0 withDrawingCenter:(struct CGPoint )arg1 ;
-(id)convertDrawingBoundsInInputView:(struct CGRect )arg0 outBoundsInPageModel:(struct CGRect *)arg1 ;
-(id)createInkResultFromInkDrawing:(id)arg0 annotation:(id)arg1 ;
-(id)initWithController:(id)arg0 ;
-(void)_performRecognitionOnDrawing:(id)arg0 withInkDrawing:(id)arg1 orWithDoodlePath:(struct CGPath *)arg2 boundsInInputView:(struct CGRect )arg3 center:(struct CGPoint )arg4 isPrestroked:(BOOL)arg5 optionalAnnotation:(id)arg6 ;
-(void)_pickCandidateResult:(id)arg0 ;
-(void)_pickCandidateResultWithAnnotationType:(NSInteger)arg0 ;
-(void)_presentCandidatePickerBarWithCandidates:(id)arg0 ofDrawing:(id)arg1 ;
-(void)_shouldDismissNotification:(id)arg0 ;
-(void)_showCandidatePickerWithTypes:(id)arg0 forDrawingInInputView:(id)arg1 shouldSurfaceDoodle:(BOOL)arg2 ;
-(void)_teardownCandidatePicker;
-(void)_teardownCandidatePickerBar;
-(void)clearPreviousCandidateAnnotation;
-(void)dealloc;
-(void)dismissCandidatePicker;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performRecognitionOnDrawing:(id)arg0 withDrawing:(id)arg1 annotation:(id)arg2 boundsInInputView:(struct CGRect )arg3 center:(struct CGPoint )arg4 ;
-(void)performRecognitionOnDrawing:(id)arg0 withPath:(struct CGPath *)arg1 boundsInInputView:(struct CGRect )arg2 center:(struct CGPoint )arg3 isPrestroked:(BOOL)arg4 ;
-(void)reset;


@end


#endif