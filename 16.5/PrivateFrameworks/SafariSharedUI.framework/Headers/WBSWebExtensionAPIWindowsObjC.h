// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSWEBEXTENSIONAPIWINDOWSOBJC_H
#define WBSWEBEXTENSIONAPIWINDOWSOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIWindowsEventObjC.h"

@interface WBSWebExtensionAPIWindowsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIWindowsEventObjC *_onCreated;
    WBSWebExtensionAPIWindowsEventObjC *_onRemoved;
    WBSWebExtensionAPIWindowsEventObjC *_onFocusChanged;
}






@end


#endif