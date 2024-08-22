// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIACCESSIBILITYLOADER_H
#define UIACCESSIBILITYLOADER_H


#import <Foundation/Foundation.h>


@interface UIAccessibilityLoader : NSObject



+(BOOL)_accessibilityServerStarted;
+(BOOL)_accessibilityStringLocalizationCategoriesLoaded;
+(BOOL)_accessibilityUIKitBundleLoaded;
+(id)_accessibilityBundlesForBundle:(id)arg0 ;
+(void)_accessibilityInitializeRuntimeOverrides;
+(void)_accessibilityInitializeSubclassRuntimeOverrides;
+(void)_accessibilityReenabled;
+(void)_accessibilityStartMiniServer;
+(void)_accessibilityStartServer;
+(void)_accessibilityStopServer;
+(void)_didLoadPreboardAccessibilityBundle;
+(void)_didLoadSystemAppAccessibilityBundle;
+(void)_performInitialAccessibilityBundleLoad:(BOOL)arg0 monitorForFutureLoadEvents:(BOOL)arg1 trackingMode:(NSInteger)arg2 ;
+(void)_stringLocalizationStarted:(id)arg0 ;
+(void)loadAccessibilityBundle:(id)arg0 didLoadCallback:(id)arg1 ;
// +(void)loadAccessibilityBundle:(id)arg0 didLoadCallback:(id)arg1 force:(unk)arg2 loadAllAccessibilityInfo:(BOOL)arg3  ;
// +(void)loadAccessibilityBundle:(id)arg0 didLoadCallback:(id)arg1 loadSubbundles:(unk)arg2  ;
+(void)loadAccessibilityBundleForBundle:(id)arg0 didLoadCallback:(id)arg1 ;
// +(void)loadAccessibilityBundleForBundle:(id)arg0 didLoadCallback:(id)arg1 force:(unk)arg2 loadAllAccessibilityInfo:(BOOL)arg3  ;
// +(void)loadAccessibilityBundleForBundle:(id)arg0 didLoadCallback:(id)arg1 forceLoad:(unk)arg2 loadSubbundles:(BOOL)arg3 loadAllAccessibilityInfo:(BOOL)arg4  ;
// +(void)loadActualAccessibilityBundle:(id)arg0 didLoadCallback:(id)arg1 loadSubbundles:(unk)arg2  ;


@end


#endif