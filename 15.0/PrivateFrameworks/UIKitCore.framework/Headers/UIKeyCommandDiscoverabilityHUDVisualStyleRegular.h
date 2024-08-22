// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYCOMMANDDISCOVERABILITYHUDVISUALSTYLEREGULAR_H
#define UIKEYCOMMANDDISCOVERABILITYHUDVISUALSTYLEREGULAR_H



#import "UIKeyCommandDiscoverabilityHUDVisualStyle.h"
#import "UIColor.h"

@interface UIKeyCommandDiscoverabilityHUDVisualStyleRegular : UIKeyCommandDiscoverabilityHUDVisualStyle

@property (retain, nonatomic) UIColor *dividerColor; // ivar: _dividerColor
@property (retain, nonatomic) UIColor *inputColor; // ivar: _inputColor
@property (retain, nonatomic) UIColor *titleColor; // ivar: _titleColor


-(CGFloat)HUDPageControlBottomMargin;
-(CGFloat)columnDividerHeightForHUDHeight:(CGFloat)arg0 ;
-(CGFloat)columnDividerWidth;
-(CGFloat)maxHUDHeightForHeight:(CGFloat)arg0 ;
-(CGFloat)maxHUDWidthForWidth:(CGFloat)arg0 ;
-(CGFloat)minimumFontScaleBeforeTruncation;
-(CGFloat)summaryDescriptionToModifiersSpacing;
-(CGFloat)summaryLineHeight;
-(CGFloat)summaryLineSpacing;
-(CGFloat)summaryModifiersSpacing;
-(CGFloat)summaryXPadding;
-(CGFloat)summaryYPadding;
-(id)init;
-(id)summaryFont;
-(struct UIEdgeInsets )HUDViewInsets;


@end


#endif