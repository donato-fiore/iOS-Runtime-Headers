// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHPREFIXQUERY_H
#define CHPREFIXQUERY_H

@class NSArray, NSSet, NSCharacterSet, NSString;


#import "CHQuery.h"

@interface CHPrefixQuery : CHQuery {
    NSArray *_foundItems;
    NSSet *_validSuffixes;
    NSCharacterSet *_queryDelimiters;
}


@property (readonly, copy, nonatomic) NSArray *foundItems;
@property (readonly, copy, nonatomic) NSString *prefix; // ivar: _prefix
@property (copy, nonatomic) NSSet *validSuffixes;


+(id)hashtagDelimiters;
+(id)hashtagQueryForRecognitionSession:(id)arg0 ;
+(id)mentionQueryForRecognitionSession:(id)arg0 ;
+(id)prefixQueryWithPrefix:(id)arg0 forRecognitionSession:(id)arg1 ;
-(BOOL)_isTokenStringMatchingQuery:(id)arg0 allowPartialMatching:(BOOL)arg1 ;
-(id)_normalizeString:(id)arg0 ;
-(id)_normalizeSuffixes:(id)arg0 ;
-(id)_prefixQueryResultsForSessionResult:(id)arg0 ;
-(id)_queryResultForTokens:(id)arg0 groupResult:(id)arg1 candidateGroup:(id)arg2 ;
-(id)_stringForTokens:(id)arg0 ;
-(id)debugName;
-(id)initWithRecognitionSession:(id)arg0 prefix:(id)arg1 validSuffixes:(id)arg2 delimiters:(id)arg3 ;
-(void)q_updateQueryResult;
-(void)stop;


@end


#endif