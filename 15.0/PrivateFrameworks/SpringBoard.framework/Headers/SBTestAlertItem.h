// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTESTALERTITEM_H
#define SBTESTALERTITEM_H

@class SBAlertItem, NSString;



@interface SBTestAlertItem : SBAlertItem

@property (nonatomic) BOOL allowLockScreenDismissal; // ivar: _allowLockScreenDismissal
@property (nonatomic) BOOL allowMenuButtonDismissal; // ivar: _allowMenuButtonDismissal
@property (nonatomic) BOOL behavesSuperModally; // ivar: _behavesSuperModally
@property (nonatomic) BOOL forcesModalAlertAppearance; // ivar: _forcesModalAlertAppearance
@property (nonatomic) BOOL reappearsAfterLock; // ivar: _reappearsAfterLock
@property (nonatomic) BOOL reappearsAfterUnlock; // ivar: _reappearsAfterUnlock
@property (nonatomic) BOOL shouldShowInLockScreen; // ivar: _shouldShowInLockScreen
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)alertItemWithShowInLockScreen:(BOOL)arg0 forcesModal:(BOOL)arg1 superModal:(BOOL)arg2 ;
-(id)description;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif