// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BOOKMARKSFORYOUDATASOURCE_H
#define BOOKMARKSFORYOUDATASOURCE_H

@class WBSForYouRecommendationMediatorDataSource;
@protocol WBBookmarkProvider, OS_dispatch_queue;



@interface BookmarksForYouDataSource : WBSForYouRecommendationMediatorDataSource {
    id<WBBookmarkProvider> *_bookmarkProvider;
    NSObject<OS_dispatch_queue> *_bookmarkProviderAccessQueue;
}




-(id)initWithBookmarkProvider:(id)arg0 accessQueue:(id)arg1 bookmarkCollection:(id)arg2 ;
-(void)_bookmarksDidChangeWithNotification:(id)arg0 ;
-(void)dealloc;
-(void)retrieveRecommendationsMatchingTopic:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif