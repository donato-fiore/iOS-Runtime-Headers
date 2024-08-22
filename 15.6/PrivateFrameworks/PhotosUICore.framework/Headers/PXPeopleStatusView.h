// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLESTATUSVIEW_H
#define PXPEOPLESTATUSVIEW_H

@class UIView, UIActivityIndicatorView, NSArray, UIButton, NSLayoutConstraint, UILabel, UIStackView;



@interface PXPeopleStatusView : UIView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (retain, nonatomic) UIButton *continueButton; // ivar: _continueButton
@property (retain, nonatomic) NSLayoutConstraint *continueButtonBottom; // ivar: _continueButtonBottom
@property (readonly, nonatomic) UILabel *countLabel; // ivar: _countLabel
@property (readonly, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) NSLayoutConstraint *stackViewY; // ivar: _stackViewY
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) NSUInteger viewState; // ivar: _viewState


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_createViews;
-(void)commonInit;
-(void)updateConstraints;


@end


#endif