// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTFEEDTRANSFORMATIONFEEDITEM_H
#define NTFEEDTRANSFORMATIONFEEDITEM_H

@class NSDate, NSString, NTPBFeedItem, SFSearchResult;
@protocol NTFeedTransformationItem, FCFeedTransformationItem;

#import <Foundation/Foundation.h>


@interface NTFeedTransformationFeedItem : NSObject <NTFeedTransformationItem>



@property (readonly, copy, nonatomic) NSDate *cacheCutoffTimeRelativeDate;
@property (readonly, copy, nonatomic) NSDate *cacheExpirationDate; // ivar: _cacheExpirationDate
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NTPBFeedItem *feedItem; // ivar: _feedItem
@property (readonly, copy, nonatomic) NTPBFeedItem *feedItemForHeadlineFetch;
@property (readonly, nonatomic) NSObject<FCFeedTransformationItem> *feedTransformationItem;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL needsFeedItemHeadlinesFetch;
@property (readonly, nonatomic) NSUInteger preferredDynamicSlotAllocation;
@property (readonly, copy, nonatomic) SFSearchResult *searchResult; // ivar: _searchResult
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger todayItemType;
@property (readonly, nonatomic) BOOL usesDynamicSlotAllocation;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithFeedItem:(id)arg0 cacheExpirationDate:(id)arg1 ;
-(id)protoitemWithFetchedFeedItemHeadline:(id)arg0 ;


@end


#endif