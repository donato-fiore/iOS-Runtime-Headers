// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTFEEDTRANSFORMATIONWEBEMBEDITEM_H
#define NTFEEDTRANSFORMATIONWEBEMBEDITEM_H

@class NSDate, NSString, NTPBFeedItem, SFSearchResult, NTPBTodaySectionConfigWebEmbed;
@protocol NTFeedTransformationItem, FCFeedTransformationItem;

#import <Foundation/Foundation.h>


@interface NTFeedTransformationWebEmbedItem : NSObject <NTFeedTransformationItem>



@property (readonly, copy, nonatomic) NSDate *cacheCutoffTimeRelativeDate;
@property (readonly, copy, nonatomic) NSDate *cacheExpirationDate;
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NTPBFeedItem *feedItemForHeadlineFetch;
@property (readonly, nonatomic) NSObject<FCFeedTransformationItem> *feedTransformationItem;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL needsFeedItemHeadlinesFetch;
@property (readonly, nonatomic) NSUInteger preferredDynamicSlotAllocation;
@property (readonly, copy, nonatomic) SFSearchResult *searchResult;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger todayItemType;
@property (readonly, nonatomic) BOOL usesDynamicSlotAllocation;
@property (readonly, copy, nonatomic) NTPBTodaySectionConfigWebEmbed *webEmbed; // ivar: _webEmbed


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithWebEmbed:(id)arg0 ;
-(id)protoitemWithFetchedFeedItemHeadline:(id)arg0 ;


@end


#endif