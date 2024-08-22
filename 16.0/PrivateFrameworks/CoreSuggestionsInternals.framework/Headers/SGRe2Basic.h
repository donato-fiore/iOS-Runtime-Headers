// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGRE2BASIC_H
#define SGRE2BASIC_H

@class NSData;


#import "SGRe2.h"

@interface SGRe2Basic : SGRe2 {
    NSData *_patternData;
    *void _pattern;
    BOOL _isTrivial;
}




-(id)description;
-(id)existsInUtf8:(char *)arg0 ;
-(id)hashId;
-(id)initWithRegexp:(id)arg0 ;
-(id)initWithRegexpData:(id)arg0 ;
-(id)matchesUtf8:(char *)arg0 ;
-(int)_enumerateMatchesInUtf8:(char *)arg0 fromString:(id)arg1 ngroups:(NSUInteger)arg2 block:(id)arg3 ;
-(void)dealloc;
-(void)enumerateMatchesInUtf8:(char *)arg0 fromString:(id)arg1 ngroups:(NSUInteger)arg2 block:(id)arg3 ;


@end


#endif