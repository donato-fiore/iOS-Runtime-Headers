// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKSTARRATINGANDLABELVIEW_H
#define MKSTARRATINGANDLABELVIEW_H

@class UIView;



@interface MKStarRatingAndLabelView : UIView



+(id)ratingAndReviewsAsAttributedString:(CGFloat)arg0 style:(NSInteger)arg1 font:(id)arg2 numberOfReviews:(NSUInteger)arg3 textColor:(id)arg4 theme:(id)arg5 ;
+(id)reviewsString:(NSUInteger)arg0 providerName:(id)arg1 ;
+(id)starRatingAndProviderAsAttributedStringForMapItem:(id)arg0 textColor:(id)arg1 font:(id)arg2 showReviewsOrTips:(BOOL)arg3 showNumberOfReviews:(BOOL)arg4 ratingStyle:(NSInteger)arg5 theme:(id)arg6 ;
+(id)starRatingAndProviderAsAttributedStringForMapItem:(id)arg0 textColor:(id)arg1 font:(id)arg2 showReviewsOrTips:(BOOL)arg3 theme:(id)arg4 ;


@end


#endif