// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCFORYOUQUERYUTILITIES_H
#define FCFORYOUQUERYUTILITIES_H


#import <Foundation/Foundation.h>


@interface FCForYouQueryUtilities : NSObject



+(id)_filterTagsForQuerying:(id)arg0 withMutedTagIDs:(id)arg1 ;
// +(id)feedRequestsForTags:(id)arg0 tagBinProvider:(id)arg1 hiddenFeedIDs:(unk)arg2 paidBundleFeedID:(id)arg3 purchasedTagIDs:(id)arg4 bundleSubscriptionProvider:(id)arg5 configuration:(id)arg6 maxCount:(id)arg7 tagIDFeedRangeProvider:(NSUInteger)arg8 isRunningPPT:(id)arg9  ;
+(void)fetchTagsForQueryingWithSubscribedTagIDs:(id)arg0 mutedTagIDs:(id)arg1 purchasedTagIDs:(id)arg2 bundleSubscriptionProvider:(id)arg3 configuration:(id)arg4 contentContext:(id)arg5 fallbackToPresubscribedTagIDs:(BOOL)arg6 qualityOfService:(NSInteger)arg7 completionHandler:(id)arg8 ;
+(void)fetchTagsForQueryingWithSubscribedTags:(id)arg0 mutedTagIDs:(id)arg1 purchasedTagIDs:(id)arg2 bundleSubscriptionProvider:(id)arg3 configuration:(id)arg4 contentContext:(id)arg5 fallbackToPresubscribedTagIDs:(BOOL)arg6 qualityOfService:(NSInteger)arg7 completionHandler:(id)arg8 ;


@end


#endif