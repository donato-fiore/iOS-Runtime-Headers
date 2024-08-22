// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDCLINICALAUTHORIZATIONSETTINGSVIEWCONTROLLER_H
#define WDCLINICALAUTHORIZATIONSETTINGSVIEWCONTROLLER_H

@class HKClinicalAuthorizationSettingsViewController;


#import "HRProfile.h"

@interface WDClinicalAuthorizationSettingsViewController : HKClinicalAuthorizationSettingsViewController

@property (readonly, weak, nonatomic) HRProfile *profile; // ivar: _profile


+(id)contextUsingProfile:(id)arg0 source:(id)arg1 ;
-(id)initWithContext:(id)arg0 style:(NSInteger)arg1 ;
-(id)initWithProfile:(id)arg0 source:(id)arg1 ;


@end


#endif