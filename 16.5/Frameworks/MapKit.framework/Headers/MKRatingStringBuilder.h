// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKRATINGSTRINGBUILDER_H
#define MKRATINGSTRINGBUILDER_H


#import <Foundation/Foundation.h>


@interface MKRatingStringBuilder : NSObject



+(Class)ratingStringProviderForMapItem:(id)arg0 ;
+(id)carPlayHeaderStringForMapItem:(id)arg0 titleAttributes:(id)arg1 providerAttributes:(id)arg2 ;
+(id)delimitedPriceRangeAttributedStringForMapItem:(id)arg0 textColor:(id)arg1 font:(id)arg2 ;
+(id)priceLabelStringFromMapItem:(id)arg0 ;
+(id)ratingAndReviewSummaryAttributedStringForMapItem:(id)arg0 textColor:(id)arg1 font:(id)arg2 theme:(id)arg3 ;
+(id)ratingColorForMapItem:(id)arg0 ;
+(id)ratingSummaryAttributedStringForMapItem:(id)arg0 textColor:(id)arg1 font:(id)arg2 theme:(id)arg3 ;
+(id)ratingSymbolNameForMapItem:(id)arg0 ;


@end


#endif