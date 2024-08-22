// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPICOOKIESOBJC_H
#define WBSWEBEXTENSIONAPICOOKIESOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIEventObjC.h"

@interface WBSWebExtensionAPICookiesObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onChanged;
}


@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onChanged;


+(BOOL)_isValidDetailsDictionary:(id)arg0 requiredKeys:(id)arg1 optionalKeys:(id)arg2 apiName:(id)arg3 outExceptionString:(*id)arg4 ;
+(id)cookiesWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 ;
-(void)getAllCookieStoresWithBrowserContextController:(id)arg0 completionHandler:(id)arg1 ;
-(void)getAllCookiesWithDetails:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)getCookieWithDetails:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)removeCookieWithDetails:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)setCookieWithDetails:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;


@end


#endif