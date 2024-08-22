// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FORYOURECOMMENDATIONMEDIATOR_H
#define FORYOURECOMMENDATIONMEDIATOR_H

@class WBSForYouRecommendationMediator, WebBookmarkCollection, CNAvatarImageRenderer, CNMonogrammer;
@protocol WBBookmarkProvider, OS_dispatch_queue;


#import "BookmarksForYouDataSource.h"
#import "CloudTabsForYouDataSource.h"
#import "ReadingListForYouDataSource.h"
#import "FeatureManager.h"

@interface ForYouRecommendationMediator : WBSForYouRecommendationMediator {
    BookmarksForYouDataSource *_bookmarksDataSource;
    CloudTabsForYouDataSource *_cloudTabsDataSource;
    ReadingListForYouDataSource *_readingListDataSource;
    WebBookmarkCollection *_bookmarkCollection;
    id<WBBookmarkProvider> *_bookmarkProvider;
    NSObject<OS_dispatch_queue> *_bookmarkProviderAccessQueue;
    FeatureManager *_featureManager;
    CNAvatarImageRenderer *_avatarImageRenderer;
    CNMonogrammer *_monogrammer;
    os_unfair_lock_s _rendererLock;
}




-(id)_cloudTabsDataSourceIfAvailable;
-(id)_loadDemoSuggestions;
-(id)dataSources;
-(id)initWithContextClient:(id)arg0 featureManager:(id)arg1 historyProvider:(id)arg2 ;
-(void)_cloudTabFeatureAvailabilityDidChange:(id)arg0 ;
-(void)dealloc;
-(void)fetchImageForRecommendation:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadLinkPresentationMetadataForMessageWithGUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)updatedRecommendationsForTopics:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif