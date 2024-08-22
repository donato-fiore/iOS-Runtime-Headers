// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICON_H
#define SBICON_H

@class NSHashTable, NSString, NSUserActivity, NSArray;
@protocol SBHIconCollationSupport, SBHUniquelyIdentifiable, SBIconIndexNode, BSDescriptionProviding, NSCopying, SBIconDelegate;

#import <Foundation/Foundation.h>


@interface SBIcon : NSObject <SBHIconCollationSupport, SBHUniquelyIdentifiable, SBIconIndexNode, BSDescriptionProviding, NSCopying>

 {
    id *_badgeNumberOrString;
    NSHashTable *_observers;
}


@property (readonly, copy, nonatomic) NSString *automationID;
@property (readonly, nonatomic) id *badgeNumberOrString;
@property (readonly, nonatomic) NSInteger badgeValue;
@property (readonly, nonatomic) BOOL canBeAddedToMultiItemDrag;
@property (readonly, nonatomic) BOOL canBeAddedToSubfolder;
@property (readonly, nonatomic) BOOL canBeReceivedByIcon;
@property (readonly, nonatomic) BOOL canGenerateIconsInBackground;
@property (readonly, nonatomic) BOOL canReceiveGrabbedIcon;
@property (readonly, nonatomic) BOOL canTightenLabel;
@property (readonly, nonatomic) BOOL canTruncateLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBIconDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSUserActivity *draggingUserActivity;
@property (readonly, copy, nonatomic) NSString *folderFallbackTitle;
@property (readonly, copy, nonatomic) NSArray *folderTitleOptions;
@property (nonatomic) NSUInteger gridSizeClass; // ivar: _gridSizeClass
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *iTunesCategoriesOrderedByRelevancy;
@property (copy, nonatomic) NSString *iconImageCacheIdentifier; // ivar: _iconImageCacheIdentifier
@property (readonly, nonatomic) NSInteger labelAccessoryType;
@property (readonly, nonatomic, getter=isLaunchDisabledForObscuredReason) BOOL launchDisabledForObscuredReason;
@property (readonly, nonatomic, getter=isLaunchEnabled) BOOL launchEnabled;
@property (copy, nonatomic) id *overrideBadgeNumberOrString; // ivar: _overrideBadgeNumberOrString
@property (readonly, nonatomic, getter=isProgressPaused) BOOL progressPaused;
@property (readonly, nonatomic) CGFloat progressPercent;
@property (readonly, nonatomic) NSInteger progressState;
@property (readonly, nonatomic) BOOL shouldAnimateProgress;
@property (readonly, nonatomic) BOOL shouldWarmUp;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedGridSizeClasses;
@property (readonly, nonatomic) BOOL supportsRasterization;
@property (readonly, nonatomic) BOOL supportsStackConfiguration;
@property (readonly, copy, nonatomic) NSArray *tags;
@property (readonly, nonatomic, getter=isTimedOut) BOOL timedOut;
@property (readonly, copy, nonatomic) NSString *uninstallAlertBody;
@property (readonly, copy, nonatomic) NSString *uninstallAlertCancelTitle;
@property (readonly, copy, nonatomic) NSString *uninstallAlertConfirmTitle;
@property (readonly, copy, nonatomic) NSString *uninstallAlertTitle;
@property (readonly, nonatomic, getter=isUninstallSupported) BOOL uninstallSupported;
@property (readonly, nonatomic, getter=isUninstalled) BOOL uninstalled; // ivar: _uninstalled
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;


+(BOOL)forcesBackgroundIconGeneration;
+(BOOL)hasIconImage;
+(id)genericIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
+(id)iconImageFromUnmaskedImage:(id)arg0 info:(struct SBIconImageInfo )arg1 ;
-(BOOL)containsNodeIdentifier:(id)arg0 ;
-(BOOL)hasApplication;
-(BOOL)hasApplicationPlaceholder;
-(BOOL)hasObserver:(id)arg0 ;
-(BOOL)isAdditionalItemsIndicatorIcon;
-(BOOL)isAppClipIcon;
-(BOOL)isApplicationIcon;
-(BOOL)isBookmarkIcon;
-(BOOL)isCategoryIcon;
-(BOOL)isClusteredIconPlaceholder;
-(BOOL)isDebugIcon;
-(BOOL)isFolderIcon;
-(BOOL)isGrabbedIconPlaceholder;
-(BOOL)isGridSizeClassAllowed:(NSUInteger)arg0 ;
-(BOOL)isLeafIcon;
-(BOOL)isLibraryPodIcon;
-(BOOL)isPlaceholder;
-(BOOL)isWidgetIcon;
-(BOOL)isWidgetStackIcon;
-(Class)iconImageViewClassForLocation:(id)arg0 ;
-(NSInteger)accessoryTypeForLocation:(id)arg0 ;
-(NSInteger)localizedCompareDisplayNames:(id)arg0 ;
-(id)_sbhIconLibraryCollationString;
-(id)_sbhIconLibraryOverrideCollationSectionTitle;
-(id)accessoryTextForLocation:(id)arg0 ;
-(id)application;
-(id)applicationBundleID;
-(id)applicationPlaceholder;
-(id)containedNodeIdentifiers;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)displayNameForLocation:(id)arg0 ;
-(id)displayNameForObscuredDisabledLaunchForLocation:(id)arg0 ;
-(id)folder;
-(id)generateIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(id)genericIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(id)iconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(id)iconLibraryQueryingAlphaSortString;
-(id)iconLibraryQueryingFilterStrings;
-(id)indexPathsForContainedNodeIdentifier:(id)arg0 prefixPath:(id)arg1 ;
-(id)leafIdentifier;
-(id)nodeDescriptionWithPrefix:(id)arg0 ;
-(id)nodeIdentifier;
-(id)nodesAlongIndexPath:(id)arg0 consumedIndexes:(NSUInteger)arg1 ;
-(id)parentFolderIcon;
-(id)representedSceneIdentifier;
-(id)statusDescriptionForLocation:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)unmaskedIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(void)_notifyAccessoriesDidUpdate;
-(void)_notifyImageDidUpdate;
-(void)_notifyLaunchEnabledDidChange;
-(void)addNodeObserver:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)archivableStateDidChange;
-(void)completeUninstall;
-(void)enumerateObserversUsingBlock:(id)arg0 ;
-(void)launchFromLocation:(id)arg0 context:(id)arg1 ;
-(void)localeChanged;
-(void)noteBadgeDidChange;
-(void)possibleUserTapBeganWithAbsoluteTime:(NSUInteger)arg0 andContinuousTime:(NSUInteger)arg1 ;
-(void)possibleUserTapDidCancel;
-(void)reloadIconImage;
-(void)removeNodeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setBadge:(id)arg0 ;


@end


#endif