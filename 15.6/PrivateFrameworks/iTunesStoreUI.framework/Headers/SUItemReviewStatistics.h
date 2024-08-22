// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUITEMREVIEWSTATISTICS_H
#define SUITEMREVIEWSTATISTICS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUItemReviewStatistics : NSObject <NSCopying>



@property (nonatomic) float averageUserRating; // ivar: _averageUserRating
@property (nonatomic) NSInteger numberOfUserRatings; // ivar: _numberOfUserRatings
@property (copy, nonatomic) NSString *numberOfUserRatingsString; // ivar: _numberOfUserRatingsString
@property (nonatomic) NSInteger numberOfUserReviews; // ivar: _numberOfUserReviews
@property (copy, nonatomic) NSString *numberOfUserReviewsString; // ivar: _numberOfUserReviewsString


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif