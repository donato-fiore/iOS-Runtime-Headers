// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPIACTIONOBJC_H
#define WBSWEBEXTENSIONAPIACTIONOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIEventObjC.h"

@interface WBSWebExtensionAPIActionObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onClicked;
}


@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onClicked;


+(id)actionWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 ;
-(void)disableWithTabIdentifier:(CGFloat)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 ;
-(void)enableWithTabIdentifier:(CGFloat)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 ;
-(void)getBadgeBackgroundColorWithDetails:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 ;
-(void)getBadgeTextWithDetails:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 ;
-(void)getPopupWithDetails:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 ;
-(void)getTitleWithDetails:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 ;
-(void)setBadgeBackgroundColorWithDetails:(id)arg0 ;
-(void)setBadgeTextWithDetails:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 ;
-(void)setIconWithDetails:(struct OpaqueJSValue *)arg0 browserContextController:(id)arg1 context:(struct OpaqueJSContext *)arg2 completionHandler:(id)arg3 outExceptionString:(*id)arg4 ;
-(void)setPopupWithDetails:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 ;
-(void)setTitleWithDetails:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif