// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGRE2SUBREGEXPS_H
#define SGRE2SUBREGEXPS_H

@class NSArray;


#import "SGRe2.h"
#import "SGRe2PrefilterTree.h"

@interface SGRe2Subregexps : SGRe2 {
    NSArray *_subregexps;
    SGRe2PrefilterTree *_prefilter;
}




-(id)description;
-(id)existsInUtf8:(char *)arg0 ;
-(id)initWithSubregexps:(id)arg0 prefilter:(id)arg1 ;
-(id)matchesUtf8:(char *)arg0 ;
-(int)_enumerateMatchesInUtf8:(char *)arg0 fromString:(id)arg1 ngroups:(NSUInteger)arg2 block:(id)arg3 ;


@end


#endif