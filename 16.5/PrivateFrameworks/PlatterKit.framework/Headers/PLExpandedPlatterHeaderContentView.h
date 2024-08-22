// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLEXPANDEDPLATTERHEADERCONTENTVIEW_H
#define PLEXPANDEDPLATTERHEADERCONTENTVIEW_H



#import "PLPlatterHeaderContentView.h"

@interface PLExpandedPlatterHeaderContentView : PLPlatterHeaderContentView



-(CGFloat)_headerHeightForWidth:(CGFloat)arg0 ;
-(CGFloat)_iconDimension;
-(CGFloat)_iconLeadingPadding;
-(CGFloat)_iconTrailingPadding;
-(CGFloat)_largeTextLabelBaselineOffsetFromBottom;
-(CGFloat)_largeTextTitleLabelBaselineOffset;
-(CGFloat)_titleFirstLineCenterY;
-(id)_ellipsisHighlightedBackgroundImage;
-(id)_newIconButton;
-(struct CGRect )_titleLabelBoundsForSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureDateLabel;
-(void)_configureIconButton:(id)arg0 withIcon:(id)arg1 ;
-(void)_configureUtilityButton;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_layoutDateLabelWithScale:(CGFloat)arg0 ;
-(void)_layoutTitleLabelWithScale:(CGFloat)arg0 ;
-(void)_layoutUtilityButtonWithScale:(CGFloat)arg0 ;
-(void)_updateStylingForTitleLabel:(id)arg0 ;
-(void)_updateUtilityButtonFont;
-(void)_updateUtilityButtonVibrantStyling;
-(void)setDate:(id)arg0 ;
-(void)setDateAllDay:(BOOL)arg0 ;
-(void)setDateFormatStyle:(NSInteger)arg0 ;


@end


#endif