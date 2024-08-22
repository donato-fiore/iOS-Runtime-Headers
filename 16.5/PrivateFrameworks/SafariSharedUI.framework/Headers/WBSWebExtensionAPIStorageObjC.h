// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSWEBEXTENSIONAPISTORAGEOBJC_H
#define WBSWEBEXTENSIONAPISTORAGEOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIStorageAreaObjC.h"
#import "WBSWebExtensionAPIEventObjC.h"

@interface WBSWebExtensionAPIStorageObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIStorageAreaObjC *_local;
    WBSWebExtensionAPIStorageAreaObjC *_sync;
    WBSWebExtensionAPIStorageAreaObjC *_session;
    WBSWebExtensionAPIEventObjC *_onChanged;
}






@end


#endif