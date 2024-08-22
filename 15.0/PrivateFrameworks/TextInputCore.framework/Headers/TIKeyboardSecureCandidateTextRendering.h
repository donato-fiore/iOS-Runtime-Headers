// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDSECURECANDIDATETEXTRENDERING_H
#define TIKEYBOARDSECURECANDIDATETEXTRENDERING_H


#import <Foundation/Foundation.h>


@interface TIKeyboardSecureCandidateTextRendering : NSObject



+(BOOL)_drawSingleLineSecureHeaders:(id)arg0 secureContents:(id)arg1 layoutTraits:(id)arg2 renderTraits:(id)arg3 contexts:(struct __CFArray *)arg4 availableWidth:(CGFloat)arg5 truncationSentinel:(id)arg6 abortInsteadOfTruncating:(BOOL)arg7 ;
+(BOOL)_isAllSingleLineStrings:(id)arg0 ;
+(BOOL)_textRunsHaveFixedFontSize:(id)arg0 ;
+(CGFloat)_totalWidthForCell:(NSUInteger)arg0 fromTextRunResponses:(id)arg1 ;
+(id)_defaultLayoutTraitsForTraits:(id)arg0 ;
+(id)_requestLayoutForSimplifiedTextRuns:(id)arg0 inWidthGroups:(id)arg1 steps:(NSUInteger)arg2 ;
+(id)requestLayoutForTextRuns:(id)arg0 inWidthGroups:(id)arg1 steps:(NSUInteger)arg2 ;
+(id)truncatedWidthsForItemWidths:(id)arg0 availableWidth:(CGFloat)arg1 ;
+(struct CGColor *)_newCgColorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(struct CGColor *)_newCgColorWithTraitsColor:(id)arg0 ;
+(struct __CFAttributedString *)_newAttributedStringWithText:(id)arg0 font:(struct __CTFont *)arg1 color:(struct CGColor *)arg2 ;
+(void)_drawLineFromCellAtIndex:(NSUInteger)arg0 ofResponse:(id)arg1 atYCoordinate:(CGFloat)arg2 inContext:(struct CGContext *)arg3 withAvailableWidth:(CGFloat)arg4 ;
+(void)_drawTwoLineCellsWithSecureHeaders:(id)arg0 secureContents:(id)arg1 layoutTraits:(id)arg2 renderTraits:(id)arg3 contexts:(struct __CFArray *)arg4 availableWidth:(CGFloat)arg5 truncationSentinel:(id)arg6 ;
+(void)_handleEllipsisTruncationForTextRuns:(id)arg0 textRunResponses:(id)arg1 inAvailableWidth:(CGFloat)arg2 ;
+(void)drawSecureHeaders:(id)arg0 secureContents:(id)arg1 inContexts:(struct __CFArray *)arg2 traits:(id)arg3 truncationSentinel:(id)arg4 ;


@end


#endif