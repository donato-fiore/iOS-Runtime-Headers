// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXATTRIBUTEDSTRING_H
#define AXATTRIBUTEDSTRING_H

@class NSMutableString;
@protocol NSCopying;



@interface AXAttributedString : NSMutableString <NSCopying>

 {
    *__CFAttributedString _string;
}




+(id)axAttributedStringWithString:(id)arg0 ;
+(id)string;
-(BOOL)hasAttribute:(id)arg0 ;
-(BOOL)hasAttributes;
-(BOOL)isAXAttributedString;
-(NSUInteger)length;
-(id)_axRecursivelyPropertyListCoercedRepresentationWithError:(*id)arg0 ;
-(id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(*id)arg0 ;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 effectiveRange:(struct _NSRange *)arg2 ;
-(id)attributeValueForKey:(id)arg0 ;
-(id)attributedString;
-(id)attributedSubstringFromRange:(struct _NSRange )arg0 ;
-(id)attributesAtIndex:(NSInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)axAttributedStringByReplacingOccurrencesOfString:(id)arg0 withString:(id)arg1 ;
-(id)axAttributedStringDescription;
-(id)axStringByReplacingCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(id)coalescedAttributes;
-(id)coalescedFontAttributes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCFAttributedString:(struct __CFAttributedString *)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithStringOrAttributedString:(id)arg0 ;
-(id)lowercaseString;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)string;
-(id)stringByReplacingOccurrencesOfString:(id)arg0 withString:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange )arg3 ;
-(id)stringByTrimmingCharactersInSet:(id)arg0 ;
-(id)substringFromIndex:(NSUInteger)arg0 ;
-(id)substringWithRange:(struct _NSRange )arg0 ;
-(id)uppercaseString;
-(struct __CFAttributedString *)cfAttributedString;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)appendAXAttributedString:(id)arg0 ;
-(void)appendFormat:(id)arg0 ;
-(void)appendString:(id)arg0 ;
-(void)appendStringOrAXAttributedString:(id)arg0 ;
-(void)convertAttachmentsWithBlock:(id)arg0 ;
-(void)dealloc;
-(void)enumerateAttribute:(id)arg0 inRange:(struct _NSRange )arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)enumerateAttributesUsingBlock:(id)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;
-(void)removeAttributes:(id)arg0 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)replaceString:(struct __CFString *)arg0 ;
-(void)setAttribute:(id)arg0 forKey:(id)arg1 ;
-(void)setAttribute:(id)arg0 forKey:(id)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setAttributes:(id)arg0 ;
-(void)setAttributes:(id)arg0 withRange:(struct _NSRange )arg1 ;


@end


#endif