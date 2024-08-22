// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASTMOVIERATINGREVIEWITEM_H
#define SASTMOVIERATINGREVIEWITEM_H

@class NSString;
@protocol SASTTemplateItem;


#import "AceObject.h"
#import "SAUIDecoratedText.h"
#import "SASTTemplatePercentageRating.h"

@interface SASTMovieRatingReviewItem : AceObject <SASTTemplateItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUIDecoratedText *reviews;
@property (readonly) Class superclass;
@property (retain, nonatomic) SASTTemplatePercentageRating *templatePercentageRating;


+(id)movieRatingReviewItem;
+(id)movieRatingReviewItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif