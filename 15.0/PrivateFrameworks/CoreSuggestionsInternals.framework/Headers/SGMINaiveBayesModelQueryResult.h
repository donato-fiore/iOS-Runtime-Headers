// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMINAIVEBAYESMODELQUERYRESULT_H
#define SGMINAIVEBAYESMODELQUERYRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "SGMINaiveBayesCountPair.h"

@interface SGMINaiveBayesModelQueryResult : NSObject

@property (readonly) NSArray *bigramQueriedTokensCount; // ivar: _bigramQueriedTokensCount
@property (readonly) SGMINaiveBayesCountPair *bigramTokenCounts; // ivar: _bigramTokenCounts
@property (readonly) SGMINaiveBayesCountPair *mailCount; // ivar: _mailCount
@property (readonly) CGFloat oldestTokenAge; // ivar: _oldestTokenAge
@property (readonly) NSArray *unigramQueriedTokensCount; // ivar: _unigramQueriedTokensCount
@property (readonly) SGMINaiveBayesCountPair *unigramTokenCounts; // ivar: _unigramTokenCounts


-(id)inferProbability;
-(id)initWithMailCount:(id)arg0 unigramTokenCounts:(id)arg1 bigramTokenCounts:(id)arg2 unigramQueriedTokensCount:(id)arg3 bigramQueriedTokensCount:(id)arg4 oldestTokenAge:(CGFloat)arg5 ;


@end


#endif