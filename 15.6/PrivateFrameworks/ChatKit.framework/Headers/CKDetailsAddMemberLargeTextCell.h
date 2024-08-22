// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDETAILSADDMEMBERLARGETEXTCELL_H
#define CKDETAILSADDMEMBERLARGETEXTCELL_H

@class UILayoutGuide;


#import "CKDetailsAddMemberCell.h"

@interface CKDetailsAddMemberLargeTextCell : CKDetailsAddMemberCell

@property (retain, nonatomic) UILayoutGuide *leadingGuide; // ivar: _leadingGuide


+(CGFloat)preferredHeight;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_initConstraints;
-(void)_initLabel;


@end


#endif