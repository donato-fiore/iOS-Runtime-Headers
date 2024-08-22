// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMFQUERYRESULT_H
#define EMFQUERYRESULT_H

@class NSOrderedSet, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "EMFQuery.h"
#import "EMFQueryResultOverride.h"

@interface EMFQueryResult : NSObject {
    NSOrderedSet *_sortedResultSet;
}


@property (readonly, nonatomic) NSArray *documentMatches; // ivar: _documentMatches
@property (readonly, nonatomic) NSDictionary *matchingDocumentWeights; // ivar: _matchingDocumentWeights
@property (readonly, nonatomic) EMFQuery *query; // ivar: _query
@property (readonly, copy, nonatomic) EMFQueryResultOverride *resultOverride; // ivar: _resultOverride


+(id)_emojiStringForDocumentID:(id)arg0 usingLocaleData:(struct __EmojiLocaleDataWrapper *)arg1 ;
+(struct __EmojiTokenWrapper *)_emojiTokenForDocumentID:(id)arg0 usingLocaleData:(struct __EmojiLocaleDataWrapper *)arg1 ;
-(id)_handleOverrideResultInterpolationForStandardResults:(id)arg0 ;
-(id)_interpolateOverriddenResultsByAppending:(id)arg0 ;
-(id)_interpolateOverriddenResultsByAppendingAndMoving:(id)arg0 ;
-(id)_interpolateOverriddenResultsByFiltering:(id)arg0 ;
-(id)_interpolateOverriddenResultsByOverwriting;
-(id)_interpolateOverriddenResultsByPrepending:(id)arg0 ;
-(id)description;
-(id)emojiMatchesAndDocumentWeightsUsingEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)arg0 ;
-(id)emojiMatchesForOverriddenResultsUsingEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)arg0 ;
-(id)emojiStringMatchesUsingEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)arg0 ;
-(id)initWithQuery:(id)arg0 andMatchingDocumentWeights:(id)arg1 ;
-(id)initWithQuery:(id)arg0 matchingDocumentWeights:(id)arg1 resultOverride:(id)arg2 ;


@end


#endif