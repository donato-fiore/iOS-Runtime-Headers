// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGRE2_H
#define SGRE2_H


#import <Foundation/Foundation.h>


@interface SGRe2 : NSObject {
    unsigned char _isTrivial;
}




+(id)re2WithRegexp:(id)arg0 ;
+(id)re2WithRegexpData:(id)arg0 ;
+(id)re2WithRegexpDataLazy:(id)arg0 ;
+(id)re2WithRegexpLazy:(id)arg0 ;
+(id)re2WithSubregexps:(id)arg0 ;
+(id)re2WithSubregexps:(id)arg0 prefilter:(id)arg1 ;
+(void)setCacheLimitForTesting:(NSUInteger)arg0 ;
-(BOOL)isTrivial;
-(id)existsInString:(id)arg0 ;
-(id)existsInUtf8:(char *)arg0 ;
-(id)hashId;
-(id)matchesString:(id)arg0 ;
-(id)matchesUtf8:(char *)arg0 ;
-(int)_enumerateMatchesInUtf8:(char *)arg0 fromString:(id)arg1 ngroups:(NSUInteger)arg2 block:(id)arg3 ;
-(void)enumerateMatchesInString:(id)arg0 ngroups:(NSUInteger)arg1 block:(id)arg2 ;
-(void)enumerateMatchesInString:(id)arg0 ngroups:(NSUInteger)arg1 blockWithSubregexp:(id)arg2 ;
-(void)enumerateMatchesInUtf8:(char *)arg0 fromString:(id)arg1 ngroups:(NSUInteger)arg2 block:(id)arg3 ;
-(void)enumerateMatchesInUtf8:(char *)arg0 fromString:(id)arg1 ngroups:(NSUInteger)arg2 blockWithSubregexp:(id)arg3 ;


@end


#endif