// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDETAILSGROUPHEADERCELL_H
#define CKDETAILSGROUPHEADERCELL_H

@class NSArray, UILabel;


#import "CKDetailsShowMoreContactsCell.h"
#import "CKDetailsAvatarPancakeView.h"

@interface CKDetailsGroupHeaderCell : CKDetailsShowMoreContactsCell

@property (retain, nonatomic) CKDetailsAvatarPancakeView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) NSArray *avatarViews; // ivar: _avatarViews
@property (retain, nonatomic) UILabel *subTitleLabel; // ivar: _subTitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 participants:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addConstraints;
-(void)configureCellIconForCollapsedState:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif