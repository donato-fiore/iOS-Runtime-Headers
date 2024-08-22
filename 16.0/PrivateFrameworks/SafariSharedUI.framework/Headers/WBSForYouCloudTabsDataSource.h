// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSFORYOUCLOUDTABSDATASOURCE_H
#define WBSFORYOUCLOUDTABSDATASOURCE_H

@class WBSCloudTabStore;
@protocol OS_dispatch_queue;


#import "WBSForYouRecommendationMediatorDataSource.h"

@interface WBSForYouCloudTabsDataSource : WBSForYouRecommendationMediatorDataSource {
    WBSCloudTabStore *_tabsStore;
    NSObject<OS_dispatch_queue> *_internalQueue;
}




-(id)initWithTabStore:(id)arg0 ;
-(void)_createInternalQueueIfNecessary;
-(void)retrieveRecommendationsMatchingTopic:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif