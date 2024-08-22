// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPUEMPHASIZEDTEXT_H
#define MPUEMPHASIZEDTEXT_H

@class NSMutableSet, NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPUEmphasizedText : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableSet *_emphasisRangesSet;
    NSString *_string;
}


@property (readonly, copy, nonatomic) NSArray *emphasisRanges;
@property (readonly, copy, nonatomic) NSString *string;


+(BOOL)supportsSecureCoding;
+(id)attributedStringWithString:(id)arg0 emphasisDelimiter:(id)arg1 regularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3 ;
+(id)attributedStringWithString:(id)arg0 emphasisSubstring:(id)arg1 options:(NSUInteger)arg2 regularTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4 ;
+(id)emphasizedTextUsingString:(id)arg0 emphasisDelimiter:(id)arg1 ;
+(id)emphasizedTextUsingString:(id)arg0 emphasisSubstring:(id)arg1 options:(NSUInteger)arg2 ;
+(id)emphasizedTextWithString:(id)arg0 ;
+(void)_enumerateEmphasisRangesInString:(id)arg0 withEmphasisDelimiter:(id)arg1 usingBlock:(id)arg2 ;
+(void)_enumerateEmphasisRangesInString:(id)arg0 withEmphasisSubstring:(id)arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 emphasisRanges:(id)arg1 ;
-(id)newAttributedStringWithRegularTextAttributes:(id)arg0 emphasizedTextAttributes:(id)arg1 ;
-(id)newAttributedStringWithTextAttributes:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateEmphasisRangesUsingBlock:(id)arg0 ;


@end


#endif