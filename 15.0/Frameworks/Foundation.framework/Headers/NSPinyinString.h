// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPINYINSTRING_H
#define NSPINYINSTRING_H



#import "NSString.h"

@interface NSPinyinString : NSString {
    NSString *_string;
    NSUInteger _syllableCount;
    NSUInteger _score;
    NSUInteger _rangeCount;
    NSUInteger _replacementCount;
    NSUInteger _transpositionCount;
    NSUInteger _insertionCount;
    NSUInteger _deletionCount;
    NSUInteger _firstModificationIndex;
    *_NSRange _ranges;
    BOOL _lastSyllableIsPartial;
}




+(id)alternativesForInputString:(id)arg0 ;
+(id)prefixesForInputString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)lastSyllableIsPartial;
-(Class)classForCoder;
-(NSUInteger)hash;
-(NSUInteger)indexOfFirstModification;
-(NSUInteger)length;
-(NSUInteger)numberOfDeletions;
-(NSUInteger)numberOfInsertions;
-(NSUInteger)numberOfNonPinyinRanges;
-(NSUInteger)numberOfReplacements;
-(NSUInteger)numberOfTranspositions;
-(NSUInteger)score;
-(NSUInteger)syllableCount;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 syllableCount:(NSUInteger)arg1 lastSyllableIsPartial:(BOOL)arg2 score:(NSUInteger)arg3 replacementCount:(NSUInteger)arg4 transpositionCount:(NSUInteger)arg5 insertionCount:(NSUInteger)arg6 deletionCount:(NSUInteger)arg7 indexOfFirstModification:(NSUInteger)arg8 rangeCount:(NSUInteger)arg9 ranges:(struct _NSRange *)arg10 ;
-(id)initWithString:(id)arg0 syllableCount:(NSUInteger)arg1 lastSyllableIsPartial:(BOOL)arg2 score:(NSUInteger)arg3 replacementCount:(NSUInteger)arg4 transpositionCount:(NSUInteger)arg5 insertionCount:(NSUInteger)arg6 deletionCount:(NSUInteger)arg7 rangeCount:(NSUInteger)arg8 ranges:(struct _NSRange *)arg9 ;
-(id)nonPinyinIndexSet;
-(id)string;
-(struct _NSRange )nonPinyinRangeAtIndex:(NSUInteger)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif