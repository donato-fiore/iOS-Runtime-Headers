// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPIPERMISSIONSOBJC_H
#define WBSWEBEXTENSIONAPIPERMISSIONSOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIEventObjC.h"

@interface WBSWebExtensionAPIPermissionsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onAdded;
    WBSWebExtensionAPIEventObjC *_onRemoved;
}


@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onAdded;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onRemoved;


+(id)permissionsWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 ;
-(void)containsPermissions:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)getAllPermissionsWithBrowserContextController:(id)arg0 completionHandler:(id)arg1 ;
-(void)removePermissions:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)requestPermissions:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;


@end


#endif