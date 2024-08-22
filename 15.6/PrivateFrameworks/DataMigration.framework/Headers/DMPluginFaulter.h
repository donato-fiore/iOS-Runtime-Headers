// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMPLUGINFAULTER_H
#define DMPLUGINFAULTER_H

@class NSString;
@protocol DMPluginFaulting;

#import <Foundation/Foundation.h>


@interface DMPluginFaulter : NSObject <DMPluginFaulting>



@property (copy, nonatomic) NSString *message; // ivar: _message


+(id)_selectorNameFromPluginIdentifier:(id)arg0 ;
-(void)AccessibilityAccessibilityDataMigration;
-(void)AnisetteMigrator;
-(void)BuddyMigrator;
-(void)CallHistoryDataMigrator;
-(void)CloudTabsMigratormigrator;
-(void)CommCenterMigrator;
-(void)CookieDataMigratormigrator;
-(void)HealthMigrator;
-(void)LaunchServicesMigrator;
-(void)MKBMigrator;
-(void)MSUDataMigrator;
-(void)MapsDataClassMigratormigrator;
-(void)MobileAsset;
-(void)MobileContainerManagerContainerMigrator;
-(void)MobileGestaltMobileGestaltMigrator;
-(void)MobileInstallationAppUserDataMigrator;
-(void)MobileInstallationSystemAppMigrator;
-(void)MobileSafarimigrator;
-(void)MobileSlideShow;
-(void)NanoAudioControlMigrator;
-(void)NanoHealthMigrator;
-(void)PassbookDataMigrator;
-(void)PreferencesMigrator;
-(void)SoftwareUpdateBridge;
-(void)StocksMigrator;
-(void)VideosMigrator;
-(void)VoiceShortcutsShortcutsMigrator;
-(void)WebBookmarksmigrator;
-(void)WiFiDataMigrator;
-(void)_fault;
-(void)accountsettingsmigrator;
-(void)accountsmigrator;
-(void)accountsobsolescencemigrator;
-(void)addressbookmigrator;
-(void)airtrafficmigrator;
-(void)appleaccountmergebuddyprovisioningresponsemigrator;
-(void)appleaccountmigrator;
-(void)calendarmigrator;
-(void)certuimigrator;
-(void)cloudrecentsmigrator;
-(void)coreaudioHAENDataMigrator;
-(void)dataaccessmigrator;
-(void)dataaccessmigratorlegacy;
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
-(void)nanomailclientmigrator;
-(void)preferencesInternationalSupportMigrator;
-(void)sbmigrator;
-(void)siriSiri;
-(void)smsmigrator;
-(void)timedmigrator;
-(void)tonemigrator;
-(void)vibrationmigrator;


@end


#endif