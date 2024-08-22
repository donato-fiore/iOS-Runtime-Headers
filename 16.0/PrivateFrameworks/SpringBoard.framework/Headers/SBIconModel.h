// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONMODEL_H
#define SBICONMODEL_H

@class SBHIconModel, NSOrderedSet;



@interface SBIconModel : SBHIconModel {
    BOOL _iconsHaveBeenLoadedOnce;
    BOOL _createsIconsForInternalApps;
}


@property (copy, nonatomic) NSOrderedSet *cachedFlattenedForecastedDesiredIconState; // ivar: _cachedFlattenedForecastedDesiredIconState


+(Class)applicationIconClass;
+(Class)bookmarkClass;
+(Class)bookmarkIconClass;
+(id)currentLocaleDidChangeNotificationName;
+(id)migratedIdentifierForLeafIdentifier:(id)arg0 ;
-(BOOL)importState:(id)arg0 ;
-(BOOL)isIconVisible:(id)arg0 ;
-(BOOL)shouldAvoidCreatingIconForApplication:(id)arg0 ;
-(BOOL)shouldAvoidPlacingIconOnFirstPage:(id)arg0 ;
-(id)addApplication:(id)arg0 ;
-(id)addBookmarkIconForWebClip:(id)arg0 ;
-(id)applicationIconForBundleIdentifier:(id)arg0 ;
-(id)applicationWithBundleIdentifier:(id)arg0 ;
-(id)bookmarkIconForWebClipIdentifier:(id)arg0 ;
-(id)exportFlattenedState:(BOOL)arg0 includeMissingIcons:(BOOL)arg1 ;
-(id)exportPendingState:(BOOL)arg0 includeMissingIcons:(BOOL)arg1 ;
-(id)exportState:(BOOL)arg0 ;
-(id)forecastedLayoutForIconState:(id)arg0 includeMissingIcons:(BOOL)arg1 ;
-(id)indexPathForIconInPlatformState:(id)arg0 ;
-(id)modernizeRootArchive:(id)arg0 ;
-(void)_replaceAppIconsWithDownloadingIcons;
-(void)_replaceAppIconsWithDownloadingIcons:(id)arg0 ;
-(void)adjustIconsToShow:(id)arg0 iconsToHide:(id)arg1 afterChangeToVisibleIconTags:(id)arg2 hiddenIconTags:(id)arg3 ;
-(void)clearDesiredIconStateWithOptions:(NSUInteger)arg0 ;
-(void)loadAllIcons;
-(void)willLayout;


@end


#endif