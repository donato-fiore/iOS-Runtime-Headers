// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACERATINGREVIEWTITLEBUILDER_H
#define MUPLACERATINGREVIEWTITLEBUILDER_H


#import <Foundation/Foundation.h>


@interface MUPlaceRatingReviewTitleBuilder : NSObject

@property (nonatomic) BOOL supportsGuides; // ivar: _supportsGuides
@property (nonatomic) BOOL supportsRatings; // ivar: _supportsRatings
@property (nonatomic) BOOL supportsReviews; // ivar: _supportsReviews
@property (readonly, nonatomic) NSUInteger titleType;


-(id)buildTitleString;


@end


#endif