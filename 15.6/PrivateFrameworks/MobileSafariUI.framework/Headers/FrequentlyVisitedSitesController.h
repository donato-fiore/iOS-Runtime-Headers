// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FREQUENTLYVISITEDSITESCONTROLLER_H
#define FREQUENTLYVISITEDSITESCONTROLLER_H

@class WBSFrequentlyVisitedSitesController, WebBookmarkCollection, NSMutableArray;



@interface FrequentlyVisitedSitesController : WBSFrequentlyVisitedSitesController {
    WebBookmarkCollection *_bookmarkCollection;
    BOOL _bookmarksNeedToSave;
    NSMutableArray *_cachedFrequentlyVisitedBookmarks;
    BOOL _ignoreBookmarksFolderChangeNotifications;
}




+(id)sharedController;
-(BOOL)_saveFrequentlyVisitedSites:(id)arg0 ;
-(BOOL)_updateCachedFrequentlyVisitedSitesWithCandidates:(id)arg0 ;
-(id)_canonicalizedFavoritesURLStringSet;
-(id)_existingIconsDataFromBookmarksDB;
-(id)frequentlyVisitedSites;
-(id)initWithBookmarkCollection:(id)arg0 ;
-(void)_clearFrequentlyVisitedSitesInBookmarksDB;
-(void)_receivedBookmarksFolderContentChangedNotification:(id)arg0 ;
-(void)banFrequentlyVisitedSite:(id)arg0 inMemoryBookmarkChangeTrackingAvailable:(BOOL)arg1 ;
-(void)clearFrequentlyVisitedSites;
-(void)dealloc;
-(void)promoteFrequentlyVisitedSite:(id)arg0 toFavoriteAtIndex:(NSUInteger)arg1 ;
-(void)saveFrequentlyVisitedSitesToBookmarksDBWithCompletion:(id)arg0 ;


@end


#endif