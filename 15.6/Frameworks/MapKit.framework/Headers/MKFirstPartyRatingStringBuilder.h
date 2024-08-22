// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFIRSTPARTYRATINGSTRINGBUILDER_H
#define MKFIRSTPARTYRATINGSTRINGBUILDER_H

@class NSString;
@protocol MKRatingStringProvider;

#import <Foundation/Foundation.h>


@interface MKFirstPartyRatingStringBuilder : NSObject <MKRatingStringProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_colorForPercentage:(CGFloat)arg0 ;
+(id)carPlayHeaderStringForMapItem:(id)arg0 titleAttributes:(id)arg1 providerAttributes:(id)arg2 ;
+(id)percentageStringForMapItem:(id)arg0 showNumberOfRatings:(BOOL)arg1 textColor:(id)arg2 font:(id)arg3 theme:(id)arg4 ;
+(id)ratingAndReviewSummaryAttributedStringForMapItem:(id)arg0 textColor:(id)arg1 font:(id)arg2 theme:(id)arg3 ;
+(id)ratingColorForMapItem:(id)arg0 ;
+(id)ratingPercentageAttributedStringForMapItem:(id)arg0 textColor:(id)arg1 font:(id)arg2 theme:(id)arg3 ;
+(id)ratingSummaryAttributedStringForMapItem:(id)arg0 textColor:(id)arg1 font:(id)arg2 theme:(id)arg3 ;
+(id)ratingSymbolName;
+(id)thumbRecommendStringWithMapItem:(id)arg0 font:(id)arg1 color:(id)arg2 includeGlyph:(BOOL)arg3 ;
+(id)thumbRecommendStringWithMapItem:(id)arg0 font:(id)arg1 includeGlyph:(BOOL)arg2 ;
+(id)userRecommendationStringWithFont:(id)arg0 ratingState:(NSInteger)arg1 numberOfPhotosAdded:(NSUInteger)arg2 ;
+(id)userRecommendedRatingSummaryAttributedStringForMapItem:(id)arg0 textColor:(id)arg1 font:(id)arg2 theme:(id)arg3 ;


@end


#endif