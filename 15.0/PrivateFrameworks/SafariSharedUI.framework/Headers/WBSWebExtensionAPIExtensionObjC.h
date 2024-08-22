// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPIEXTENSIONOBJC_H
#define WBSWEBEXTENSIONAPIEXTENSIONOBJC_H



#import "WBSWebExtensionAPIObject.h"

@interface WBSWebExtensionAPIExtensionObjC : WBSWebExtensionAPIObject

@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic, getter=isInIncognitoContext) BOOL inIncognitoContext;


+(id)extensionWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 isForMainWorld:(BOOL)arg2 ;
-(BOOL)isPropertyAllowed:(id)arg0 ;
-(id)getURLWithResourcePath:(id)arg0 ;
-(struct OpaqueJSValue *)getBackgroundPage;
-(struct OpaqueJSValue *)getViewsWithProperties:(id)arg0 context:(struct OpaqueJSContext *)arg1 ;
-(void)isAllowedFileSchemeAccessWithCompletionHandler:(id)arg0 ;
-(void)isAllowedIncognitoAccessWithCompletionHandler:(id)arg0 ;


@end


#endif