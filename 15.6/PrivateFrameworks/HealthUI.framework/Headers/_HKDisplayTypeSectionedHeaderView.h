// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKDISPLAYTYPESECTIONEDHEADERVIEW_H
#define _HKDISPLAYTYPESECTIONEDHEADERVIEW_H

@class UICollectionReusableView, UIView, NSString, UILabel, NSLayoutConstraint;



@interface _HKDisplayTypeSectionedHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *titleTrailingConstraint; // ivar: _titleTrailingConstraint


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updatePreferredTitleFont;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif