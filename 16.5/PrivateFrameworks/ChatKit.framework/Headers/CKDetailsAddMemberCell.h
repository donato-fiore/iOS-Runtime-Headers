// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDETAILSADDMEMBERCELL_H
#define CKDETAILSADDMEMBERCELL_H

@class UILabel;


#import "CKDetailsCell.h"

@interface CKDetailsAddMemberCell : CKDetailsCell

@property (retain, nonatomic) UILabel *addLabel; // ivar: _addLabel


+(CGFloat)preferredHeight;
+(Class)cellClass;
+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif