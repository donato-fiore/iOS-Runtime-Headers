// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSWITCHSPINNERTABLECELL_H
#define PKSWITCHSPINNERTABLECELL_H

@class PSTableCell, UIActivityIndicatorView, UISwitch;
@protocol PKSwitchSpinnerTableCellDelegate;



@interface PKSwitchSpinnerTableCell : PSTableCell {
    UIActivityIndicatorView *_spinner;
    UISwitch *_switch;
    BOOL _showSpinner;
    id<PKSwitchSpinnerTableCellDelegate> *_delegate;
}




-(BOOL)canReload;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)_switchToggled:(id)arg0 ;
-(void)_updateSubviews;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setShowSpinner:(BOOL)arg0 ;
-(void)setSwitchIsOn:(BOOL)arg0 ;


@end


#endif