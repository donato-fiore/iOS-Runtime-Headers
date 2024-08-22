// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTCOSTAWARELIMITTRANSFORMATION_H
#define NTCOSTAWARELIMITTRANSFORMATION_H

@class NSDictionary, NSString;
@protocol NTFeedTransforming;

#import <Foundation/Foundation.h>


@interface NTCostAwareLimitTransformation : NSObject <NTFeedTransforming>



@property (readonly, copy, nonatomic) id *appraiser; // ivar: _appraiser
@property (readonly, nonatomic) CGFloat budget; // ivar: _budget
@property (copy, nonatomic) NSDictionary *costByFeedItemIDsForLastTransformation; // ivar: _costByFeedItemIDsForLastTransformation
@property (nonatomic) CGFloat costOfFeedItemsForLastTransformation; // ivar: _costOfFeedItemsForLastTransformation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithBudget:(CGFloat)arg0 appraiser:(id)arg1 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif