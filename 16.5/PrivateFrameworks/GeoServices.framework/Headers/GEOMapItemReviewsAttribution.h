// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPITEMREVIEWSATTRIBUTION_H
#define GEOMAPITEMREVIEWSATTRIBUTION_H

@class NSArray;


#import "GEOMapItemAttribution.h"

@interface GEOMapItemReviewsAttribution : GEOMapItemAttribution

@property (readonly, nonatomic) NSArray *addReviewURLs;


-(id)initWithSearchAttributionInfo:(id)arg0 attributionURLs:(id)arg1 poiID:(id)arg2 ;
-(id)initWithSearchAttributionInfo:(id)arg0 attributionURLs:(id)arg1 yelpID:(id)arg2 ;
-(id)urlsForReview:(id)arg0 ;
-(id)urlsForSelectedItemWithItems:(id)arg0 ;


@end


#endif