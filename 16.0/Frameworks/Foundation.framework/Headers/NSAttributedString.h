// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSATTRIBUTEDSTRING_H
#define NSATTRIBUTEDSTRING_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy) NSString *string;


+(BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+(BOOL)supportsSecureCoding;
+(id)_attributedStringWithFormat:(id)arg0 attributeOptions:(NSUInteger)arg1 formattingOptions:(id)arg2 locale:(id)arg3 arguments:(char *)arg4 ;
+(id)_attributedStringWithFormat:(id)arg0 options:(NSUInteger)arg1 locale:(id)arg2 arguments:(char *)arg3 ;
+(id)_localizedAttributedStringWithFormat:(id)arg0 ;
+(id)_localizedAttributedStringWithFormat:(id)arg0 options:(NSUInteger)arg1 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)localizedAttributedStringWithFormat:(id)arg0 ;
+(id)localizedAttributedStringWithFormat:(id)arg0 options:(NSUInteger)arg1 ;
+(void)_setAttributedDictionaryClass:(Class)arg0 ;
-(BOOL)_mayRequireIntentResolution;
-(BOOL)_willRequireIntentResolutionWhenContainingAttribute:(id)arg0 value:(id)arg1 ;
-(BOOL)_willRequireIntentResolutionWhenContainingAttributes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAttributedString:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)_cfTypeID;
-(NSUInteger)hash;
-(NSUInteger)length;
-(id)__initWithFormat:(id)arg0 attributeOptions:(NSUInteger)arg1 formattingOptions:(id)arg2 locale:(id)arg3 arguments:(char *)arg4 ;
-(id)_createAttributedSubstringWithRange:(struct _NSRange )arg0 ;
-(id)_firstValueOfAttributeWithKey:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(id)_identicalAttributesInRange:(struct _NSRange )arg0 ;
-(id)_inflectedAttributedStringWithReplacements:(id)arg0 ;
-(id)_initWithFormat:(id)arg0 attributeOptions:(NSUInteger)arg1 formattingOptions:(id)arg2 locale:(id)arg3 ;
-(id)_initWithFormat:(id)arg0 attributeOptions:(NSUInteger)arg1 formattingOptions:(id)arg2 locale:(id)arg3 arguments:(char *)arg4 ;
-(id)_initWithFormat:(id)arg0 options:(NSUInteger)arg1 locale:(id)arg2 ;
-(id)_initWithFormat:(id)arg0 options:(NSUInteger)arg1 locale:(id)arg2 arguments:(char *)arg3 ;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 effectiveRange:(struct _NSRange *)arg2 ;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange )arg3 ;
-(id)attributedStringByInflectingString;
-(id)attributedStringByWeaklyAddingAttributes:(id)arg0 ;
-(id)attributedSubstringFromRange:(struct _NSRange )arg0 ;
-(id)attributedSubstringFromRange:(struct _NSRange )arg0 replacingCharactersInRanges:(struct _NSRange *)arg1 numberOfRanges:(NSInteger)arg2 withString:(id)arg3 ;
-(id)attributesAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)attributesAtIndex:(NSUInteger)arg0 longestEffectiveRange:(struct _NSRange *)arg1 inRange:(struct _NSRange )arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfMarkdownFileAtURL:(id)arg0 options:(id)arg1 baseURL:(id)arg2 error:(*id)arg3 ;
-(id)initWithFormat:(id)arg0 options:(NSUInteger)arg1 locale:(id)arg2 ;
-(id)initWithFormat:(id)arg0 options:(NSUInteger)arg1 locale:(id)arg2 arguments:(char *)arg3 ;
-(id)initWithMarkdown:(id)arg0 options:(id)arg1 baseURL:(id)arg2 error:(*id)arg3 ;
-(id)initWithMarkdownString:(id)arg0 options:(id)arg1 baseURL:(id)arg2 error:(*id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)replacementObjectForPortCoder:(id)arg0 ;
-(void)_markIntentsResolved;
-(void)_markRequiringIntentResolution;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAttribute:(id)arg0 inRange:(struct _NSRange )arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)enumerateAttributesInRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;


@end


#endif