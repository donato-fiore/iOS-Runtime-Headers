// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOSETTINGSSTORE_H
#define MOSETTINGSSTORE_H

@protocol MOSettingsReader, MOSettingsWriter;

#import <Foundation/Foundation.h>

#import "MOAccountSettingsGroup.h"
#import "MOAllowedClientSettingsGroup.h"
#import "MOAppStoreSettingsGroup.h"
#import "MOApplicationSettingsGroup.h"
#import "MOCellularSettingsGroup.h"
#import "MODateAndTimeSettingsGroup.h"
#import "MODeviceActivitySettingsGroup.h"
#import "MOGameCenterSettingsGroup.h"
#import "MOManagedSettingsSettingsGroup.h"
#import "MOMediaSettingsGroup.h"
#import "MOPasscodeSettingsGroup.h"
#import "MOSafariSettingsGroup.h"
#import "MOShieldSettingsGroup.h"
#import "MOSiriSettingsGroup.h"
#import "MOUserSettingsGroup.h"
#import "MOWebContentSettingsGroup.h"

@interface MOSettingsStore : NSObject

@property (readonly, retain, nonatomic) MOAccountSettingsGroup *account; // ivar: _account
@property (readonly, retain, nonatomic) MOAllowedClientSettingsGroup *allowedClient; // ivar: _allowedClient
@property (readonly, retain, nonatomic) MOAppStoreSettingsGroup *appStore; // ivar: _appStore
@property (readonly, retain, nonatomic) MOApplicationSettingsGroup *application; // ivar: _application
@property (readonly, retain, nonatomic) MOCellularSettingsGroup *cellular; // ivar: _cellular
@property (readonly, retain, nonatomic) MODateAndTimeSettingsGroup *dateAndTime; // ivar: _dateAndTime
@property (readonly, retain, nonatomic) MODeviceActivitySettingsGroup *deviceActivity; // ivar: _deviceActivity
@property (readonly, retain, nonatomic) MOGameCenterSettingsGroup *gameCenter; // ivar: _gameCenter
@property (readonly, retain, nonatomic) MOManagedSettingsSettingsGroup *managedSettings; // ivar: _managedSettings
@property (readonly, retain, nonatomic) MOMediaSettingsGroup *media; // ivar: _media
@property (readonly, retain, nonatomic) MOPasscodeSettingsGroup *passcode; // ivar: _passcode
@property (readonly, weak) NSObject<MOSettingsReader> *reader;
@property (readonly, retain, nonatomic) MOSafariSettingsGroup *safari; // ivar: _safari
@property (readonly, retain, nonatomic) MOShieldSettingsGroup *shield; // ivar: _shield
@property (readonly, retain, nonatomic) MOSiriSettingsGroup *siri; // ivar: _siri
@property (readonly, retain, nonatomic) MOUserSettingsGroup *user; // ivar: _user
@property (readonly, retain, nonatomic) MOWebContentSettingsGroup *webContent; // ivar: _webContent
@property (readonly, weak) NSObject<MOSettingsWriter> *writer;


+(BOOL)saveSettings:(id)arg0 toURL:(id)arg1 ;
+(id)directoryAttributes;
+(id)fileAttributes;
+(id)loadDataAtURL:(id)arg0 outError:(*id)arg1 ;
+(id)loadSettingsAtURL:(id)arg0 ;
+(void)createSettingsDirectoryAtURL:(id)arg0 ;
+(void)migrateSettingsIfNecessary:(id)arg0 ;
-(id)initStore;
-(id)settingKeyFromSetting:(id)arg0 group:(id)arg1 ;


@end


#endif