// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUICELLULARPLANACTIVATINGTABLECELL_H
#define PSUICELLULARPLANACTIVATINGTABLECELL_H

@class PSTableCell, UILabel, UIActivityIndicatorView;


#import "PSUIBadgeView.h"

@interface PSUICellularPlanActivatingTableCell : PSTableCell

@property (retain, nonatomic) PSUIBadgeView *badgeView; // ivar: _badgeView
@property (retain, nonatomic) UILabel *badgelessCenteredTitleLabel; // ivar: _badgelessCenteredTitleLabel
@property (retain, nonatomic) PSUIBadgeView *centeredBadgeView; // ivar: _centeredBadgeView
@property (retain, nonatomic) UILabel *centeredTitleLabel; // ivar: _centeredTitleLabel
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (retain, nonatomic) UILabel *statusLabel; // ivar: _statusLabel
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(NSInteger)cellStyle;
-(BOOL)canBeChecked;
-(BOOL)canReload;
-(id)detailTextLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)textLabel;
-(void)_setBadge:(id)arg0 andTitle:(id)arg1 andSubtitle:(id)arg2 andStatus:(id)arg3 ;
-(void)_setBadgelessCenteredTitle:(id)arg0 andStatus:(id)arg1 ;
-(void)_setBadgelessTitle:(id)arg0 andSubtitle:(id)arg1 andStatus:(id)arg2 ;
-(void)_setCenteredBadge:(id)arg0 andCenteredTitle:(id)arg1 andStatus:(id)arg2 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif