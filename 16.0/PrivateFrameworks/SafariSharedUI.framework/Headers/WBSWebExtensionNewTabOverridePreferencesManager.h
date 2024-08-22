// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSWEBEXTENSIONNEWTABOVERRIDEPREFERENCESMANAGER_H
#define WBSWEBEXTENSIONNEWTABOVERRIDEPREFERENCESMANAGER_H


#import <Foundation/Foundation.h>


@interface WBSWebExtensionNewTabOverridePreferencesManager : NSObject



+(BOOL)isNewTabPageOverriddenByAnEnabledExtensionInUserDefaults:(id)arg0 ;
+(id)cloudExtensionStateForDefaults:(id)arg0 ;
+(id)extensionComposedIdentifierForNewTabPreferenceInDefaults:(id)arg0 ;
+(id)sortedComposedIdentifiersForExtensionsWithOverridePages;
+(void)clearNewTabBehaviorInDefaults:(id)arg0 ;
+(void)clearNewTabBehaviorInDefaults:(id)arg0 fromUserGesture:(BOOL)arg1 ;
+(void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)arg0 inDefaults:(id)arg1 ;
+(void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)arg0 inDefaults:(id)arg1 fromUserGesture:(BOOL)arg2 ;


@end


#endif