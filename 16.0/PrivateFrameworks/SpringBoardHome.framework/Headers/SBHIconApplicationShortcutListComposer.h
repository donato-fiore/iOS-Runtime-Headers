// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHICONAPPLICATIONSHORTCUTLISTCOMPOSER_H
#define SBHICONAPPLICATIONSHORTCUTLISTCOMPOSER_H


#import <Foundation/Foundation.h>


@interface SBHIconApplicationShortcutListComposer : NSObject



+(BOOL)supportsMultiwindowShortcut;
+(id)composedShortcutsForApplicationWithBundleIdentifier:(id)arg0 iconDisplayName:(id)arg1 staticItems:(id)arg2 dynamicItems:(id)arg3 applicationItemID:(NSUInteger)arg4 numberOfDisplayItemsInSwitcher:(NSInteger)arg5 supportsMultipleWindows:(BOOL)arg6 isSystemApplication:(BOOL)arg7 isInternalApplication:(BOOL)arg8 isApplicationInBeta:(BOOL)arg9 isApplicationHidden:(BOOL)arg10 iconManagerAllowsEditing:(BOOL)arg11 removeStyle:(NSInteger)arg12 ;
+(id)composedShortcutsForBookmarkIcon:(id)arg0 withDisplayName:(id)arg1 iconManagerAllowsEditing:(BOOL)arg2 removeStyle:(NSInteger)arg3 ;
+(id)composedShortcutsForDownloadingApplicationWithBundleIdentifier:(id)arg0 iconDisplayName:(id)arg1 applicationItemID:(NSUInteger)arg2 canModifyDownloadState:(BOOL)arg3 prioritizationIsAvailable:(BOOL)arg4 downloadingInformationAgent:(id)arg5 iconManagerAllowsEditing:(BOOL)arg6 removeStyle:(NSInteger)arg7 canShare:(BOOL)arg8 ;
+(id)composedShortcutsForFolderIcon:(id)arg0 iconImageCache:(id)arg1 iconManagerAllowsEditing:(BOOL)arg2 removeStyle:(NSInteger)arg3 badgeViewGenerator:(id)arg4 ;
+(id)composedShortcutsForWidgetIcon:(id)arg0 additionalApplicationShortcutItems:(id)arg1 widgetIconSupportsConfiguration:(BOOL)arg2 iconManagerAllowsEditing:(BOOL)arg3 widgetSettings:(id)arg4 ;
+(id)filteredApplicationShortcutItemsWithStaticApplicationShortcutItems:(id)arg0 dynamicApplicationShortcutItems:(id)arg1 ;
+(id)homeScreenDefaults;


@end


#endif