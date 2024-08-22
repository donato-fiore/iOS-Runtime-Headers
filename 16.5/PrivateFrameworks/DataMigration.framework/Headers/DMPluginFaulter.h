// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMPLUGINFAULTER_H
#define DMPLUGINFAULTER_H

@class NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface DMPluginFaulter : NSObject

@property (copy, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSObject<OS_os_log> *os_log; // ivar: _os_log


+(id)_selectorNameFromPluginIdentifier:(id)arg0 ;
-(id)init;
-(void)AccessibilityAccessibilityDataMigration;
-(void)AnisetteMigrator;
-(void)BuddyMigrator;
-(void)CallHistoryDataMigrator;
-(void)CloudTabsMigratormigrator;
-(void)CookieDataMigratormigrator;
-(void)LaunchServicesMigrator;
-(void)MKBMigrator;
-(void)MSUDataMigrator;
-(void)MapsDataClassMigratormigrator;
-(void)MobileActivationMigrator;
-(void)MobileAsset;
-(void)MobileContainerManagerContainerMigrator;
-(void)MobileGestaltMobileGestaltMigrator;
-(void)MobileInstallationAppUserDataMigrator;
-(void)MobileInstallationSystemAppMigrator;
-(void)MobileSafarimigrator;
-(void)MobileSlideShow;
-(void)NanoHealthMigrator;
-(void)PassbookDataMigrator;
-(void)PreferencesMigrator;
-(void)SoftwareUpdateBridge;
-(void)StocksMigrator;
-(void)VideosMigrator;
-(void)VoiceShortcutsShortcutsMigrator;
-(void)WebBookmarksmigrator;
-(void)WiFiDataMigrator;
-(void)_faultForUnknownPluginIdentifier;
-(void)accountsmigrator;
-(void)accountsobsolescencemigrator;
-(void)addressbookmigrator;
-(void)airtrafficmigrator;
-(void)appleaccountmergebuddyprovisioningresponsemigrator;
-(void)appleaccountmigrator;
-(void)certuimigrator;
-(void)cloudrecentsmigrator;
-(void)coreaudioHAENDataMigrator;
-(void)dataaccessmigrator;
-(void)facetimemigrator;
-(void)faultWithPluginIdentifier:(id)arg0 message:(id)arg1 ;
-(void)iTunesStoremigrator;
-(void)keyboardsmigrator;
-(void)keyboardsuimigrator;
-(void)languageassetmigrator;
-(void)locationdmigrator;
-(void)managedconfigurationcleanupmigrator;
-(void)managedconfigurationmdmmigrator;
-(void)managedconfigurationmigrator;
-(void)mobilebackupmigrator;
-(void)mobilemailmigrator;
-(void)musiclibrarymigrator;
-(void)preferencesInternationalSupportMigrator;
-(void)sbmigrator;
-(void)securitydKeychainMigrator;
-(void)siriSiri;
-(void)smsmigrator;
-(void)timedmigrator;
-(void)tonemigrator;
-(void)vibrationmigrator;


@end


#endif