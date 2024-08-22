// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUITRACKERCELL_H
#define PUITRACKERCELL_H

@class PSTableCell, UILabel;



@interface PUITrackerCell : PSTableCell

@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif