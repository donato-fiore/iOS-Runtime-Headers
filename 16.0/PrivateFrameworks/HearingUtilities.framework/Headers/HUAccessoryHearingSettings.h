// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUACCESSORYHEARINGSETTINGS_H
#define HUACCESSORYHEARINGSETTINGS_H

@class HCSettings, NSDictionary;



@interface HUAccessoryHearingSettings : HCSettings

@property (retain, nonatomic) NSDictionary *activeHearingProtectionAvailable;
@property (retain, nonatomic) NSDictionary *activeHearingProtectionEnabled;


+(id)sharedInstance;
-(BOOL)activeHearingProtectionAvailableForAddress:(id)arg0 ;
-(BOOL)activeHearingProtectionEnabledForAddress:(id)arg0 ;
-(BOOL)shouldStoreLocally;
-(id)keysToSync;
-(id)preferenceDomainForPreferenceKey:(id)arg0 ;
-(void)logMessage:(id)arg0 ;


@end


#endif