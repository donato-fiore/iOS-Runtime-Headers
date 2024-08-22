// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEANINGFULEVENTMATCHINGRESULT_H
#define PGMEANINGFULEVENTMATCHINGRESULT_H


#import <Foundation/Foundation.h>

#import "PGMeaningfulEventRequiredCriteria.h"

@interface PGMeaningfulEventMatchingResult : NSObject

@property (readonly, nonatomic) BOOL isMatching; // ivar: _isMatching
@property (readonly, nonatomic) BOOL isReliable; // ivar: _isReliable
@property (readonly, nonatomic) PGMeaningfulEventRequiredCriteria *requiredCriteria; // ivar: _requiredCriteria
@property (readonly, nonatomic) CGFloat score; // ivar: _score


-(id)description;
-(id)initWithIsMatching:(BOOL)arg0 score:(CGFloat)arg1 isReliable:(BOOL)arg2 requiredCriteria:(id)arg3 ;


@end


#endif