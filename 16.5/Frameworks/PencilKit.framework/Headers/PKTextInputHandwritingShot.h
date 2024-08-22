// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTEXTINPUTHANDWRITINGSHOT_H
#define PKTEXTINPUTHANDWRITINGSHOT_H

@class NSDictionary, NSMutableDictionary, NSMutableIndexSet, NSArray, NSString, NSNumber;
@protocol PKTextInputRecognitionManagerDataSource, PKTextInputDebugStateReporting, PKTextInputHandwritingShotDelegate;

#import <Foundation/Foundation.h>

#import "PKTextInputCanvasController.h"
#import "PKTextInputElementsController.h"
#import "PKDrawing.h"
#import "PKStroke.h"
#import "PKTextInputLanguageSpec.h"
#import "PKTextInputStrokeProvider.h"

@interface PKTextInputHandwritingShot : NSObject <PKTextInputRecognitionManagerDataSource, PKTextInputDebugStateReporting>



@property (nonatomic, setter=_setDidRequestTextInputElements:) BOOL _didRequestTextInputElements; // ivar: __didRequestTextInputElements
@property (copy, nonatomic, setter=_setInputElementsByRecognitionID:) NSDictionary *_inputElementsByRecognitionID; // ivar: __inputElementsByRecognitionID
@property (readonly, nonatomic) NSMutableDictionary *_inputElementsContentByRecognitionID; // ivar: __inputElementsContentByRecognitionID
@property (nonatomic) CGFloat _lastDrawingUpdateTimestamp; // ivar: __lastDrawingUpdateTimestamp
@property (retain, nonatomic) NSMutableIndexSet *_potentiallyTargetedElementRecognitionIDs; // ivar: __potentiallyTargetedElementRecognitionIDs
@property (copy, nonatomic) NSDictionary *_submittedTargetContentInfoByTargetID; // ivar: __submittedTargetContentInfoByTargetID
@property (copy, nonatomic) NSArray *_submittedTextInputTargets; // ivar: __submittedTextInputTargets
@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (readonly, nonatomic) PKTextInputCanvasController *canvasController; // ivar: _canvasController
@property (nonatomic) BOOL cursorIsForcedStrongAtStart; // ivar: _cursorIsForcedStrongAtStart
@property (nonatomic) BOOL cursorIsWeakAtStart; // ivar: _cursorIsWeakAtStart
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKTextInputHandwritingShotDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKTextInputElementsController *elementsController; // ivar: _elementsController
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) PKDrawing *inputDrawing; // ivar: _inputDrawing
@property (readonly, copy, nonatomic) PKStroke *inputInProgressStroke; // ivar: _inputInProgressStroke
@property (readonly, nonatomic) PKTextInputLanguageSpec *languageSpec; // ivar: _languageSpec
@property (nonatomic) CGFloat recognitionDuration; // ivar: _recognitionDuration
@property (copy, nonatomic, setter=_setResultQueryItems:) NSArray *resultQueryItems; // ivar: _resultQueryItems
@property (nonatomic, setter=_setShotState:) NSInteger shotState; // ivar: _shotState
@property (retain, nonatomic) PKTextInputStrokeProvider *strokeProvider; // ivar: _strokeProvider
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *textInputTargets;
@property (nonatomic) BOOL writingIsActiveAtStart; // ivar: _writingIsActiveAtStart
@property (copy, nonatomic) NSNumber *writingSessionIdentifier; // ivar: _writingSessionIdentifier


+(int)_contentTypeFromKeyboardType:(NSInteger)arg0 ;
+(int)_contentTypeFromTextContentType:(id)arg0 ;
-(BOOL)_shouldTargetFirstResponderElement:(id)arg0 strokeIdentifiers:(id)arg1 ;
-(BOOL)isPotentiallyTargetingElement:(id)arg0 ;
-(id)_closestInputElementForStrokeIdentifiers:(id)arg0 ;
-(id)_contentInfoFromElementContent:(id)arg0 textInputTarget:(id)arg1 strokeIdentifiers:(id)arg2 ;
-(id)_protectedCharacterIndexesInRange:(struct _NSRange )arg0 forElementContent:(id)arg1 ;
-(id)_textContentSubstringInRange:(struct _NSRange )arg0 forElementContent:(id)arg1 ;
-(id)initWithCanvasController:(id)arg0 elementsController:(id)arg1 languageSpec:(id)arg2 ;
-(id)recognitionManager:(id)arg0 textInputTargetForItemStableIdentifier:(id)arg1 strokeIdentifiers:(id)arg2 simultaneousItemStableIdentifiers:(id)arg3 ;
-(id)recognitionManagerStrokeProvider:(id)arg0 ;
-(id)recognitionManagerTextInputTargets:(id)arg0 ;
-(id)submittedTargetContentInfoForRecognitionIdentifier:(id)arg0 ;
-(id)textInputElementContentForRecognitionIdentifier:(id)arg0 ;
-(id)textInputElementForRecognitionIdentifier:(id)arg0 ;
-(int)_autoCapitalizationModeForTextInputTraits:(id)arg0 ;
-(int)_autoCorrectionModeForTextInputTraits:(id)arg0 ;
-(int)_contentTypeForElementContent:(id)arg0 ;
-(struct _NSRange )_correctableTextRangeIntersectingStrokesWithIdentifiers:(id)arg0 inInputTarget:(id)arg1 elementContent:(id)arg2 ;
-(struct _NSRange )_editingGestureCorrectableRangeForStrokeBounds:(struct CGRect )arg0 InInputTarget:(id)arg1 elementContent:(id)arg2 ;
-(struct _NSRange )_selectedTextRangeForElementContent:(id)arg0 textInputTarget:(id)arg1 strokeSliceIdentifiers:(id)arg2 ;
-(struct _NSRange )_substringReferenceRangeForStrokeCoveredRange:(struct _NSRange )arg0 contentLength:(NSInteger)arg1 selectedRange:(struct _NSRange )arg2 ;
-(void)_evaluateSubmissionReadyness;
-(void)_fetchTextInputElementsIfNeededWithReferenceHitPoint:(struct CGPoint )arg0 referenceSearchArea:(struct CGRect )arg1 referenceCoordSpace:(id)arg2 ;
-(void)_loadAndSaveContentFocusingIfNeededForElement:(id)arg0 referenceCanvasPoint:(struct CGPoint )arg1 strokesBounds:(struct CGRect )arg2 completion:(id)arg3 ;
-(void)_saveSubmittedTargetContentInfo:(id)arg0 ;
-(void)_setupStrokeProvider;
-(void)beginRecognitionWithRecognitionManager:(id)arg0 ;
-(void)recognitionManager:(id)arg0 fetchContentInfoForTextInputTarget:(id)arg1 strokeIdentifiers:(id)arg2 completion:(id)arg3 ;
-(void)recognitionManager:(id)arg0 recognitionDidFinishWithQueryItems:(id)arg1 duration:(CGFloat)arg2 ;
-(void)reportDebugStateDescription:(id)arg0 ;


@end


#endif