// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSWEBEXTENSIONAPIRUNTIMEOBJC_H
#define WBSWEBEXTENSIONAPIRUNTIMEOBJC_H



#import "WBSWebExtensionAPIRuntimeBase.h"
#import "WBSWebExtensionAPIEventObjC.h"

@interface WBSWebExtensionAPIRuntimeObjC : WBSWebExtensionAPIRuntimeBase {
    WBSWebExtensionAPIEventObjC *_onConnect;
    WBSWebExtensionAPIEventObjC *_onConnectExternal;
    WBSWebExtensionAPIEventObjC *_onMessage;
    WBSWebExtensionAPIEventObjC *_onMessageExternal;
    WBSWebExtensionAPIEventObjC *_onStartup;
    WBSWebExtensionAPIEventObjC *_onInstalled;
}






@end


#endif