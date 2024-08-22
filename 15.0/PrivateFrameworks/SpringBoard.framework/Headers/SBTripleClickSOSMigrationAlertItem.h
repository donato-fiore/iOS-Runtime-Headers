// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTRIPLECLICKSOSMIGRATIONALERTITEM_H
#define SBTRIPLECLICKSOSMIGRATIONALERTITEM_H

@class SBAlertItem;



@interface SBTripleClickSOSMigrationAlertItem : SBAlertItem



-(BOOL)allowInSetup;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)shouldShowInLockScreen;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif