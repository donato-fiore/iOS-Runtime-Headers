// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMCUIACCOUNTSSETTINGSVIEWCELL_H
#define NMCUIACCOUNTSSETTINGSVIEWCELL_H

@class PSTableCell, UIActivityIndicatorView, UILabel;



@interface NMCUIAccountsSettingsViewCell : PSTableCell

@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (retain, nonatomic) UILabel *warningLabel; // ivar: _warningLabel


+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif