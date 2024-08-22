// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDETAILSMACCHANGEGROUPNAMECELL_H
#define CKDETAILSMACCHANGEGROUPNAMECELL_H

@class UIImageView, UILabel;


#import "CKDetailsCell.h"

@interface CKDetailsMacChangeGroupNameCell : CKDetailsCell

@property (retain, nonatomic) UIImageView *cellGlpyh; // ivar: _cellGlpyh
@property (retain, nonatomic) UILabel *changeNameLabel; // ivar: _changeNameLabel


+(id)identifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif