// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUITURNONTHISLINETABLECELL_H
#define PSUITURNONTHISLINETABLECELL_H

@class PSTableCell, UILabel;



@interface PSUITurnOnThisLineTableCell : PSTableCell

@property (retain, nonatomic) UILabel *statusLabel; // ivar: _statusLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(NSInteger)cellStyle;
-(BOOL)canBeChecked;
-(BOOL)canReload;
-(id)detailTextLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)textLabel;
-(void)_setTitle:(id)arg0 andStatus:(id)arg1 ;
-(void)_updateStatus:(id)arg0 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif