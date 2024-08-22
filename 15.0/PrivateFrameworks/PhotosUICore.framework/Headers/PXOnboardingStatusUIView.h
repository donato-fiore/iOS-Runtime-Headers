// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXONBOARDINGSTATUSUIVIEW_H
#define PXONBOARDINGSTATUSUIVIEW_H

@class UIView, NSArray, UILabel, NSString, UIProgressView;



@interface PXOnboardingStatusUIView : UIView

@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) UIProgressView *progressView; // ivar: _progressView
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_createViews;
-(void)commonInit;
-(void)updateConstraints;


@end


#endif