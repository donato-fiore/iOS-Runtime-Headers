// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBLEAFICON_H
#define SBLEAFICON_H

@class NSString, NSMutableOrderedSet, NSArray;
@protocol NSCopying, SBLeafIconDataSource;


#import "SBIcon.h"

@interface SBLeafIcon : SBIcon <NSCopying>

 {
    NSString *_leafIdentifier;
    NSString *_applicationBundleID;
    NSMutableOrderedSet *_dataSources;
    id<SBLeafIconDataSource> *_activeDataSource;
    id<SBLeafIconDataSource> *_manuallySetDataSource;
    id<SBLeafIconDataSource> *_dataSourceAtUninstallation;
    NSUInteger _coalescedDataSourceUpdates;
}


@property (retain, nonatomic) NSObject<SBLeafIconDataSource> *activeDataSource;
@property (readonly, copy, nonatomic) NSString *applicationBundleID;
@property (readonly, nonatomic, getter=_bestDataSource) NSObject<SBLeafIconDataSource> *bestDataSource;
@property (readonly, nonatomic, getter=_fallbackBestDataSource) NSObject<SBLeafIconDataSource> *fallbackBestDataSource;
@property (readonly, nonatomic) NSObject<SBLeafIconDataSource> *firstIconDataSource;
@property (readonly, nonatomic) NSUInteger iconDataSourceCount;
@property (readonly, copy, nonatomic) NSArray *iconDataSources;
@property (readonly, nonatomic) NSObject<SBLeafIconDataSource> *lastIconDataSource;
@property (readonly, nonatomic) BOOL leafIdentifierAndApplicationBundleIDMatches;
@property (readonly, copy, nonatomic) NSString *sbh_iconLibraryItemIdentifier;


+(id)formattedBadgeNumberOrString:(id)arg0 ;
+(id)iconImageForDataSource:(id)arg0 ofIcon:(id)arg1 info:(struct SBIconImageInfo )arg2 ;
-(BOOL)canGenerateIconsInBackground;
-(BOOL)canTightenLabel;
-(BOOL)canTruncateLabel;
-(BOOL)hasIconDataSource:(id)arg0 ;
-(BOOL)hasObserver:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLaunchDisabledForObscuredReason;
-(BOOL)isLaunchEnabled;
-(BOOL)isLeafIcon;
-(BOOL)isProgressPaused;
-(BOOL)isTimedOut;
-(BOOL)isUninstallSupported;
-(BOOL)supportsRasterization;
-(CGFloat)progressPercent;
-(NSInteger)accessoryTypeForLocation:(id)arg0 ;
-(NSInteger)labelAccessoryType;
-(NSInteger)progressState;
-(NSUInteger)hash;
-(NSUInteger)supportedGridSizeClasses;
-(id)accessoryTextForLocation:(id)arg0 ;
-(id)badgeNumberOrString;
-(id)copyWithLeafIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)displayNameForLocation:(id)arg0 ;
-(id)displayNameForObscuredDisabledLaunchForLocation:(id)arg0 ;
-(id)firstIconDataSourceOfClass:(Class)arg0 ;
-(id)firstIconDataSourcePassingTest:(id)arg0 ;
-(id)firstIconDataSourceWithUniqueIdentifier:(id)arg0 ;
-(id)folderFallbackTitle;
-(id)folderTitleOptions;
-(id)generateIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(id)genericIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(id)iTunesCategoriesOrderedByRelevancy;
-(id)iconDataSourcesOfClass:(Class)arg0 ;
-(id)init;
-(id)initWithLeafIdentifier:(id)arg0 applicationBundleID:(id)arg1 ;
-(id)initWithUniqueLeafIdentifier;
-(id)leafIdentifier;
-(id)nodeIdentifier;
-(id)statusDescriptionForLocation:(id)arg0 ;
-(id)tags;
-(id)unmaskedIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(void)_noteActiveDataSourceDidChangeAndReloadIcon:(BOOL)arg0 ;
-(void)_noteActiveDataSourceDidChangeNotification:(id)arg0 ;
-(void)_noteActiveDataSourceDidGenerateImageNotification:(id)arg0 ;
-(void)_noteDataSourceDidInvalidateNotification:(id)arg0 ;
-(void)_updateActiveDataSource;
-(void)addIconDataSource:(id)arg0 ;
-(void)addIconDataSources:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)completeUninstall;
-(void)dealloc;
-(void)didAddIconDataSource:(id)arg0 ;
-(void)didChangeActiveDataSource:(id)arg0 ;
-(void)didRemoveIconDataSource:(id)arg0 ;
-(void)enumerateObserversUsingBlock:(id)arg0 ;
-(void)insertIconDataSource:(id)arg0 beforeIconDataSource:(id)arg1 ;
-(void)insertIconDataSources:(id)arg0 atIndexes:(id)arg1 ;
-(void)launchFromLocation:(id)arg0 context:(id)arg1 ;
-(void)performCoalescedDataSourceUpdate:(id)arg0 ;
-(void)removeAllIconDataSources;
-(void)removeIconDataSource:(id)arg0 ;
-(void)removeIconDataSourcesOfClass:(Class)arg0 ;
-(void)removeIconDataSourcesPassingTest:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)replaceIconDataSource:(id)arg0 withIconDataSource:(id)arg1 ;
-(void)selectNextActiveDataSource;
-(void)setUninstalled;


@end


#endif