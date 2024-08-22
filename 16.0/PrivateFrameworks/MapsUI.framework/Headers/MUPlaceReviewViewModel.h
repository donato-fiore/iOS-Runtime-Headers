// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACEREVIEWVIEWMODEL_H
#define MUPLACEREVIEWVIEWMODEL_H

@class NSString, NSDate;
@protocol MKMapItemProviderRatingSnippet;

#import <Foundation/Foundation.h>

#import "MUPlaceReviewAvatarGenerator.h"

@interface MUPlaceReviewViewModel : NSObject {
    id<MKMapItemProviderRatingSnippet> *_ratingSnippet;
    MUPlaceReviewAvatarGenerator *_avatarGenerator;
}


@property (readonly, nonatomic) NSString *authorText;
@property (readonly, nonatomic) CGFloat normalizedScore;
@property (readonly, nonatomic) NSDate *reviewDate;
@property (readonly, nonatomic) NSString *reviewText;


-(id)initWithRatingSnippet:(id)arg0 avatarGenerator:(id)arg1 ;
-(void)loadUserIconWithPointSize:(struct CGSize )arg0 completion:(id)arg1 ;


@end


#endif