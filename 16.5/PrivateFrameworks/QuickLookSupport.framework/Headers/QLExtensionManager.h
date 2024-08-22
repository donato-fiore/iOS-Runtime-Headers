// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLEXTENSIONMANAGER_H
#define QLEXTENSIONMANAGER_H


#import <Foundation/Foundation.h>

#import "QLExtensionManagerCache.h"

@interface QLExtensionManager : NSObject

@property (retain, nonatomic) QLExtensionManagerCache *previewExtensionCache; // ivar: _previewExtensionCache
@property (retain, nonatomic) QLExtensionManagerCache *previewHighMemoryExtensionCache; // ivar: _previewHighMemoryExtensionCache
@property (retain, nonatomic) QLExtensionManagerCache *thumbnailExtensionCache; // ivar: _thumbnailExtensionCache
@property (retain, nonatomic) QLExtensionManagerCache *thumbnailHighMemoryExtensionCache; // ivar: _thumbnailHighMemoryExtensionCache
@property (retain, nonatomic) QLExtensionManagerCache *thumbnailSecureExtensionCache; // ivar: _thumbnailSecureExtensionCache


+(BOOL)extension:(id)arg0 supportsExactType:(id)arg1 ;
+(id)sharedManager;
+(void)_resetSharedManager;
+(void)_setSharedManager:(id)arg0 ;
-(BOOL)existsExtensionForContentType:(id)arg0 allowExtensionsForParentTypes:(BOOL)arg1 applicationBundleIdentifier:(id)arg2 extensionPath:(id)arg3 extensionType:(NSUInteger)arg4 generationType:(NSUInteger)arg5 ;
-(BOOL)existsExtensionForContentType:(id)arg0 allowExtensionsForParentTypes:(BOOL)arg1 applicationBundleIdentifier:(id)arg2 extensionType:(NSUInteger)arg3 generationType:(NSUInteger)arg4 ;
-(BOOL)existsExtensionForContentType:(id)arg0 allowExtensionsForParentTypes:(BOOL)arg1 firstPartyExtension:(BOOL)arg2 applicationBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(NSUInteger)arg5 generationType:(NSUInteger)arg6 ;
-(id)_applicationPathForBundleId:(id)arg0 ;
-(id)_cachesForExtensionType:(NSUInteger)arg0 shouldUseRestrictedExtension:(BOOL)arg1 ;
-(id)_extensionPointNameForExtensionType:(NSUInteger)arg0 ;
-(id)extensionForContentType:(id)arg0 allowExtensionsForParentTypes:(BOOL)arg1 applicationBundleIdentifier:(id)arg2 extensionPath:(id)arg3 extensionType:(NSUInteger)arg4 generationType:(NSUInteger)arg5 ;
-(id)extensionForContentType:(id)arg0 allowExtensionsForParentTypes:(BOOL)arg1 applicationBundleIdentifier:(id)arg2 extensionPath:(id)arg3 extensionType:(NSUInteger)arg4 generationType:(NSUInteger)arg5 shouldUseRestrictedExtension:(BOOL)arg6 ;
-(id)extensionForContentType:(id)arg0 allowExtensionsForParentTypes:(BOOL)arg1 firstPartyExtension:(BOOL)arg2 applicationBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(NSUInteger)arg5 generationType:(NSUInteger)arg6 shouldUseRestrictedExtension:(BOOL)arg7 ;
-(id)qlExtensionForContentType:(id)arg0 allowExtensionsForParentTypes:(BOOL)arg1 applicationBundleIdentifier:(id)arg2 extensionPath:(id)arg3 extensionType:(NSUInteger)arg4 generationType:(NSUInteger)arg5 shouldUseRestrictedExtension:(BOOL)arg6 ;
-(id)qlExtensionForContentType:(id)arg0 allowExtensionsForParentTypes:(BOOL)arg1 firstPartyExtension:(BOOL)arg2 applicationBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(NSUInteger)arg5 generationType:(NSUInteger)arg6 shouldUseRestrictedExtension:(BOOL)arg7 ;
-(void)_addQueryAttributesToExtensionQuery:(id)arg0 withContentType:(id)arg1 appBundleIdentifier:(id)arg2 extensionType:(NSUInteger)arg3 generationType:(NSUInteger)arg4 ;
-(void)_setupCache;
-(void)extensionContextForContentType:(id)arg0 allowExtensionsForParentTypes:(BOOL)arg1 appBundleIdentifier:(id)arg2 extensionPath:(id)arg3 extensionType:(NSUInteger)arg4 generationType:(NSUInteger)arg5 withCompletionHandler:(id)arg6 ;
-(void)extensionContextForContentType:(id)arg0 allowExtensionsForParentTypes:(BOOL)arg1 firstPartyExtension:(BOOL)arg2 appBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(NSUInteger)arg5 generationType:(NSUInteger)arg6 withCompletionHandler:(id)arg7 ;


@end


#endif