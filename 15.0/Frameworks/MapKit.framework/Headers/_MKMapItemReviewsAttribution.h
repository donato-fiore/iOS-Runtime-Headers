// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKMAPITEMREVIEWSATTRIBUTION_H
#define _MKMAPITEMREVIEWSATTRIBUTION_H

@class MKMapItemAttribution, GEOMapItemReviewsAttribution, NSArray;



@interface _MKMapItemReviewsAttribution : MKMapItemAttribution {
    GEOMapItemReviewsAttribution *_geoReviewsAttribution;
}


@property (readonly, nonatomic) NSArray *addReviewURLs;


-(id)initWithGEOMapItemAttribution:(id)arg0 ;
-(id)urlsForReview:(id)arg0 ;
-(id)urlsForSelectedItemWithItems:(id)arg0 ;


@end


#endif