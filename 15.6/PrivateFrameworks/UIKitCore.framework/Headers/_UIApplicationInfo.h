// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIAPPLICATIONINFO_H
#define _UIAPPLICATIONINFO_H

@class FBSApplicationInfo, NSArray, NSString;


#import "_UIApplicationInfoParser.h"

@interface _UIApplicationInfo : FBSApplicationInfo {
    NSInteger _launchingInterfaceOrientation;
    _UIApplicationInfoParser *_plistParser;
    NSArray *_lazy_folderNames;
    NSString *_lazy_fallbackFolderName;
}


@property (readonly, nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, nonatomic) BOOL canChangeBackgroundStyle; // ivar: _canChangeBackgroundStyle
@property (readonly, nonatomic) BOOL fakingRequiresHighResolution; // ivar: _fakingRequiresHighResolution
@property (readonly, nonatomic) NSString *fallbackFolderName;
@property (readonly, nonatomic) NSArray *folderNames;
@property (readonly, nonatomic) NSUInteger ignoredOverrides; // ivar: _ignoredOverrides
@property (readonly, copy, nonatomic) NSString *keyColorAssetName; // ivar: _keyColorAssetName
@property (readonly, copy, nonatomic) NSString *launchImageFile; // ivar: _launchImageFile
@property (readonly, nonatomic) BOOL optOutOfRTL; // ivar: _optOutOfRTL
@property (readonly, nonatomic) NSInteger requestedStatusBarStyle; // ivar: _requestedStatusBarStyle
@property (readonly, nonatomic) BOOL requiresHighResolution; // ivar: _requiresHighResolution
@property (readonly, nonatomic) BOOL statusBarHidden; // ivar: _statusBarHidden
@property (readonly, nonatomic) BOOL statusBarHiddenWhenVerticallyCompact; // ivar: _statusBarHiddenWhenVerticallyCompact
@property (readonly, nonatomic) NSInteger supportedUserInterfaceStyle; // ivar: _supportedUserInterfaceStyle
@property (readonly, nonatomic) BOOL systemWindowsSecure; // ivar: _systemWindowsSecure
@property (readonly, nonatomic) NSUInteger viewControllerBasedStatusBarAppearance; // ivar: _viewControllerBasedStatusBarAppearance
@property (readonly, nonatomic) NSInteger whitePointAdaptivityStyle; // ivar: _whitePointAdaptivityStyle


+(id)_genreNameForID:(NSInteger)arg0 ;
+(id)_localizedFolderNameForName:(id)arg0 ;
-(BOOL)statusBarForcedHiddenForInterfaceOrientation:(NSInteger)arg0 onDisplay:(id)arg1 ;
-(BOOL)statusBarForcedHiddenForInterfaceOrientation:(NSInteger)arg0 onDisplay:(id)arg1 withUserInterfaceIdiom:(NSInteger)arg2 ;
-(BOOL)statusBarHiddenForInterfaceOrientation:(NSInteger)arg0 onDisplay:(id)arg1 ;
-(BOOL)statusBarHiddenForInterfaceOrientation:(NSInteger)arg0 onDisplay:(id)arg1 withUserInterfaceIdiom:(NSInteger)arg2 ;
-(NSInteger)_launchingInterfaceOrientation;
-(void)_loadFromProxy:(id)arg0 ;
-(void)_lock_loadFolderNamesIfNecessary;


@end


#endif