// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKWEBEXTENSIONCONTEXT_H
#define _WKWEBEXTENSIONCONTEXT_H

@class NSURL, NSSet, NSString, NSDictionary;
@protocol WKObject;

#import <Foundation/Foundation.h>

#import "WKWebView.h"
#import "_WKWebExtension.h"
#import "_WKWebExtensionController.h"

@interface _WKWebExtensionContext : NSObject <WKObject>

 {
    ObjectStorage<WebKit::WebExtensionContext> _webExtensionContext;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) NSURL *_backgroundContentURL;
@property (readonly, nonatomic) WKWebView *_backgroundWebView;
@property (nonatomic, getter=_inTestingMode, setter=_setTestingMode:) BOOL _testingMode;
@property (readonly, nonatomic) *void _webExtensionContext;
@property (copy, nonatomic) NSURL *baseURL;
@property (readonly, copy, nonatomic) NSSet *currentPermissionMatchPatterns;
@property (readonly, copy, nonatomic) NSSet *currentPermissions;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *deniedPermissionMatchPatterns;
@property (copy, nonatomic) NSDictionary *deniedPermissions;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *grantedPermissionMatchPatterns;
@property (copy, nonatomic) NSDictionary *grantedPermissions;
@property (readonly, nonatomic) BOOL hasAccessToAllHosts;
@property (readonly, nonatomic) BOOL hasAccessToAllURLs;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInspectable) BOOL inspectable;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (nonatomic) BOOL requestedOptionalAccessToAllHosts;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) _WKWebExtension *webExtension;
@property (readonly, weak, nonatomic) _WKWebExtensionController *webExtensionController;


+(id)contextForExtension:(id)arg0 ;
-(BOOL)hasAccessToURL:(id)arg0 ;
-(BOOL)hasAccessToURL:(id)arg0 inTab:(id)arg1 ;
-(BOOL)hasActiveUserGestureInTab:(id)arg0 ;
-(BOOL)hasInjectedContentForURL:(id)arg0 ;
-(BOOL)hasPermission:(id)arg0 ;
-(BOOL)hasPermission:(id)arg0 inTab:(id)arg1 ;
-(NSInteger)permissionStatusForMatchPattern:(id)arg0 ;
-(NSInteger)permissionStatusForMatchPattern:(id)arg0 inTab:(id)arg1 ;
-(NSInteger)permissionStatusForPermission:(id)arg0 ;
-(NSInteger)permissionStatusForPermission:(id)arg0 inTab:(id)arg1 ;
-(NSInteger)permissionStatusForURL:(id)arg0 ;
-(NSInteger)permissionStatusForURL:(id)arg0 inTab:(id)arg1 ;
-(id)initForExtension:(id)arg0 ;
-(void)dealloc;
-(void)setPermissionStatus:(NSInteger)arg0 forMatchPattern:(id)arg1 ;
-(void)setPermissionStatus:(NSInteger)arg0 forMatchPattern:(id)arg1 expirationDate:(id)arg2 ;
-(void)setPermissionStatus:(NSInteger)arg0 forPermission:(id)arg1 ;
-(void)setPermissionStatus:(NSInteger)arg0 forPermission:(id)arg1 expirationDate:(id)arg2 ;
-(void)setPermissionStatus:(NSInteger)arg0 forURL:(id)arg1 ;
-(void)setPermissionStatus:(NSInteger)arg0 forURL:(id)arg1 expirationDate:(id)arg2 ;


@end


#endif