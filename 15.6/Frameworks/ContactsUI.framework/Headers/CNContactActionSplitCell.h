// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTACTIONSPLITCELL_H
#define CNCONTACTACTIONSPLITCELL_H

@class UIButton;


#import "CNLabeledCell.h"

@interface CNContactActionSplitCell : CNLabeledCell

@property (readonly, nonatomic) UIButton *leftLabel; // ivar: _leftLabel
@property (readonly, nonatomic) UIButton *rightLabel; // ivar: _rightLabel


-(CGFloat)minCellHeight;
-(id)constantConstraints;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)labelView;
-(id)rightMostView;
-(id)standardButton;
-(void)_setupButton:(id)arg0 forAction:(id)arg1 ;
-(void)setCardGroupItem:(id)arg0 ;
-(void)setLabelTextAttributes:(id)arg0 ;


@end


#endif