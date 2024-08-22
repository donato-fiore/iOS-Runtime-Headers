// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLEGACYTVREMOTEAPPLAUNCHDENIEDALERTITEM_H
#define SBLEGACYTVREMOTEAPPLAUNCHDENIEDALERTITEM_H

@class SBAlertItem;



@interface SBLegacyTVRemoteAppLaunchDeniedAlertItem : SBAlertItem



-(BOOL)dismissOnLock;
-(BOOL)ignoreIfAlreadyDisplaying;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif