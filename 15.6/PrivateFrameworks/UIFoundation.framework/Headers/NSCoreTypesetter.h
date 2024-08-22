// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCORETYPESETTER_H
#define NSCORETYPESETTER_H

@class NSDictionary;
@protocol NSCoreTypesetterDelegate;


#import "NSTypesetter.h"

@interface NSCoreTypesetter : NSTypesetter

@property (copy) NSDictionary *_extraLineFragmentAttributes; // ivar: __extraLineFragmentAttributes
@property BOOL allowsFontOverridingTextAttachmentVerticalMetrics; // ivar: _allowsFontOverridingTextAttachmentVerticalMetrics
@property BOOL allowsFontSubstitutionAffectingVerticalMetrics; // ivar: _allowsFontSubstitutionAffectingVerticalMetrics
@property _NSRange characterRange; // ivar: characterRange
@property (weak) NSObject<NSCoreTypesetterDelegate> *delegate; // ivar: delegate
@property (copy) id *laidOutLineFragment; // ivar: _laidOutLineFragment
@property NSInteger layoutOrientation; // ivar: _layoutOrientation
@property BOOL limitsLayoutForSuspiciousContents; // ivar: _limitsLayoutForSuspiciousContents
@property CGSize textContainerSize; // ivar: textContainerSize
@property BOOL usesDefaultHyphenation; // ivar: _usesDefaultHyphenation
@property (copy) id *validateLineBreakIndex; // ivar: _validateLineBreakIndex
@property BOOL wantsExtraLineFragment; // ivar: _wantsExtraLineFragment


+(void)_lineMetricsForAttributes:(id)arg0 typesetterBehavior:(NSInteger)arg1 usesFontLeading:(BOOL)arg2 applySpacings:(BOOL)arg3 usesSystemFontLeading:(BOOL)arg4 usesNegativeFontLeading:(BOOL)arg5 layoutOrientation:(NSInteger)arg6 lineHeight:(*CGFloat)arg7 baselineOffset:(*CGFloat)arg8 spacing:(*CGFloat)arg9 ;
+(void)_maximumAscentAndDescentForRuns:(struct __CFArray *)arg0 ascender:(*CGFloat)arg1 descender:(*CGFloat)arg2 ;
-(id)init;
-(id)softHyphen;
-(int)_NSFastDrawString:(id)arg0 length:(NSUInteger)arg1 attributes:(id)arg2 paragraphStyle:(id)arg3 typesetterBehavior:(NSInteger)arg4 lineBreakMode:(NSInteger)arg5 rect:(struct CGRect )arg6 padding:(CGFloat)arg7 graphicsContext:(id)arg8 baselineRendering:(BOOL)arg9 usesFontLeading:(BOOL)arg10 usesScreenFont:(BOOL)arg11 scrollable:(BOOL)arg12 syncAlignment:(BOOL)arg13 mirrored:(BOOL)arg14 boundingRectPointer:(struct CGRect *)arg15 baselineOffsetPointer:(*CGFloat)arg16 drawingContext:(id)arg17 ;
-(struct ? )_getLineMetricsForRange:(struct _NSRange )arg0 attributes:(id)arg1 attributedString:(id)arg2 applySpacing:(BOOL)arg3 usesSystemFontLeading:(BOOL)arg4 usesNegativeFontLeading:(BOOL)arg5 ;
-(struct CGRect )_stringDrawingCoreTextEngineWithOriginalString:(id)arg0 rect:(struct CGRect )arg1 padding:(CGFloat)arg2 graphicsContext:(id)arg3 forceClipping:(BOOL)arg4 attributes:(id)arg5 stringDrawingOptions:(NSInteger)arg6 drawingContext:(id)arg7 stringDrawingInterface:(struct ? *)arg8 ;
-(void)dealloc;
-(void)layout;


@end


#endif