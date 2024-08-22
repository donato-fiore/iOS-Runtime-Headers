// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPITABSOBJC_H
#define WBSWEBEXTENSIONAPITABSOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIEventObjC.h"

@interface WBSWebExtensionAPITabsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onActivated;
    WBSWebExtensionAPIEventObjC *_onAttached;
    WBSWebExtensionAPIEventObjC *_onCreated;
    WBSWebExtensionAPIEventObjC *_onDetached;
    WBSWebExtensionAPIEventObjC *_onHighlighted;
    WBSWebExtensionAPIEventObjC *_onMoved;
    WBSWebExtensionAPIEventObjC *_onRemoved;
    WBSWebExtensionAPIEventObjC *_onReplaced;
    WBSWebExtensionAPIEventObjC *_onUpdated;
}


@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onActivated;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onAttached;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onCreated;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onDetached;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onHighlighted;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onMoved;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onRemoved;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onReplaced;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onUpdated;
@property (readonly, nonatomic) CGFloat tabIdentifierNone;


+(id)tabsWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 ;
-(BOOL)_getBypassCacheFromReloadPropertiesDictionary:(id)arg0 outExceptionString:(*id)arg1 ;
-(BOOL)_isProgrammaticInjectionDetailsDictionaryValid:(id)arg0 callerName:(id)arg1 outExceptionString:(*id)arg2 ;
-(BOOL)isPropertyAllowed:(id)arg0 ;
-(id)_validatedQueryInfoDictionary:(id)arg0 outExceptionString:(*id)arg1 ;
-(struct Ref<SafariShared::WBSWebExtensionAPIPort, WTF::RawPtrTraits<SafariShared::WBSWebExtensionAPIPort>> )connectToTab:(CGFloat)arg0 connectInfo:(id)arg1 frame:(id)arg2 ;
-(void)captureVisibleTabInWindow:(CGFloat)arg0 options:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(*id)arg4 ;
-(void)closeTabsWithIDs:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)createTabWithProperties:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)detectLanguageInTab:(CGFloat)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)discardTab:(CGFloat)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 ;
-(void)duplicateTab:(CGFloat)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)executeScriptInTab:(CGFloat)arg0 details:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(*id)arg4 ;
-(void)getCurrentTabWithBrowserContextController:(id)arg0 completionHandler:(id)arg1 ;
-(void)getSelectedTabInWindow:(CGFloat)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)getTabWithID:(CGFloat)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)getZoomForTab:(CGFloat)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)goBackInTab:(CGFloat)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)goForwardInTab:(CGFloat)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)highlightTabs:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 ;
-(void)insertCSSInTab:(CGFloat)arg0 details:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(*id)arg4 ;
-(void)queryTabs:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)reloadTab:(CGFloat)arg0 reloadProperties:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(*id)arg4 ;
-(void)removeCSSInTab:(CGFloat)arg0 details:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(*id)arg4 ;
-(void)sendMessageToTab:(CGFloat)arg0 message:(id)arg1 options:(id)arg2 browserContextController:(id)arg3 frame:(id)arg4 completionHandler:(id)arg5 outExceptionString:(*id)arg6 ;
-(void)setZoomForTab:(CGFloat)arg0 zoomFactor:(CGFloat)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(*id)arg4 ;
-(void)updateTab:(CGFloat)arg0 updateProperties:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(*id)arg4 ;


@end


#endif