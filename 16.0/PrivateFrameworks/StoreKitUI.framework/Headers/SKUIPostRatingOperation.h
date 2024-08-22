// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPOSTRATINGOPERATION_H
#define SKUIPOSTRATINGOPERATION_H

@class ISOperation, NSDictionary, NSString;


#import "SKUIReviewConfiguration.h"

@interface SKUIPostRatingOperation : ISOperation {
    NSDictionary *_responseDictionary;
    NSString *_itemID;
    NSInteger _rating;
    SKUIReviewConfiguration *_reviewConfiguration;
}


@property (readonly) NSDictionary *responseDictionary;


-(id)initWithRating:(NSInteger)arg0 forItemID:(id)arg1 reviewConfiguration:(id)arg2 ;
-(void)run;


@end


#endif