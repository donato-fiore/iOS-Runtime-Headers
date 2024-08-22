// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHTEXTCORRECTIONRECOGNIZER_H
#define CHTEXTCORRECTIONRECOGNIZER_H

@class NSArray;
@protocol CHRecognizing;

#import <Foundation/Foundation.h>

#import "CHCornerDetector.h"
#import "CHRecognizer.h"

@interface CHTextCorrectionRecognizer : NSObject

@property (readonly, nonatomic) CHCornerDetector *_cornerDetector; // ivar: __cornerDetector
@property (readonly, nonatomic) CHRecognizer *_shapeRecognizer; // ivar: __shapeRecognizer
@property (readonly, nonatomic) NSObject<CHRecognizing> *_textRecognizer; // ivar: __textRecognizer
@property (readonly, nonatomic) BOOL isRemoteRecognition; // ivar: _isRemoteRecognition
@property (readonly, copy, nonatomic) NSArray *locales; // ivar: _locales


+(id)_improvedSingleCharacterOneColumnTextResult:(id)arg0 targetContentInfo:(id)arg1 insertionRange:(struct _NSRange )arg2 locale:(id)arg3 affectedRange:(struct _NSRange *)arg4 ;
+(id)_modifiedTextResult:(id)arg0 replacingString:(id)arg1 ;
+(struct _NSRange )_relativeRangeOfPreviousCharacterFromTargetContentInfo:(id)arg0 absoluteInsertionRange:(struct _NSRange )arg1 ;
+(struct _NSRange )defaultTextAffectedRangeForTargetContentInfo:(id)arg0 ;
-(BOOL)_isInNoSpaceRegionNextToTextFromTargetContentInfo:(id)arg0 drawingBounds:(struct CGRect )arg1 localTypedContextBounds:(struct CGRect )arg2 insertionRange:(struct _NSRange )arg3 outIsWhiteSpace:(*BOOL)arg4 outDistance:(*CGFloat)arg5 outSpaceDistanceThreshold:(*CGFloat)arg6 ;
-(NSInteger)_precedingSpaceBehaviorFromTargetContentInfo:(id)arg0 drawingBounds:(struct CGRect )arg1 localTypedContextBounds:(struct CGRect )arg2 insertionRange:(struct _NSRange )arg3 lastCharacterBefore:(id)arg4 ;
-(NSUInteger)_precedingLineBreakCountForAutoLineBreak:(id)arg0 targetContentInfo:(id)arg1 ;
-(id)_editingGestureResultForDrawing:(id)arg0 originalDrawing:(id)arg1 lastStroke:(id)arg2 targetContentInfo:(id)arg3 previousResult:(id)arg4 ;
-(id)_gestureOnBlankAreaResultForDrawing:(id)arg0 originalDrawing:(id)arg1 targetContentInfo:(id)arg2 ;
-(id)_refinedGestureResultForPreviousResult:(id)arg0 originalDrawing:(id)arg1 lastStroke:(id)arg2 targetContentInfo:(id)arg3 ;
-(id)_textAfterStringForTargetContentInfo:(id)arg0 insertionRange:(struct _NSRange )arg1 ;
-(id)_textBeforeStringForTargetContentInfo:(id)arg0 insertionRange:(struct _NSRange )arg1 ;
-(id)_textInsertionResultForDrawing:(id)arg0 targetContentInfo:(id)arg1 originalDrawing:(id)arg2 localTypedContextBounds:(struct CGRect )arg3 normalizedDrawingScaleFactor:(CGFloat)arg4 insertionRange:(struct _NSRange )arg5 ;
-(id)_verticalBarGestureCloseToTextForDrawing:(id)arg0 originalDrawing:(id)arg1 targetContentInfo:(id)arg2 localTypedContextBounds:(struct CGRect )arg3 ;
-(id)_verticalBarGestureOnBlankAreaResultForDrawing:(id)arg0 originalDrawing:(id)arg1 targetContentInfo:(id)arg2 ;
-(id)initWithLocales:(id)arg0 remoteRecognition:(BOOL)arg1 priority:(NSInteger)arg2 ;
-(id)textCorrectionResultForDrawing:(id)arg0 targetContentInfo:(id)arg1 originalDrawing:(id)arg2 lastStroke:(id)arg3 localTypedContextBounds:(struct CGRect )arg4 normalizedDrawingScaleFactor:(CGFloat)arg5 previousCorrectionResult:(id)arg6 ;


@end


#endif