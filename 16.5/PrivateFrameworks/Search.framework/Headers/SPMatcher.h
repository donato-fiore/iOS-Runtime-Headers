// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPMATCHER_H
#define SPMATCHER_H


#import <Foundation/Foundation.h>


@interface SPMatcher : NSObject {
    *void _matcher;
}




+(id)transcriptionForString:(id)arg0 withLanguage:(id)arg1 ;
-(BOOL)matches:(id)arg0 ;
-(BOOL)matches:(id)arg0 outMatchBits:(*NSUInteger)arg1 ;
-(BOOL)matchesUTF8String:(char *)arg0 ;
-(BOOL)matchesUTF8String:(char *)arg0 outMatchBits:(*NSUInteger)arg1 ;
-(NSUInteger)wordCount;
-(id)initWithSearchString:(id)arg0 andLocale:(id)arg1 andOptions:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif