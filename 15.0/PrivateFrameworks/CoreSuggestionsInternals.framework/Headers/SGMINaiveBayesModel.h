// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMINAIVEBAYESMODEL_H
#define SGMINAIVEBAYESMODEL_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SGMINaiveBayesCountPair.h"

@interface SGMINaiveBayesModel : NSObject

@property (readonly) SGMINaiveBayesCountPair *bigramTokenCounts; // ivar: _bigramTokenCounts
@property (readonly) NSMutableDictionary *bigramTokensCount; // ivar: _bigramTokensCount
@property (readonly) SGMINaiveBayesCountPair *mailCount; // ivar: _mailCount
@property (readonly) SGMINaiveBayesCountPair *unigramTokenCounts; // ivar: _unigramTokenCounts
@property (readonly) NSMutableDictionary *unigramTokensCount; // ivar: _unigramTokensCount


-(id)init;
-(id)initWithMailCount:(id)arg0 unigramTokenCounts:(id)arg1 bigramTokenCounts:(id)arg2 unigramTokensCount:(id)arg3 bigramTokensCount:(id)arg4 ;
-(void)ingestUnigramTokens:(id)arg0 bigramTokens:(id)arg1 asSalient:(BOOL)arg2 ;


@end


#endif