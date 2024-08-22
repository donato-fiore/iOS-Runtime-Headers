// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXANCHORMODELCLASSIFICATIONRESULT_H
#define ATXANCHORMODELCLASSIFICATIONRESULT_H


#import <Foundation/Foundation.h>


@interface ATXAnchorModelClassificationResult : NSObject

@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) BOOL shouldPredictCandidate; // ivar: _shouldPredictCandidate


-(id)initWithShouldPredictCandidate:(BOOL)arg0 score:(CGFloat)arg1 ;


@end


#endif