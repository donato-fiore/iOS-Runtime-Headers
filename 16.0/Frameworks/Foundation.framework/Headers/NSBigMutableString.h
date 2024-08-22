// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSBIGMUTABLESTRING_H
#define NSBIGMUTABLESTRING_H



#import "NSMutableString.h"

@interface NSBigMutableString : NSMutableString {
    ? flags;
    NSUInteger length;
    NSData""dataBytes"*}"s"{?="storage"^{__CFStorage}} contents;
}




-(?)_copyStorageencoding;
-(BOOL)_copyDataFrom:(id)arg0 range:(struct _NSRange )arg1 ;
-(BOOL)_getData:(*id)arg0 encoding:(*NSUInteger)arg1 ;
-(BOOL)_isCString;
-(BOOL)_isMarkedAsImmutable;
-(BOOL)_setData:(id)arg0 encoding:(NSUInteger)arg1 ;
-(BOOL)_setStorage:(struct __CFStorage *)arg0 encoding:(NSUInteger)arg1 ;
-(NSUInteger)length;
-(id)_createSubstringWithRange:(struct _NSRange )arg0 ;
-(id)_newBigSubstringWithRange:(struct _NSRange )arg0 wantsMutable:(BOOL)arg1 zone:(struct _NSZone *)arg2 ;
-(id)_newSmallImmutableSubstringWithRange:(struct _NSRange )arg0 zone:(struct _NSZone *)arg1 ;
-(id)_newSubstringWithRange:(struct _NSRange )arg0 zone:(struct _NSZone *)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStorage:(struct __CFStorage *)arg0 length:(NSUInteger)arg1 isUnicode:(BOOL)arg2 ;
-(id)initWithString:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)_checkForInvalidMutationWithSelector:(SEL)arg0 ;
-(void)_markAsImmutable;
-(void)dealloc;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;


@end


#endif