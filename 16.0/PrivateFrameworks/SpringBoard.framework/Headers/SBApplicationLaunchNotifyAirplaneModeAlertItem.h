// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLICATIONLAUNCHNOTIFYAIRPLANEMODEALERTITEM_H
#define SBAPPLICATIONLAUNCHNOTIFYAIRPLANEMODEALERTITEM_H



#import "SBApplicationLaunchNotifyAlertItem.h"

@interface SBApplicationLaunchNotifyAirplaneModeAlertItem : SBApplicationLaunchNotifyAlertItem {
    BOOL _usesCellNetwork;
}




-(id)_createSystemApertureElement;
-(id)initWithApplication:(id)arg0 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif