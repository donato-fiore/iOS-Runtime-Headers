// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPIWINDOWSOBJC_H
#define WBSWEBEXTENSIONAPIWINDOWSOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIWindowsEventObjC.h"

@interface WBSWebExtensionAPIWindowsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIWindowsEventObjC *_onCreated;
    WBSWebExtensionAPIWindowsEventObjC *_onRemoved;
    WBSWebExtensionAPIWindowsEventObjC *_onFocusChanged;
}


@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIWindowsEventObjC *onCreated;
@property (readonly, nonatomic) WBSWebExtensionAPIWindowsEventObjC *onFocusChanged;
@property (readonly, nonatomic) WBSWebExtensionAPIWindowsEventObjC *onRemoved;
@property (readonly, nonatomic) CGFloat windowIdentifierCurrent;
@property (readonly, nonatomic) CGFloat windowIdentifierNone;


+(id)windowsWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 ;
-(BOOL)_isGetInfoDictionaryValidForCaller:(id)arg0 getInfo:(id)arg1 outExceptionString:(*id)arg2 ;
-(BOOL)_isResizeWindowInfoDictionaryValid:(id)arg0 forMethod:(id)arg1 outExceptionString:(*id)arg2 ;
-(BOOL)isPropertyAllowed:(id)arg0 ;
-(id)_supportedPropertiesFromCreateDataDictionary:(id)arg0 outExceptionString:(*id)arg1 ;
-(void)closeWindowWithID:(CGFloat)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)createWindowWithData:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)getAllWindowsWithInfo:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)getCurrentWindowWithInfo:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)getLastFocusedWindowWithInfo:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)getWindowWithID:(CGFloat)arg0 info:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(*id)arg4 ;
-(void)updateWindowWithID:(CGFloat)arg0 info:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(*id)arg4 ;


@end


#endif