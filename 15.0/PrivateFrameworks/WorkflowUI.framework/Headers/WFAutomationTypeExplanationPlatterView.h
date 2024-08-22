// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFAUTOMATIONTYPEEXPLANATIONPLATTERVIEW_H
#define WFAUTOMATIONTYPEEXPLANATIONPLATTERVIEW_H

@class UIView, UIButton, UILabel, UIImageView, UIStackView;



@interface WFAutomationTypeExplanationPlatterView : UIView

@property (readonly, nonatomic) UIButton *button; // ivar: _button
@property (readonly, nonatomic) UILabel *explanationTextLabel; // ivar: _explanationTextLabel
@property (readonly, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView


-(id)homeAutomationIcon;
-(id)homeButtonColor;
-(id)homeExplanatoryText;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)personalAutomationIcon;
-(void)configureForAutomationType:(NSUInteger)arg0 ;
-(void)prepareForReuse;
-(void)setExplanatoryText:(id)arg0 ;
-(void)setIcon:(id)arg0 ;


@end


#endif