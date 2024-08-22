// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTITLEDESCRIPTIONCONTENTVIEW_H
#define HUTITLEDESCRIPTIONCONTENTVIEW_H

@class UIView, UIFont, UILabel, UIColor, NSArray, UIStackView;
@protocol HFStringGenerator;



@interface HUTitleDescriptionContentView : UIView

@property (retain, nonatomic) UIFont *descriptionFont;
@property (readonly, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) NSObject<HFStringGenerator> *descriptionText; // ivar: _descriptionText
@property (retain, nonatomic) UIColor *descriptionTextColor; // ivar: _descriptionTextColor
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (retain, nonatomic) NSArray *horizontalLabelConstraints; // ivar: _horizontalLabelConstraints
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSObject<HFStringGenerator> *titleText; // ivar: _titleText
@property (retain, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor
@property (retain, nonatomic) NSArray *verticalLabelConstraints; // ivar: _verticalLabelConstraints


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupDescriptionLabel;
-(void)_setupStackView;
-(void)_setupTitleLabel;
-(void)_updateLabel:(id)arg0 withContent:(id)arg1 ;


@end


#endif