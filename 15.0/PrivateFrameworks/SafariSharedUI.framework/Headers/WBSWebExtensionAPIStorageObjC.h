// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPISTORAGEOBJC_H
#define WBSWEBEXTENSIONAPISTORAGEOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIStorageAreaObjC.h"
#import "WBSWebExtensionAPIEventObjC.h"

@interface WBSWebExtensionAPIStorageObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIStorageAreaObjC *_local;
    WBSWebExtensionAPIStorageAreaObjC *_sync;
    WBSWebExtensionAPIEventObjC *_onChanged;
}


@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIStorageAreaObjC *local;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onChanged;
@property (readonly, nonatomic) WBSWebExtensionAPIStorageAreaObjC *sync;


+(id)storageWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 isForMainWorld:(BOOL)arg2 ;


@end


#endif