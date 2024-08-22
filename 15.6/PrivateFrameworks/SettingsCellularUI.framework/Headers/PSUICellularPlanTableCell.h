// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUICELLULARPLANTABLECELL_H
#define PSUICELLULARPLANTABLECELL_H

@class PSTableCell, UILabel;


#import "PSUIBadgeView.h"

@interface PSUICellularPlanTableCell : PSTableCell

@property (retain, nonatomic) PSUIBadgeView *badgeView; // ivar: _badgeView
@property (retain, nonatomic) PSUIBadgeView *centeredBadgeView; // ivar: _centeredBadgeView
@property (retain, nonatomic) UILabel *centeredNameLabel; // ivar: _centeredNameLabel
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UILabel *numberLabel; // ivar: _numberLabel
@property (retain, nonatomic) UILabel *statusLabel; // ivar: _statusLabel


+(NSInteger)cellStyle;
-(BOOL)canBeChecked;
-(BOOL)canReload;
-(id)detailTextLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)textLabel;
-(void)_setBadge:(id)arg0 andLabel:(id)arg1 andPhoneNumber:(id)arg2 ;
-(void)_setCenteredBadge:(id)arg0 andLabel:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif