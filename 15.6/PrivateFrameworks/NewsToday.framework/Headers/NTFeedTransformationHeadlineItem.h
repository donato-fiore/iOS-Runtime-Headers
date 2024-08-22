// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTFEEDTRANSFORMATIONHEADLINEITEM_H
#define NTFEEDTRANSFORMATIONHEADLINEITEM_H

@class NSURL, NSDate, NSString, NTPBFeedItem, SFSearchResult;
@protocol NTFeedTransformationItem, FCFeedTransformationItem, FCHeadlineProviding;

#import <Foundation/Foundation.h>


@interface NTFeedTransformationHeadlineItem : NSObject <NTFeedTransformationItem>



@property (readonly, copy, nonatomic) NSURL *actionURL; // ivar: _actionURL
@property (readonly, copy, nonatomic) NSDate *cacheCutoffTimeRelativeDate;
@property (readonly, copy, nonatomic) NSDate *cacheExpirationDate; // ivar: _cacheExpirationDate
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NTPBFeedItem *feedItemForHeadlineFetch;
@property (readonly, nonatomic) NSObject<FCFeedTransformationItem> *feedTransformationItem;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSObject<FCHeadlineProviding> *headline; // ivar: _headline
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
-(id)initWithHeadline:(id)arg0 cacheExpirationDate:(id)arg1 searchResult:(id)arg2 actionURL:(id)arg3 ;
-(id)protoitemWithFetchedFeedItemHeadline:(id)arg0 ;


@end


#endif