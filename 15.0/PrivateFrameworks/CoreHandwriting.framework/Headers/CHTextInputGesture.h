// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHTEXTINPUTGESTURE_H
#define CHTEXTINPUTGESTURE_H

@class NSLocale;
@protocol CHStroke;

#import <Foundation/Foundation.h>

#import "CHTokenizedTextResult.h"
#import "CHDrawing.h"
#import "CHTextInputTargetContentInfo.h"

@interface CHTextInputGesture : NSObject

@property (nonatomic) _NSRange _storedAffectedRange; // ivar: __storedAffectedRange
@property (retain, nonatomic) CHTokenizedTextResult *_textResult; // ivar: __textResult
@property (nonatomic) NSInteger gestureType; // ivar: _gestureType
@property (readonly, nonatomic) NSObject<CHStroke> *lastStroke; // ivar: _lastStroke
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) CHDrawing *normalizedDrawing; // ivar: _normalizedDrawing
@property (readonly, nonatomic) CHDrawing *originalDrawing; // ivar: _originalDrawing
@property (readonly, nonatomic) BOOL preferCharacterLevel; // ivar: _preferCharacterLevel
@property (readonly, nonatomic) CHTextInputTargetContentInfo *targetContentInfo; // ivar: _targetContentInfo


+(BOOL)_isShapeBasedRangeRefinementSupportedForResultType:(NSInteger)arg0 ;
+(BOOL)isDrawingCenterOnBlank:(id)arg0 targetContentInfo:(id)arg1 insertionLocation:(*NSInteger)arg2 ;
+(BOOL)isEditGestureForDrawing:(id)arg0 targetContentInfo:(id)arg1 tentativeResultType:(NSInteger)arg2 ;
+(BOOL)isVerticalBarShapeFromLineResult:(id)arg0 originalDrawing:(id)arg1 isDirectionDownward:(*BOOL)arg2 ;
+(BOOL)shouldReclassifyGestureType:(NSInteger)arg0 ;
+(NSInteger)_cursorPositionForPoint:(struct CGPoint )arg0 referenceString:(id)arg1 referenceCharRects:(struct CGRect *)arg2 searchingRange:(struct _NSRange )arg3 ;
+(id)verticalBarGestureFromLineResult:(id)arg0 currentGesture:(id)arg1 ;
+(struct _NSRange )_affectedRangeByRefiningShapeBasedGesture:(struct _NSRange )arg0 resultType:(NSInteger)arg1 drawing:(id)arg2 targetContentInfo:(id)arg3 ;
+(struct _NSRange )rangeOfTokenAtCharacterIndex:(NSInteger)arg0 inString:(id)arg1 locale:(id)arg2 ;
+(void)_shouldExpandToFullTokensForScriptInString:(id)arg0 withRange:(struct _NSRange )arg1 shouldExpandStart:(*BOOL)arg2 shouldExpandEnd:(*BOOL)arg3 ;
-(id)initWithGestureType:(NSInteger)arg0 targetContentInfo:(id)arg1 locale:(id)arg2 normalizedDrawing:(id)arg3 originalDrawing:(id)arg4 lastStroke:(id)arg5 preferCharacterLevel:(BOOL)arg6 ;
-(id)textResult;
-(struct _NSRange )_affectedRangeByAdjustingForProtectedCharacters:(struct _NSRange )arg0 ;
-(struct _NSRange )_affectedRangeByAdjustingToTokensIfNeeded:(struct _NSRange )arg0 allowSubtoken:(BOOL)arg1 didExpand:(*BOOL)arg2 ;
-(struct _NSRange )_affectedRangeByRemovingTerminatingNewLines:(struct _NSRange )arg0 ;
-(struct _NSRange )_affectedRangeByTrimmingSpaces:(struct _NSRange )arg0 ;
-(void)dealloc;
-(void)getAffectedRange:(struct _NSRange *)arg0 expandedToFullTokens:(*BOOL)arg1 ;


@end


#endif