// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRZHUYINMODIFICATION_H
#define PRZHUYINMODIFICATION_H

@class NSString;


#import "PRModification.h"

@interface PRZhuyinModification : PRModification {
    _NSRange _range;
    NSString *_replacementString;
    NSUInteger _modificationType;
    _NSRange _syllableRange;
    _NSRange _additionalSyllableRange;
    CGFloat _modificationScore;
    NSUInteger _syllableCountScore;
    unsigned char _letters;
    BOOL _producesPartialSyllable;
}




-(BOOL)_shouldAppendLetter:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)producesPartialSyllable;
-(CGFloat)modificationScore;
-(NSUInteger)hash;
-(NSUInteger)modificationType;
-(NSUInteger)syllableCountScore;
-(id)description;
-(id)initWithRange:(struct _NSRange )arg0 replacementString:(id)arg1 modificationType:(NSUInteger)arg2 syllableRange:(struct _NSRange )arg3 additionalSyllableRange:(struct _NSRange )arg4 modificationScore:(CGFloat)arg5 syllableCountScore:(NSUInteger)arg6 syllableLetters:(char *)arg7 producesPartialSyllable:(BOOL)arg8 ;
-(id)initWithRange:(struct _NSRange )arg0 replacementString:(id)arg1 modificationType:(NSUInteger)arg2 syllableRange:(struct _NSRange )arg3 modificationScore:(CGFloat)arg4 syllableCountScore:(NSUInteger)arg5 syllableLetters:(char *)arg6 producesPartialSyllable:(BOOL)arg7 ;
-(id)replacementString;
-(struct _NSRange )additionalSyllableRange;
-(struct _NSRange )combinedSyllableRange;
-(struct _NSRange )range;
-(struct _NSRange )syllableRange;
-(void)dealloc;


@end


#endif