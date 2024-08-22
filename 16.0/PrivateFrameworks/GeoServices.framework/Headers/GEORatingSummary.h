// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORATINGSUMMARY_H
#define GEORATINGSUMMARY_H

@class NSMapTable, NSString;

#import <Foundation/Foundation.h>

#import "GEOPDRatingData.h"

@interface GEORatingSummary : NSObject {
    GEOPDRatingData *_ratingData;
    NSMapTable *_attributionMap;
}


@property (readonly, nonatomic, getter=isAppleRating) BOOL appleRating;
@property (readonly, nonatomic) float normalizedUserRatingScore;
@property (readonly, nonatomic) float sampleSizeUsedForScore;
@property (readonly, nonatomic) NSString *vendorName;


-(float)_normalizedFirstPartyUserRatingScore;
-(float)_normalizedThirdPartyUserRatingScore;
-(id)initWithRatingData:(id)arg0 attributionMap:(id)arg1 ;


@end


#endif