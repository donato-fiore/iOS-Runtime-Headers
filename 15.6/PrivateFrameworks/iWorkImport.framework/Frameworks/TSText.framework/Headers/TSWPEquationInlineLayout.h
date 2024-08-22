// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPEQUATIONINLINELAYOUT_H
#define TSWPEQUATIONINLINELAYOUT_H



#import "TSWPEquationLayout.h"

@interface TSWPEquationInlineLayout : TSWPEquationLayout

@property (nonatomic) BOOL disableXHeightMatching; // ivar: _disableXHeightMatching
@property (readonly, nonatomic) CGFloat fontSizeAdjustedForXHeight; // ivar: _fontSizeAdjustedForXHeight


-(BOOL)wantsRoundedInlinePosition;
-(CGFloat)descentForInlineLayout;
-(CGFloat)p_fontSizeThatMatchesXHeightForFontName:(id)arg0 fontSize:(CGFloat)arg1 ;
-(id)computeInfoGeometryFromPureLayoutGeometry:(id)arg0 ;
-(id)computeLayoutGeometry;
-(id)layoutGeometryFromInfo;
-(id)p_layoutTarget;
-(struct CGSize )invalidEquationSize;
-(void)invalidateTextScalePercent;
-(void)willLayoutInlineWithMaximumSize:(struct CGSize )arg0 textScale:(CGFloat)arg1 ;


@end


#endif