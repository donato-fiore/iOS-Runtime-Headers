// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKPARAGRAPHTABLEVIEWCELL_H
#define HKPARAGRAPHTABLEVIEWCELL_H

@class UITableViewCell, UILabel, UIButton, NSLayoutConstraint, NSString;



@interface HKParagraphTableViewCell : UITableViewCell {
    UILabel *_titleLabel;
    UILabel *_paragraphLabel;
    UIButton *_button;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    NSLayoutConstraint *_paragraphLabelBaselineConstraint;
    NSLayoutConstraint *_buttonBaselineConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
}


@property (copy, nonatomic) NSString *buttonText; // ivar: _buttonText
@property (copy, nonatomic) NSString *paragraphText; // ivar: _paragraphText
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


+(id)reuseIdentifier;
-(CGFloat)_buttonBaselineToBottom;
-(CGFloat)_subtitleLabelBaselineToButton;
-(CGFloat)_titleLabelBaselineToParagraphBaseline;
-(CGFloat)_titleLabelTopToBaseline;
-(NSInteger)_buttonHorizontalAlignment;
-(id)_buttonFont;
-(id)_paragraphLabelFont;
-(id)_titleLabelFont;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupUI;
-(void)_updateForCurrentSizeCategory;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif