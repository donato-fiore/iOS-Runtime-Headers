// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPINAMESPACEOBJC_H
#define WBSWEBEXTENSIONAPINAMESPACEOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIExtensionObjC.h"
#import "WBSWebExtensionAPIRuntimeObjC.h"
#import "WBSWebExtensionAPIActionObjC.h"
#import "WBSWebExtensionAPIPermissionsObjC.h"
#import "WBSWebExtensionAPITabsObjC.h"
#import "WBSWebExtensionAPIWindowsObjC.h"
#import "WBSWebExtensionAPILocalizationObjC.h"
#import "WBSWebExtensionAPIStorageObjC.h"
#import "WBSWebExtensionAPICommandsObjC.h"
#import "WBSWebExtensionAPIContextMenusObjC.h"
#import "WBSWebExtensionAPINotificationsObjC.h"
#import "WBSWebExtensionAPIWebNavigationObjC.h"
#import "WBSWebExtensionAPIWebRequestObjC.h"
#import "WBSWebExtensionAPIAlarmsObjC.h"
#import "WBSWebExtensionAPICookiesObjC.h"
#import "WBSWebExtensionAPIDeclarativeNetRequestObjC.h"

@interface WBSWebExtensionAPINamespaceObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIExtensionObjC *_extension;
    WBSWebExtensionAPIRuntimeObjC *_runtime;
    WBSWebExtensionAPIActionObjC *_browserAction;
    WBSWebExtensionAPIActionObjC *_pageAction;
    WBSWebExtensionAPIPermissionsObjC *_permissions;
    WBSWebExtensionAPITabsObjC *_tabs;
    WBSWebExtensionAPIWindowsObjC *_windows;
    WBSWebExtensionAPILocalizationObjC *_i18n;
    WBSWebExtensionAPIStorageObjC *_storage;
    WBSWebExtensionAPICommandsObjC *_commands;
    WBSWebExtensionAPIContextMenusObjC *_contextMenus;
    WBSWebExtensionAPINotificationsObjC *_notifications;
    WBSWebExtensionAPIWebNavigationObjC *_webNavigation;
    WBSWebExtensionAPIWebRequestObjC *_webRequest;
    WBSWebExtensionAPIAlarmsObjC *_alarms;
    WBSWebExtensionAPICookiesObjC *_cookies;
    WBSWebExtensionAPIDeclarativeNetRequestObjC *_declarativeNetRequest;
}


@property (readonly, nonatomic) WBSWebExtensionAPIAlarmsObjC *alarms;
@property (readonly, nonatomic) WBSWebExtensionAPIActionObjC *browserAction;
@property (readonly, nonatomic) WBSWebExtensionAPICommandsObjC *commands;
@property (readonly, nonatomic) WBSWebExtensionAPIContextMenusObjC *contextMenus;
@property (readonly, nonatomic) WBSWebExtensionAPICookiesObjC *cookies;
@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIDeclarativeNetRequestObjC *declarativeNetRequest;
@property (readonly, nonatomic) WBSWebExtensionAPIExtensionObjC *extension;
@property (readonly, nonatomic) WBSWebExtensionAPILocalizationObjC *i18n;
@property (readonly, nonatomic) WBSWebExtensionAPIContextMenusObjC *menus;
@property (readonly, nonatomic) WBSWebExtensionAPINotificationsObjC *notifications;
@property (readonly, nonatomic) WBSWebExtensionAPIActionObjC *pageAction;
@property (readonly, nonatomic) WBSWebExtensionAPIPermissionsObjC *permissions;
@property (readonly, nonatomic) WBSWebExtensionAPIRuntimeObjC *runtime;
@property (readonly, nonatomic) WBSWebExtensionAPIStorageObjC *storage;
@property (readonly, nonatomic) WBSWebExtensionAPITabsObjC *tabs;
@property (readonly, nonatomic) WBSWebExtensionAPIWebNavigationObjC *webNavigation;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestObjC *webRequest;
@property (readonly, nonatomic) WBSWebExtensionAPIWindowsObjC *windows;


-(BOOL)_propertyIsUnsupportedOnIOS:(id)arg0 ;
-(BOOL)isPropertyAllowed:(id)arg0 ;


@end


#endif