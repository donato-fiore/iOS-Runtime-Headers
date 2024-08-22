// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIDANGLINGPLANTABLECELL_H
#define PSUIDANGLINGPLANTABLECELL_H

@class PSTableCell, UILabel;



@interface PSUIDanglingPlanTableCell : PSTableCell

@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UILabel *numberLabel; // ivar: _numberLabel
@property (retain, nonatomic) UILabel *statusLabel; // ivar: _statusLabel


+(NSInteger)cellStyle;
-(BOOL)canBeChecked;
-(BOOL)canReload;
-(id)detailTextLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)textLabel;
-(void)_setLabel:(id)arg0 andPhoneNumber:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif