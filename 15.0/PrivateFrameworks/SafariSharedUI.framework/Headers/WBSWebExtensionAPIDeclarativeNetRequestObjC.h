// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPIDECLARATIVENETREQUESTOBJC_H
#define WBSWEBEXTENSIONAPIDECLARATIVENETREQUESTOBJC_H



#import "WBSWebExtensionAPIObject.h"

@interface WBSWebExtensionAPIDeclarativeNetRequestObjC : WBSWebExtensionAPIObject

@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic) CGFloat maxNumberOfStaticRulesets;


+(id)declarativeNetRequestWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 ;
-(void)getEnabledRulesetsWithBrowserContextController:(id)arg0 completionHandler:(id)arg1 ;
-(void)isRegexSupportedWithOptions:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)updateEnabledRulesetsWithOptions:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;


@end


#endif