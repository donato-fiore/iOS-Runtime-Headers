// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDSECTIONINFOSMANAGER_H
#define PXFEEDSECTIONINFOSMANAGER_H

@class PLPhotoLibrary, NSMutableArray, NSMutableDictionary, NSDate;
@protocol PLCloudFeedEntriesObserver, PLCloudCommentsChangeObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver, PXConfigurableFeedSectionInfosManager, PXFeedSectionInfosManagerDelegate;

#import <Foundation/Foundation.h>


@interface PXFeedSectionInfosManager : NSObject <PLCloudFeedEntriesObserver, PLCloudCommentsChangeObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver, PXConfigurableFeedSectionInfosManager>

 {
    PLPhotoLibrary *_photoLibrary;
    NSMutableArray *_sectionInfos;
    NSMutableDictionary *_sectionInfosByCloudFeedEntry;
    NSMutableArray *_pendingFeedEntriesChangeNotifications;
    NSMutableArray *_pendingCommentsChangeNotifications;
    NSMutableArray *_pendingAssetsChangeNotifications;
}


@property (weak, nonatomic) NSObject<PXFeedSectionInfosManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDate *earliestDate; // ivar: _earliestDate
@property (nonatomic) NSInteger entryFilter; // ivar: _entryFilter
@property (nonatomic) NSUInteger fetchLimit; // ivar: _fetchLimit


+(id)mostRecentCreationDate;
-(BOOL)_shouldPerformFullReloadForFeedEntriesChangeNotifications:(id)arg0 commentsChangeNotifications:(id)arg1 ;
-(BOOL)hasEnoughCloudFeedAssetEntriesToDisplay;
-(BOOL)reconfigureToIncludeCloudFeedEntry:(id)arg0 ;
-(NSInteger)indexOfSectionInfo:(id)arg0 ;
-(NSInteger)indexOfSectionInfoForCloudFeedEntry:(id)arg0 ;
-(NSInteger)numberOfInvitationsReceived;
-(NSInteger)numberOfSectionInfos;
-(id)_sectionInfoSortingComparator:(SEL)arg0 ;
-(id)indexesOfInvitationsReceivedSectionInfos;
-(id)indexesOfUnloadedSectionInfosAtIndexes:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 configurationBlock:(id)arg1 ;
-(id)initWithPhotoLibraryForTesting:(id)arg0 filter:(NSInteger)arg1 ;
-(id)sectionInfoAtIndex:(NSInteger)arg0 ;
-(id)sectionInfoWithIdentifier:(id)arg0 ;
-(id)sectionInfosAtIndexes:(id)arg0 ;
-(void)_didFinishPostingNotifications:(id)arg0 ;
-(void)_getEarliestDate:(*id)arg0 mostRecentEntries:(*id)arg1 forBatchWithLatestDate:(id)arg2 ;
-(void)_rebuildSectionInfos;
-(void)_updateSectionInfosForFeedEntriesChangeNotifications:(id)arg0 commentsChangeNotifications:(id)arg1 assetsChangeNotifications:(id)arg2 ;
-(void)assetsDidChange:(id)arg0 ;
-(void)cloudCommentsDidChange:(id)arg0 ;
-(void)cloudFeedEntriesDidChange:(id)arg0 ;
-(void)dealloc;
-(void)loadSectionInfosAtIndexes:(id)arg0 ;
-(void)reconfigure:(id)arg0 ;
-(void)shouldReload:(id)arg0 ;


@end


#endif