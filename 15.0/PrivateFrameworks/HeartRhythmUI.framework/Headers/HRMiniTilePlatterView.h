// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRMINITILEPLATTERVIEW_H
#define HRMINITILEPLATTERVIEW_H

@class UIView, UILabel, NSString, UIImage, UIImageView, HKSeparatorLineView;



@interface HRMiniTilePlatterView : UIView

@property (retain, nonatomic) UILabel *actionLabel; // ivar: _actionLabel
@property (copy, nonatomic) NSString *actionText; // ivar: _actionText
@property (copy, nonatomic) NSString *body; // ivar: _body
@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (copy, nonatomic) NSString *footnote; // ivar: _footnote
@property (retain, nonatomic) UILabel *footnoteLabel; // ivar: _footnoteLabel
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) HKSeparatorLineView *separatorView; // ivar: _separatorView
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)_actionFont;
-(id)initWithtitle:(id)arg0 body:(id)arg1 footnote:(id)arg2 icon:(id)arg3 actionText:(id)arg4 ;
-(void)_setupConstraints;
-(void)_setupView;


@end


#endif