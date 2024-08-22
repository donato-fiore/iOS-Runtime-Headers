// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11PODCASTSKIT30MEDIAAPISUBSCRIPTIONCONTROLLER_H
#define _TTC11PODCASTSKIT30MEDIAAPISUBSCRIPTIONCONTROLLER_H

@class SwiftObject;
@protocol PKSubscriptionController;



@interface _TtC11PodcastsKit30MediaAPISubscriptionController : SwiftObject <PKSubscriptionController>





-(void)subscribeToFeedUrl:(id)arg0 completion:(id)arg1 ;
-(void)subscribeToStoreId:(id)arg0 completion:(id)arg1 ;
-(void)subscribeToStoreId:(id)arg0 siriContext:(id)arg1 completion:(id)arg2 ;


@end


#endif