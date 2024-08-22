// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIACTIONVIEWLABEL_H
#define SBUIACTIONVIEWLABEL_H

@class UIView, NSString, UIColor, UILabel, UIFont;



@interface SBUIActionViewLabel : UIView {
    NSString *_text;
    UIColor *_textColor;
    UILabel *_label;
    UILabel *_emojiLabel;
}


@property (retain, nonatomic) UIFont *font;
@property (nonatomic) NSInteger lineBreakMode;
@property (nonatomic) NSInteger numberOfLines;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_mt_applyVisualStyling:(id)arg0 ;
-(void)mt_removeAllVisualStyling;


@end


#endif