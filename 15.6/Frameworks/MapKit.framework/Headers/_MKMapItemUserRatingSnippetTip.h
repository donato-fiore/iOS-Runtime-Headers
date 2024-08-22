// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKMAPITEMUSERRATINGSNIPPETTIP_H
#define _MKMAPITEMUSERRATINGSNIPPETTIP_H

@class GEOMapItemTip, NSDate, NSString, NSURL;
@protocol MKMapItemProviderRatingSnippet, GEOMapItemReview;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface _MKMapItemUserRatingSnippetTip : NSObject <MKMapItemProviderRatingSnippet>

 {
    MKMapItem *_mapItem;
    GEOMapItemTip *_tip;
}


@property (readonly, nonatomic, getter=_date) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_geoMapItemTIp) GEOMapItemTip *geoMapItemTip;
@property (readonly, nonatomic, getter=_geoReview) NSObject<GEOMapItemReview> *geoReview;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_localizedSnippet) NSString *localizedSnippet;
@property (readonly, nonatomic, getter=_localizedSnippetLocale) NSString *localizedSnippetLocale;
@property (readonly, nonatomic, getter=_maxScore) CGFloat maxScore;
@property (readonly, nonatomic, getter=_normalizedScore) CGFloat normalizedScore;
@property (readonly, nonatomic, getter=_reviewerImageURL) NSURL *reviewerImageURL;
@property (readonly, nonatomic, getter=_reviewerName) NSString *reviewerName;
@property (readonly, nonatomic, getter=_score) CGFloat score;
@property (readonly) Class superclass;


-(id)initWithMapItem:(id)arg0 review:(id)arg1 ;
-(void)showWithCompletionHandler:(id)arg0 ;


@end


#endif