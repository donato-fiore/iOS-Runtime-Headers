// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSMUTABLESTRING_H
#define NSMUTABLESTRING_H



#import "NSString.h"

@interface NSMutableString : NSString



+(BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)stringWithCapacity:(NSUInteger)arg0 ;
-(BOOL)applyTransform:(id)arg0 reverse:(BOOL)arg1 range:(struct _NSRange )arg2 updatedRange:(struct _NSRange *)arg3 ;
-(Class)classForCoder;
-(NSUInteger)_replaceOccurrencesOfRegularExpressionPattern:(id)arg0 withTemplate:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange )arg3 ;
-(NSUInteger)replaceOccurrencesOfString:(id)arg0 withString:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange )arg3 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)_cfAppendCString:(char *)arg0 length:(NSInteger)arg1 ;
-(void)_cfCapitalize:(*void)arg0 ;
-(void)_cfLowercase:(*void)arg0 ;
-(void)_cfNormalize:(NSInteger)arg0 ;
-(void)_cfPad:(struct __CFString *)arg0 length:(unsigned int)arg1 padIndex:(unsigned int)arg2 ;
-(void)_cfTrim:(struct __CFString *)arg0 ;
-(void)_cfTrimWS;
-(void)_cfUppercase:(*void)arg0 ;
-(void)_trimWithCharacterSet:(id)arg0 ;
-(void)appendCharacters:(*unsigned short)arg0 length:(NSUInteger)arg1 ;
-(void)appendFormat:(id)arg0 ;
-(void)appendString:(id)arg0 ;
-(void)deleteCharactersInRange:(struct _NSRange )arg0 ;
-(void)insertString:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withCString:(char *)arg1 length:(NSUInteger)arg2 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withCharacters:(*unsigned short)arg1 length:(NSUInteger)arg2 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)setString:(id)arg0 ;


@end


#endif