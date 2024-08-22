// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSREGULAREXPRESSION_H
#define NSREGULAREXPRESSION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSRegularExpression : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_pattern;
    NSUInteger _options;
    *void _internal;
    int _checkout;
}


@property (readonly) NSUInteger numberOfCaptureGroups;
@property (readonly) NSUInteger options;
@property (readonly, copy) NSString *pattern;


+(BOOL)supportsSecureCoding;
+(id)escapedPatternForString:(id)arg0 ;
+(id)escapedTemplateForString:(id)arg0 ;
+(id)regularExpressionWithPattern:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_captureGroupNumberWithName:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)numberOfMatchesInString:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 ;
-(NSUInteger)replaceMatchesInString:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 withTemplate:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)firstMatchInString:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPattern:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)matchesInString:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 ;
-(id)replacementStringForResult:(id)arg0 inString:(id)arg1 offset:(NSInteger)arg2 template:(id)arg3 ;
-(id)stringByReplacingMatchesInString:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 withTemplate:(id)arg3 ;
-(struct _NSRange )rangeOfFirstMatchInString:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateMatchesInString:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 usingBlock:(id)arg3 ;


@end


#endif