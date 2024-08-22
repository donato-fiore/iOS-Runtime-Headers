// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef READINGLISTFORYOUDATASOURCE_H
#define READINGLISTFORYOUDATASOURCE_H

@class WBSForYouRecommendationMediatorDataSource;
@protocol WBBookmarkProvider, OS_dispatch_queue;


#import "ReadingListLeadImageCache.h"

@interface ReadingListForYouDataSource : WBSForYouRecommendationMediatorDataSource {
    id<WBBookmarkProvider> *_bookmarkProvider;
    NSObject<OS_dispatch_queue> *_bookmarkProviderAccessQueue;
    ReadingListLeadImageCache *_leadImageCache;
}




-(id)initWithBookmarkProvider:(id)arg0 accessQueue:(id)arg1 imageCache:(id)arg2 ;
-(void)_readingListContentsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)retrieveRecommendationsMatchingTopic:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif