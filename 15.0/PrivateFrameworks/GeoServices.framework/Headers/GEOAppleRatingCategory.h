// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOAPPLERATINGCATEGORY_H
#define GEOAPPLERATINGCATEGORY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOPDRatingCategory.h"

@interface GEOAppleRatingCategory : NSObject {
    GEOPDRatingCategory *_ratingCategory;
}


@property (readonly, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *localizedTitle;


-(id)initWithRatingCategory:(id)arg0 ;


@end


#endif