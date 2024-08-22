// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC11PODCASTSKIT33MEDIAREMOTESUBSCRIPTIONCONTROLLER_H
#define _TTC11PODCASTSKIT33MEDIAREMOTESUBSCRIPTIONCONTROLLER_H

@protocol PKSubscriptionController;

#import <Foundation/Foundation.h>


@interface _TtC11PodcastsKit33MediaRemoteSubscriptionController : NSObject <PKSubscriptionController>





-(id)init;
-(void)subscribeToFeedUrl:(id)arg0 completion:(id)arg1 ;
-(void)subscribeToStoreId:(id)arg0 completion:(id)arg1 ;
-(void)subscribeToStoreId:(id)arg0 siriContext:(id)arg1 completion:(id)arg2 ;


@end


#endif