// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIONBOARDINGHEADERVIEW_H
#define AMSUIONBOARDINGHEADERVIEW_H

@class UIScrollView, UILabel, UIImageView;



@interface AMSUIOnboardingHeaderView : UIScrollView

@property (nonatomic) CGFloat containerHeight; // ivar: _containerHeight
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isPresentedInFormSheet; // ivar: _isPresentedInFormSheet
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)adjustedContentInsetDidChange;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContentSize;


@end


#endif