// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSBUNDLEWEBEXTENSION_H
#define WBSBUNDLEWEBEXTENSION_H

@class NSMutableSet, WKBrowsingContextHandle, JSValue, NSArray, NSString, NSDictionary, NSSet, UIImage, WKWebProcessPlugInScriptWorld, NSURL;
@protocol WBSWebExtensionDataForwarding;

#import <Foundation/Foundation.h>

#import "WBSWebExtensionData.h"
#import "WBSWebExtensionLocalization.h"
#import "WBSBundleWebExtensionBrowsingContext.h"

@interface WBSBundleWebExtension : NSObject <WBSWebExtensionDataForwarding>

 {
    NSMutableSet *_browsingContextsDisplayingExtensionContent;
}


@property (retain, nonatomic) WKBrowsingContextHandle *backgroundPageHandle; // ivar: _backgroundPageHandle
@property (readonly, nonatomic) BOOL backgroundPageIsPersistent;
@property (readonly, nonatomic) BOOL backgroundPageIsServiceWorker;
@property (readonly, nonatomic) BOOL backgroundPageUsesModules;
@property (readonly, nonatomic) JSValue *backgroundPageWindowObject;
@property (readonly, nonatomic) NSArray *commands;
@property (readonly, nonatomic) NSString *composedIdentifier;
@property (readonly, nonatomic) NSDictionary *configuredPermissionOrigins;
@property (readonly, nonatomic) NSDictionary *configuredPermissions;
@property (readonly, nonatomic) NSString *contentSecurityPolicy;
@property (readonly, nonatomic) NSSet *currentAccessibleOrigins;
@property (readonly, nonatomic) NSSet *currentPermissionOrigins;
@property (readonly, nonatomic) NSSet *currentPermissions;
@property (retain, nonatomic) WBSWebExtensionData *data; // ivar: _data
@property (readonly, nonatomic) NSString *displayDescription;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *displayShortName;
@property (readonly, nonatomic) NSString *displayVersion;
@property (readonly, nonatomic) NSArray *externallyConnectableMatchPatternStrings;
@property (readonly, nonatomic) NSSet *externallyConnectableMatchPatterns;
@property (readonly, nonatomic) NSString *generatedBackgroundPageContent;
@property (copy, nonatomic) NSDictionary *grantedPermissionOrigins;
@property (copy, nonatomic) NSDictionary *grantedPermissions;
@property (readonly, nonatomic) BOOL hasAbilityToInjectContentIntoWebpages;
@property (readonly, nonatomic) BOOL hasAction;
@property (readonly, nonatomic) BOOL hasBrowserAction;
@property (readonly, nonatomic) BOOL hasCommands;
@property (readonly, nonatomic) BOOL hasDeclarativeNetRequestHostAccessPermission;
@property (readonly, nonatomic) BOOL hasDeclarativeNetRequestPermission;
@property (readonly, nonatomic) BOOL hasPageAction;
@property (readonly, nonatomic) BOOL hasStorage;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) NSArray *injectedContentData;
@property (retain, nonatomic) WKWebProcessPlugInScriptWorld *isolatedWorld; // ivar: _isolatedWorld
@property (readonly, nonatomic) WBSWebExtensionLocalization *localization;
@property (readonly, nonatomic) NSDictionary *manifest;
@property (readonly, nonatomic) NSSet *manifestAccessibleOrigins;
@property (readonly, nonatomic) NSArray *manifestErrors;
@property (readonly, nonatomic) NSSet *manifestOptionalPermissionOrigins;
@property (readonly, nonatomic) NSSet *manifestOptionalPermissions;
@property (readonly, nonatomic) NSSet *manifestPermissionOrigins;
@property (readonly, nonatomic) NSSet *manifestPermissions;
@property (readonly, nonatomic) NSInteger manifestVersion;
@property (readonly, nonatomic) NSURL *newTabOverridePageURL;
@property (retain, nonatomic) WBSBundleWebExtensionBrowsingContext *popupHandle; // ivar: _popupHandle
@property (readonly, nonatomic) UIImage *preferencesIcon;
@property (readonly, nonatomic) NSString *processDisplayName;
@property (readonly, nonatomic) NSArray *relatedBrowsingContextHandles;
@property (nonatomic) BOOL requestedOptionalAccessToAllHosts;
@property (readonly, nonatomic) NSSet *requestedPermissionOriginsNotAlreadyConfigured;
@property (readonly, nonatomic) NSSet *requestedPermissionsNotAlreadyConfigured;
@property (readonly, nonatomic) BOOL requestsAccessToAllHosts;
@property (copy, nonatomic) NSDictionary *revokedPermissionOrigins;
@property (copy, nonatomic) NSDictionary *revokedPermissions;
@property (readonly, nonatomic) UIImage *toolbarImage;
@property (readonly, nonatomic) BOOL usesManifestVersion3;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSArray *webAccessibleResources;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_windowObjectForBrowsingContext:(id)arg0 ;
-(id)allWindowObjectsWithProperties:(id)arg0 usingContext:(struct OpaqueJSContext *)arg1 ;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithWebExtensionData:(id)arg0 ;
-(void)addBrowsingContextDisplayingExtensionContent:(id)arg0 ;


@end


#endif