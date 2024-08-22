// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTENTITEMREGISTRY_H
#define WFCONTENTITEMREGISTRY_H

@class NSMutableSet, NSSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WFContentItemRegistry : NSObject

@property (readonly, nonatomic) NSMutableSet *allItemClasses; // ivar: _allItemClasses
@property (readonly, nonatomic) NSSet *allOwnedTypes;
@property (readonly, nonatomic) NSSet *contentItemClasses;
@property (readonly, nonatomic) NSMutableDictionary *contentItemClassesByType; // ivar: _contentItemClassesByType
@property (readonly, nonatomic) os_unfair_lock_s discoveryLock; // ivar: _discoveryLock


+(id)allContentItemClassesInContentKit;
+(id)inputContentItemClassesMatchingShortcutInputClasses:(id)arg0 ;
+(id)sharedRegistry;
+(id)shortcutInputClassesMatchingInputContentItemsOfClasses:(id)arg0 hostBundleIdentifier:(id)arg1 ;
-(Class)contentItemClassForType:(id)arg0 ;
-(id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)arg0 ;
-(id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)arg0 hostBundleIdentifier:(id)arg1 ;
-(id)contentItemClassesSupportingType:(id)arg0 ;
-(id)init;
-(void)rediscoverContentItemClassesIfNeeded;
-(void)registerContentItemClass:(Class)arg0 ;


@end


#endif