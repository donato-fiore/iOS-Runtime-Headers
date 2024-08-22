// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOEFFECTIVESETTINGS_H
#define MOEFFECTIVESETTINGS_H


#import <Foundation/Foundation.h>

#import "MOEffectiveAccountSettings.h"
#import "MOEffectiveAllowedClientSettings.h"
#import "MOEffectiveAppStoreSettings.h"
#import "MOEffectiveApplicationSettings.h"
#import "MOEffectiveCellularSettings.h"
#import "MOEffectiveDateAndTimeSettings.h"
#import "MOEffectiveGameCenterSettings.h"
#import "MOEffectiveMediaSettings.h"
#import "MOEffectivePasscodeSettings.h"
#import "MOEffectiveSafariSettings.h"
#import "MOEffectiveShieldSettings.h"
#import "MOEffectiveSiriSettings.h"
#import "MOEffectiveWebContentSettings.h"

@interface MOEffectiveSettings : NSObject

@property (readonly) MOEffectiveAccountSettings *account; // ivar: _account
@property (readonly) MOEffectiveAllowedClientSettings *allowedClient; // ivar: _allowedClient
@property (readonly) MOEffectiveAppStoreSettings *appStore; // ivar: _appStore
@property (readonly) MOEffectiveApplicationSettings *application; // ivar: _application
@property (readonly) MOEffectiveCellularSettings *cellular; // ivar: _cellular
@property (readonly) MOEffectiveDateAndTimeSettings *dateAndTime; // ivar: _dateAndTime
@property (readonly) MOEffectiveGameCenterSettings *gameCenter; // ivar: _gameCenter
@property (readonly) MOEffectiveMediaSettings *media; // ivar: _media
@property (readonly) MOEffectivePasscodeSettings *passcode; // ivar: _passcode
@property (readonly) MOEffectiveSafariSettings *safari; // ivar: _safari
@property (readonly) MOEffectiveShieldSettings *shield; // ivar: _shield
@property (readonly) MOEffectiveSiriSettings *siri; // ivar: _siri
@property (readonly) MOEffectiveWebContentSettings *webContent; // ivar: _webContent


+(id)_effectiveApplicationArrayForItem:(id)arg0 forKey:(id)arg1 ;
+(id)_effectiveCategoryArrayForItem:(id)arg0 forKey:(id)arg1 ;
+(id)_effectiveWebDomainArrayForItem:(id)arg0 forKey:(id)arg1 ;
+(id)effectiveApplicationCategoryPolicyForKey:(id)arg0 withDefault:(id)arg1 ;
+(id)effectiveApplicationForItem:(id)arg0 forKey:(id)arg1 ;
+(id)effectiveArrayOfApplicationsForKey:(id)arg0 withDefault:(id)arg1 ;
+(id)effectiveArrayOfDatasForKey:(id)arg0 withDefault:(id)arg1 ;
+(id)effectiveArrayOfWebDomainsForKey:(id)arg0 withDefault:(id)arg1 ;
+(id)effectiveBoolForKey:(id)arg0 withDefault:(BOOL)arg1 ;
+(id)effectiveIntegerForKey:(id)arg0 withDefault:(NSInteger)arg1 ;
+(id)effectiveOptionalApplicationForKey:(id)arg0 withDefault:(id)arg1 ;
+(id)effectiveSettings;
+(id)effectiveSettingsDirectory;
+(id)effectiveSettingsURL;
+(id)effectiveStringForKey:(id)arg0 withDefault:(id)arg1 ;
+(id)effectiveWebContentFilterPolicyForKey:(id)arg0 withDefault:(id)arg1 ;
+(id)effectiveWebDomainCategoryPolicyForKey:(id)arg0 withDefault:(id)arg1 ;
+(id)effectiveWebDomainForItem:(id)arg0 forKey:(id)arg1 ;
+(id)keyForSetting:(id)arg0 inGroup:(id)arg1 ;
+(id)sharedDirectory;
+(void)startObservingChangesWithHandler:(id)arg0 ;
+(void)subscribeForChangesInGroups:(id)arg0 eventName:(id)arg1 ;
-(id)init;


@end


#endif