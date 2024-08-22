// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEPROGRESSFOOTERVIEW_H
#define PXPEOPLEPROGRESSFOOTERVIEW_H

@class UIView, UILabel;



@interface PXPeopleProgressFooterView : UIView

@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) BOOL usesEmphasizedTitle; // ivar: _usesEmphasizedTitle


-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupConstraints;
-(void)_setupViews;


@end


#endif