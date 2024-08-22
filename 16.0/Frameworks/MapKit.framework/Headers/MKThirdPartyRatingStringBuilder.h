// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKTHIRDPARTYRATINGSTRINGBUILDER_H
#define MKTHIRDPARTYRATINGSTRINGBUILDER_H

@class NSString;
@protocol MKRatingStringProvider;

#import <Foundation/Foundation.h>


@interface MKThirdPartyRatingStringBuilder : NSObject <MKRatingStringProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)carPlayHeaderStringForMapItem:(id)arg0 titleAttributes:(id)arg1 providerAttributes:(id)arg2 ;
+(id)ratingAndReviewSummaryAttributedStringForMapItem:(id)arg0 textColor:(id)arg1 font:(id)arg2 theme:(id)arg3 ;
+(id)ratingColorForMapItem:(id)arg0 ;
+(id)ratingSummaryAttributedStringForMapItem:(id)arg0 textColor:(id)arg1 font:(id)arg2 theme:(id)arg3 ;
+(id)ratingSymbolName;


@end


#endif