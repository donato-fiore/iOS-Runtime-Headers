// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDETAILSADDMEMBERSTANDARDCELL_H
#define CKDETAILSADDMEMBERSTANDARDCELL_H

@class UIImageView;


#import "CKDetailsAddMemberCell.h"

@interface CKDetailsAddMemberStandardCell : CKDetailsAddMemberCell

@property (retain, nonatomic) UIImageView *addIcon; // ivar: _addIcon


+(CGFloat)preferredHeight;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif