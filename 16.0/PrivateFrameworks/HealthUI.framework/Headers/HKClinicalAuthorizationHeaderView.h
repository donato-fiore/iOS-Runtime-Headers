// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLINICALAUTHORIZATIONHEADERVIEW_H
#define HKCLINICALAUTHORIZATIONHEADERVIEW_H

@class UIView, NSLayoutConstraint, UIImageView, NSString, UILabel;



@interface HKClinicalAuthorizationHeaderView : UIView

@property (readonly, nonatomic) NSLayoutConstraint *imageToTitleConstraint; // ivar: _imageToTitleConstraint
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setUpConstraints;
-(void)_setUpSubviews;
-(void)_updateForCurrentContentSizeCategory;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif