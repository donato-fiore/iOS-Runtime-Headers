// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSURLPATTERNMATCHER_H
#define BCSURLPATTERNMATCHER_H


#import <Foundation/Foundation.h>


@interface BCSURLPatternMatcher : NSObject



-(BOOL)isAnyMatchFoundForPathPattern:(id)arg0 countOfPathComponents:(*NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)isValidDomainForURL:(id)arg0 domainBundleIDPatterns:(id)arg1 ;
-(id)dictionaryFromQueryString:(id)arg0 orderedKeys:(*id)arg1 ;
-(id)extractedPathForAnyMatchUsingScanner:(id)arg0 delimiter:(id)arg1 extractedPath:(id)arg2 countOfPathComponentsToMatch:(NSUInteger)arg3 ;
-(id)extractedPathForExactMatchUsingScanner:(id)arg0 delimiter:(id)arg1 extractedPath:(id)arg2 patternPathComponent:(id)arg3 ;
-(id)extractedQueryByAddingKey:(id)arg0 value:(id)arg1 toExtractedQuery:(id)arg2 ;
-(id)extractedURLForOriginalURL:(id)arg0 originalURLPathComponents:(id)arg1 extractedPath:(id)arg2 extractedQuery:(id)arg3 ;
-(id)matchPattern:(id)arg0 withURL:(id)arg1 forBundleID:(id)arg2 expirationDate:(id)arg3 error:(*id)arg4 ;
-(id)orderedKeysForPatternQuery:(id)arg0 originalURLQuery:(id)arg1 orderedOriginalURLQueryKeys:(id)arg2 ;


@end


#endif