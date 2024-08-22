// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIDOUBLESUBTITLECELL_H
#define PUIDOUBLESUBTITLECELL_H

@class PSTableCell, UILabel;



@interface PUIDoubleSubtitleCell : PSTableCell

@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (retain, nonatomic) UILabel *tertiaryLabel; // ivar: _tertiaryLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif