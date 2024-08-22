// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPEQUATIONLAYOUT_H
#define TSWPEQUATIONLAYOUT_H

@protocol EQKitLayout, EQKitLayoutContext;


#import "TSDLayout.h"
#import "TSDShadow.h"

@interface TSWPEquationLayout : TSDLayout

@property (readonly, nonatomic) BOOL equationIsValid; // ivar: _equationIsValid
@property (readonly, nonatomic) NSObject<EQKitLayout> *equationLayout; // ivar: _equationLayout
@property (retain, nonatomic) NSObject<EQKitLayoutContext> *equationLayoutContext; // ivar: _equationLayoutContext
@property (readonly, nonatomic) *CGColor textColor; // ivar: _textColor
@property (readonly, nonatomic) TSDShadow *textShadow; // ivar: _textShadow


-(BOOL)wantsRoundedInlinePosition;
-(CGFloat)inlineCenteredAlignmentOffset;
-(CGFloat)inlineVerticalOffset;
-(id)computeLayoutGeometry;
-(struct CGRect )frameForCulling;
-(void)dealloc;
-(void)validate;
-(void)willLayoutInlineWithTextAttributes:(struct __CFDictionary *)arg0 columnWidth:(CGFloat)arg1 ;


@end


#endif