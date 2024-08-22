// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRPINYINSTRING_H
#define PRPINYINSTRING_H

@class NSPinyinString;



@interface PRPinyinString : NSPinyinString {
    NSUInteger _originalLength;
    NSUInteger _originalCheckedLength;
    NSUInteger _modificationCount;
    *NSUInteger _modificationTypes;
    *_NSRange _originalRanges;
    *_NSRange _finalRanges;
    *_NSRange _originalSyllableRanges;
    *_NSRange _originalAdditionalSyllableRanges;
}




+(id)alternativesForInputString:(id)arg0 ;
+(id)correctionsForInputString:(id)arg0 ;
+(id)prefixesForInputString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)lastSyllableIsPartial;
-(NSUInteger)finalCheckedLength;
-(NSUInteger)hash;
-(NSUInteger)indexOfFirstModification;
-(NSUInteger)length;
-(NSUInteger)numberOfDeletions;
-(NSUInteger)numberOfInsertions;
-(NSUInteger)numberOfModifications;
-(NSUInteger)numberOfNonPinyinRanges;
-(NSUInteger)numberOfReplacements;
-(NSUInteger)numberOfTranspositions;
-(NSUInteger)originalCheckedLength;
-(NSUInteger)originalLength;
-(NSUInteger)score;
-(NSUInteger)syllableCount;
-(NSUInteger)typeOfModificationAtIndex:(NSUInteger)arg0 ;
-(id)annotatedString;
-(id)description;
-(id)initWithString:(id)arg0 syllableCount:(NSUInteger)arg1 lastSyllableIsPartial:(BOOL)arg2 score:(NSUInteger)arg3 originalLength:(NSUInteger)arg4 modificationType:(NSUInteger)arg5 originalModificationRange:(struct _NSRange )arg6 finalModificationRange:(struct _NSRange )arg7 ;
-(id)initWithString:(id)arg0 syllableCount:(NSUInteger)arg1 lastSyllableIsPartial:(BOOL)arg2 score:(NSUInteger)arg3 originalLength:(NSUInteger)arg4 modificationType:(NSUInteger)arg5 originalModificationRange:(struct _NSRange )arg6 finalModificationRange:(struct _NSRange )arg7 originalSyllableRange:(struct _NSRange )arg8 ;
-(id)initWithString:(id)arg0 syllableCount:(NSUInteger)arg1 lastSyllableIsPartial:(BOOL)arg2 score:(NSUInteger)arg3 originalLength:(NSUInteger)arg4 modificationType:(NSUInteger)arg5 originalModificationRange:(struct _NSRange )arg6 finalModificationRange:(struct _NSRange )arg7 originalSyllableRange:(struct _NSRange )arg8 originalAdditionalSyllableRange:(struct _NSRange )arg9 ;
-(id)initWithString:(id)arg0 syllableCount:(NSUInteger)arg1 lastSyllableIsPartial:(BOOL)arg2 score:(NSUInteger)arg3 originalLength:(NSUInteger)arg4 originalCheckedLength:(NSUInteger)arg5 numberOfModifications:(NSUInteger)arg6 modificationTypes:(*NSUInteger)arg7 originalModificationRanges:(struct _NSRange *)arg8 finalModificationRanges:(struct _NSRange *)arg9 originalSyllableRanges:(struct _NSRange *)arg10 originalAdditionalSyllableRanges:(struct _NSRange *)arg11 ;
-(id)initWithUncheckedString:(id)arg0 score:(NSUInteger)arg1 originalLength:(NSUInteger)arg2 ;
-(id)nonPinyinIndexSet;
-(id)string;
-(struct _NSRange )finalRangeForModificationAtIndex:(NSUInteger)arg0 ;
-(struct _NSRange )nonPinyinRangeAtIndex:(NSUInteger)arg0 ;
-(struct _NSRange )originalAdditionalSyllableRangeForModificationAtIndex:(NSUInteger)arg0 ;
-(struct _NSRange )originalRangeForModificationAtIndex:(NSUInteger)arg0 ;
-(struct _NSRange )originalSyllableRangeForModificationAtIndex:(NSUInteger)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif