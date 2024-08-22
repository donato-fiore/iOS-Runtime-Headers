// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFEEDTRANSFORMATIONFILTER_H
#define FCFEEDTRANSFORMATIONFILTER_H

@class NSSet, NSDictionary, NSString;
@protocol FCFeedTransforming, FCPaidAccessCheckerType;

#import <Foundation/Foundation.h>

#import "FCBundleSubscription.h"

@interface FCFeedTransformationFilter : NSObject <FCFeedTransforming>

 {
    NSInteger _filterOptions;
    NSSet *_otherArticleIDs;
    NSSet *_otherClusterIDs;
    NSSet *_mutedTagIDs;
    NSSet *_subscribedTagIDs;
    NSDictionary *_readingHistoryItems;
    NSSet *_playlistArticleIDs;
    NSSet *_downloadedArticleIDs;
    NSString *_briefingsTagID;
    id<FCPaidAccessCheckerType> *_paidAccessChecker;
    FCBundleSubscription *_bundleSubscription;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)transformationWithFilterOptions:(NSInteger)arg0 configuration:(id)arg1 context:(id)arg2 ;
+(id)transformationWithFilterOptions:(NSInteger)arg0 configuration:(id)arg1 context:(id)arg2 otherArticleIDs:(id)arg3 ;
+(id)transformationWithFilterOptions:(NSInteger)arg0 otherArticleIDs:(id)arg1 otherClusterIDs:(id)arg2 subscribedTagIDs:(id)arg3 mutedTagIDs:(id)arg4 readingHistoryItems:(id)arg5 playlistArticleIDs:(id)arg6 downloadedArticleIDs:(id)arg7 briefingsTagID:(id)arg8 paidAccessChecker:(id)arg9 bundleSubscription:(id)arg10 ;
-(id)transformFeedItems:(id)arg0 ;
-(id)transformFeedItemsWithResults:(id)arg0 ;
-(id)transformHeadline:(id)arg0 ;
-(id)transformHeadlines:(id)arg0 ;
-(id)transformHeadlinesWithResult:(id)arg0 ;


@end


#endif