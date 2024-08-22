// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMODALWIDGETINTRODUCTIONBACKGROUNDDESCRIPTIONVIEW_H
#define SBMODALWIDGETINTRODUCTIONBACKGROUNDDESCRIPTIONVIEW_H

@class UIView, UIButton, UIImageView, UILabel, UIViewController;



@interface SBModalWidgetIntroductionBackgroundDescriptionView : UIView

@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIButton *continueButton; // ivar: _continueButton
@property (retain, nonatomic) UIImageView *homescreenPreview; // ivar: _homescreenPreview
@property (retain, nonatomic) UILabel *introductionTextLabel; // ivar: _introductionTextLabel
@property (retain, nonatomic) UIView *labelContainerView; // ivar: _labelContainerView
@property (weak, nonatomic) UIViewController *owner; // ivar: _owner
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 withOwner:(id)arg1 ;


@end


#endif