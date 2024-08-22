// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRTURKISHSUFFIX_H
#define PRTURKISHSUFFIX_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PRTurkishSuffix : NSObject {
    NSString *_pattern;
    NSString *_name;
    unsigned char _patternBuffer;
    unsigned char _isOptional;
    NSUInteger _patternBufferLength;
    int _suffixType;
    BOOL _postponesApostrophe;
}




+(id)standardTurkishNounSuffixes;
+(id)standardTurkishSuffixes;
+(id)standardTurkishVerbSuffixes;
+(void)_enumerateSuffixMatchesForBuffer:(char *)arg0 length:(NSUInteger)arg1 followedByLetter:(unsigned char)arg2 options:(NSUInteger)arg3 depth:(NSUInteger)arg4 matchState:(int)arg5 suffixStack:(*id)arg6 suffixRangeStack:(struct _NSRange *)arg7 usingBlock:(id)arg8 ;
+(void)enumerateSuffixMatchesForBuffer:(char *)arg0 length:(NSUInteger)arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3 ;
+(void)enumerateSuffixMatchesForWord:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(BOOL)postponesApostrophe;
-(NSUInteger)matchingIndexInBuffer:(char *)arg0 length:(NSUInteger)arg1 followedByLetter:(unsigned char)arg2 matchWithNameOnly:(*BOOL)arg3 ;
-(id)description;
-(id)initWithPattern:(id)arg0 name:(id)arg1 type:(int)arg2 postponesApostrophe:(BOOL)arg3 ;
-(id)name;
-(id)pattern;
-(int)suffixType;
-(void)_fillPatternBuffer;
-(void)dealloc;


@end


#endif