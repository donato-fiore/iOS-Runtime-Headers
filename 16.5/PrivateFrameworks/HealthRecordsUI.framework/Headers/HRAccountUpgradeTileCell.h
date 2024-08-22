// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRACCOUNTUPGRADETILECELL_H
#define HRACCOUNTUPGRADETILECELL_H

@class UITableViewCell;



@interface HRAccountUpgradeTileCell : UITableViewCell {
    ? profile;
    ? viewController;
    ? upgradableAccounts;
    ? determineUpgradableAccountsCanceller;
    ? $__lazy_storage_$_tileView;
    ? $__lazy_storage_$_iconView;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_bodyLabel;
    ? $__lazy_storage_$_separator;
    ? $__lazy_storage_$_actionButton;
    ? $__lazy_storage_$_dismissButton;
}


@property (nonatomic, readonly) BOOL hasUpgradableAccounts;


+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProfile:(id)arg0 presentingViewController:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)dismissAction;
-(void)upgradeAction;


@end


#endif