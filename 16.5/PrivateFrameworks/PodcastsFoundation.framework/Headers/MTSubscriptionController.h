// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSUBSCRIPTIONCONTROLLER_H
#define MTSUBSCRIPTIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface MTSubscriptionController : NSObject {
    ? requestController;
}




+(NSInteger)alreadySubscribedErrorCode;
+(id)sharedInstance;
+(id)subscriptionControllerErrorDomain;
-(id)init;
-(void)podcastExistsInStoreWithFeedUrl:(id)arg0 completion:(id)arg1 ;
-(void)subscribeToShowWithPodcastStoreId:(id)arg0 account:(id)arg1 completion:(id)arg2 ;


@end


#endif