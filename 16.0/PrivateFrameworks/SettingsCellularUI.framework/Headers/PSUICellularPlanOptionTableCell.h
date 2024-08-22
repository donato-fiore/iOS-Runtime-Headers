// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICELLULARPLANOPTIONTABLECELL_H
#define PSUICELLULARPLANOPTIONTABLECELL_H

@class PSTableCell, UILabel;



@interface PSUICellularPlanOptionTableCell : PSTableCell

@property (retain, nonatomic) UILabel *centeredNameLabel; // ivar: _centeredNameLabel
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UILabel *numberLabel; // ivar: _numberLabel


+(NSInteger)cellStyle;
-(BOOL)canBeChecked;
-(BOOL)canReload;
-(id)detailTextLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)textLabel;
-(void)_setCenteredText:(id)arg0 ;
-(void)_setLabel:(id)arg0 andPhoneNumber:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setCellEnabled:(BOOL)arg0 ;


@end


#endif