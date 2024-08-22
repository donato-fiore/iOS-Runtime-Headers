// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOPLACEDATAREVIEW_H
#define _GEOPLACEDATAREVIEW_H

@class NSDate, NSString;
@protocol GEOMapItemReview;

#import <Foundation/Foundation.h>

#import "GEOPDPlace.h"
#import "GEOPDReview.h"

@interface _GEOPlaceDataReview : NSObject <GEOMapItemReview>

 {
    GEOPDPlace *_placeData;
    GEOPDReview *_review;
}


@property (readonly, nonatomic, getter=_date) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_identifier) NSString *identifier;
@property (readonly, nonatomic, getter=_localizedSnippet) NSString *localizedSnippet;
@property (readonly, nonatomic, getter=_localizedSnippetLocale) NSString *localizedSnippetLocale;
@property (readonly, nonatomic, getter=_maxScore) CGFloat maxScore;
@property (readonly, nonatomic, getter=_normalizedScore) CGFloat normalizedScore;
@property (readonly, nonatomic, getter=_reviewerImageURLString) NSString *reviewerImageURLString;
@property (readonly, nonatomic, getter=_reviewerName) NSString *reviewerName;
@property (readonly, nonatomic, getter=_score) CGFloat score;
@property (readonly) Class superclass;


-(id)initWithPlaceData:(id)arg0 review:(id)arg1 ;


@end


#endif