// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBEDUTEMPORARYSESSIONLOGOUTWARNINGALERTITEM_H
#define SBEDUTEMPORARYSESSIONLOGOUTWARNINGALERTITEM_H

@class SBAlertItem;



@interface SBEDUTemporarySessionLogoutWarningAlertItem : SBAlertItem

@property (copy, nonatomic) id *logoutActionHandler; // ivar: _logoutActionHandler


-(BOOL)forcesModalAlertAppearance;
-(BOOL)shouldShowInLockScreen;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif