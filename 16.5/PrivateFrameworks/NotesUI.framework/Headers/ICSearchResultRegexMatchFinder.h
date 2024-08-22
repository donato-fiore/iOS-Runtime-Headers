// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSEARCHRESULTREGEXMATCHFINDER_H
#define ICSEARCHRESULTREGEXMATCHFINDER_H

@class NSRegularExpression, NSSet, NSString;

#import <Foundation/Foundation.h>


@interface ICSearchResultRegexMatchFinder : NSObject

@property (retain, nonatomic) NSRegularExpression *fallbackRegex; // ivar: _fallbackRegex
@property (retain, nonatomic) NSRegularExpression *normalRegex; // ivar: _normalRegex
@property (retain, nonatomic) NSSet *prefixMatchingTokens; // ivar: _prefixMatchingTokens
@property (retain, nonatomic) NSString *searchString; // ivar: _searchString
@property (retain, nonatomic) NSSet *substringMatchingTokens; // ivar: _substringMatchingTokens


+(BOOL)textCheckingResultsAreValid:(id)arg0 ;
+(id)matchesForToken:(id)arg0 inDocument:(id)arg1 checkPrefixBeforeFallingBack:(BOOL)arg2 ;
-(id)firstMatchInDocumentWithGlobalFallback:(id)arg0 ;
-(id)initWithPrefixMatchingTokens:(id)arg0 substringMatchingTokens:(id)arg1 searchString:(id)arg2 ;
-(id)matchesInDocumentWithPerTokenFallback:(id)arg0 ;


@end


#endif