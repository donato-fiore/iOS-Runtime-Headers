// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEREGEXMATCHER_H
#define TSCEREGEXMATCHER_H

@class NSRegularExpression;

#import <Foundation/Foundation.h>


@interface TSCERegexMatcher : NSObject

@property (readonly, nonatomic) NSRegularExpression *regularExpression; // ivar: _regularExpression


+(id)regexMatcherWithRegexString:(id)arg0 ;
+(id)regexMatcherWithRegexString:(id)arg0 caseSensitive:(BOOL)arg1 ;
+(id)regexMatcherWithRegexString:(id)arg0 caseSensitive:(BOOL)arg1 entireMatch:(BOOL)arg2 ;
+(id)regexMatcherWithStringMatch:(id)arg0 ;
+(id)regexMatcherWithStringMatch:(id)arg0 caseSensitive:(BOOL)arg1 entireMatch:(BOOL)arg2 ;
-(BOOL)containsMatchInString:(id)arg0 ;
-(NSUInteger)numberOfMatchesInString:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 ;
-(id)initWithRegexString:(id)arg0 caseSensitive:(BOOL)arg1 entireMatch:(BOOL)arg2 ;
-(id)initWithString:(id)arg0 caseSensitive:(BOOL)arg1 entireMatch:(BOOL)arg2 ;
-(id)matchesInString:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 ;
-(id)stringByReplacingMatchesInString:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 withTemplate:(id)arg3 ;
-(struct _NSRange )rangeOfFirstMatchInString:(id)arg0 ;
-(struct _NSRange )rangeOfFirstMatchInString:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 ;
-(struct _NSRange )rangeOfMatchInString:(id)arg0 occurrence:(NSInteger)arg1 ;
-(struct _NSRange )rangeOfMatchInString:(id)arg0 occurrence:(NSInteger)arg1 matchesFound:(*NSInteger)arg2 ;


@end


#endif