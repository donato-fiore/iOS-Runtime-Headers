// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCVISUALEFFECTLABEL_H
#define DOCVISUALEFFECTLABEL_H

@class UIVisualEffectView, UIFont, UILabel, NSString, UIColor;



@interface DOCVisualEffectLabel : UIVisualEffectView

@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (copy, nonatomic) UIFont *font;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic) NSInteger lineBreakMode;
@property (nonatomic) NSInteger numberOfLines;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (copy, nonatomic) UIColor *textColor;


-(id)initWithEffect:(id)arg0 ;
-(id)viewForLastBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;


@end


#endif