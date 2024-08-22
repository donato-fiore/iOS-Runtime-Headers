// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPOPOVERSLIDINGCHROMEVIEW_H
#define _UIPOPOVERSLIDINGCHROMEVIEW_H



#import "UIPopoverBackgroundView.h"

@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView



+(CGFloat)arrowBase;
+(CGFloat)arrowHeight;
+(CGFloat)cornerRadius;
+(struct UIEdgeInsets )contentViewInsets;
-(CGFloat)_shadowOpacity;
-(CGFloat)_shadowRadius;
-(CGFloat)arrowOffset;
-(NSUInteger)arrowDirection;
-(id)_shadowPathForRect:(struct CGRect )arg0 arrowDirection:(NSUInteger)arg1 ;
-(struct CGSize )_shadowOffset;
-(struct UIEdgeInsets )_contentViewInsets;
-(struct UIEdgeInsets )_shadowInsets;
-(void)layoutSubviews;
-(void)setArrowDirection:(NSUInteger)arg0 ;
-(void)setArrowOffset:(CGFloat)arg0 ;


@end


#endif