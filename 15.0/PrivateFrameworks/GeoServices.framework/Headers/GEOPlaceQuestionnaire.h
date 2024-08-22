// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPLACEQUESTIONNAIRE_H
#define GEOPLACEQUESTIONNAIRE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "GEOPDScorecardLayout.h"

@interface GEOPlaceQuestionnaire : NSObject {
    GEOPDScorecardLayout *_scorecardLayout;
}


@property (readonly, nonatomic) BOOL alwaysPositionInitialRatingCtaTowardsTop; // ivar: _alwaysPositionInitialRatingCtaTowardsTop
@property (readonly, nonatomic) BOOL canCollectPhotos; // ivar: _canCollectPhotos
@property (readonly, nonatomic) BOOL canCollectRatings; // ivar: _canCollectRatings
@property (readonly, nonatomic) BOOL canShowCallToAction;
@property (readonly, nonatomic) NSArray *ratingCategories; // ivar: _ratingCategories
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


-(id)initWithGEOPDPlaceQuestionnaire:(id)arg0 ;


@end


#endif