// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCARTICLESEARCHOPERATIONFEEDBACKRESULT_H
#define FCARTICLESEARCHOPERATIONFEEDBACKRESULT_H

@class SFRankingFeedback;

#import <Foundation/Foundation.h>


@interface FCArticleSearchOperationFeedbackResult : NSObject

@property (readonly, copy, nonatomic) SFRankingFeedback *resultRankingFeedback; // ivar: _resultRankingFeedback


-(id)initWithSearchOperationRankingFeedBack:(id)arg0 ;


@end


#endif