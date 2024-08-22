// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRELECTROCARDIOGRAMRECORDINGBRIDGESETTINGS_H
#define HKHRELECTROCARDIOGRAMRECORDINGBRIDGESETTINGS_H


#import <Foundation/Foundation.h>

#import "HKHRElectrocardiogramRecordingFooter.h"

@interface HKHRElectrocardiogramRecordingBridgeSettings : NSObject

@property (readonly, nonatomic) HKHRElectrocardiogramRecordingFooter *footer; // ivar: _footer
@property (readonly, nonatomic) BOOL settingVisible; // ivar: _settingVisible
@property (readonly, nonatomic) BOOL showOnboarding; // ivar: _showOnboarding
@property (readonly, nonatomic) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled


-(BOOL)_featureOnboardedWithFeatureStatus:(id)arg0 ;
-(BOOL)_isSettingsVisibleWithFeatureStatus:(id)arg0 ;
-(BOOL)_userInteractionEnabledWithFeatureStatus:(id)arg0 ;
-(id)_footerWithFeatureStatus:(id)arg0 isAppInstalled:(BOOL)arg1 ;
-(id)initWithFeatureStatus:(id)arg0 isAppInstalled:(BOOL)arg1 ;


@end


#endif