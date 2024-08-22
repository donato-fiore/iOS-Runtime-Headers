// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
#import "WBSWebExtensionAPIScriptingObjC.h"
#import "WBSWebExtensionAPIWebNavigationObjC.h"
#import "WBSWebExtensionAPIWebRequestObjC.h"
#import "WBSWebExtensionAPIAlarmsObjC.h"
#import "WBSWebExtensionAPICookiesObjC.h"
#import "WBSWebExtensionAPIDeclarativeNetRequestObjC.h"

@interface WBSWebExtensionAPINamespaceObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIExtensionObjC *_extension;
    WBSWebExtensionAPIRuntimeObjC *_runtime;
    WBSWebExtensionAPIActionObjC *_action;
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
    WBSWebExtensionAPIScriptingObjC *_scripting;
    WBSWebExtensionAPIWebNavigationObjC *_webNavigation;
    WBSWebExtensionAPIWebRequestObjC *_webRequest;
    WBSWebExtensionAPIAlarmsObjC *_alarms;
    WBSWebExtensionAPICookiesObjC *_cookies;
    WBSWebExtensionAPIDeclarativeNetRequestObjC *_declarativeNetRequest;
}


@property (readonly, nonatomic) WBSWebExtensionAPIRuntimeObjC *runtime;




@end


#endif