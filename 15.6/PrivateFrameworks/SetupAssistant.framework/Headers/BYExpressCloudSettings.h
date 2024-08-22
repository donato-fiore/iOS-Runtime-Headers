// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BYEXPRESSCLOUDSETTINGS_H
#define BYEXPRESSCLOUDSETTINGS_H


#import <Foundation/Foundation.h>


@interface BYExpressCloudSettings : NSObject



+(id)_displayZoomOption;
+(id)_isFindMyEnabled;
+(id)_isScreenTimeEnabled;
+(id)createExpressSettingsWithQueue:(id)arg0 ;
+(id)privacyBundleForIdentifier:(id)arg0 ;
+(int)_appearanceValue;
+(void)fetchSettingsWithCompletion:(id)arg0 ;
+(void)updateSettings:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif