// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPICONTEXTMENUSOBJC_H
#define WBSWEBEXTENSIONAPICONTEXTMENUSOBJC_H

@class NSMutableDictionary;


#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIEventObjC.h"

@interface WBSWebExtensionAPIContextMenusObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onClicked;
    NSMutableDictionary *_callbacks;
}


@property (readonly, nonatomic) CGFloat actionMenuTopLevelLimit;
@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onClicked;


+(id)contextMenusWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 ;
-(id)createWithDetails:(struct OpaqueJSValue *)arg0 browserContextController:(id)arg1 context:(struct OpaqueJSContext *)arg2 completionHandler:(id)arg3 outExceptionString:(*id)arg4 ;
-(void)executeContextMenuItemWithInfo:(id)arg0 tabInfo:(id)arg1 ;
-(void)initWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 isForMainWorld:(BOOL)arg2 ;
-(void)removeAllWithBrowserContextController:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeItemWithIdentifier:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)updateItemWithIdentifier:(id)arg0 details:(struct OpaqueJSValue *)arg1 browserContextController:(id)arg2 context:(struct OpaqueJSContext *)arg3 completionHandler:(id)arg4 outExceptionString:(*id)arg5 ;


@end


#endif