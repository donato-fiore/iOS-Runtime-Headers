// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRCANDIDATE_H
#define PRCANDIDATE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PRCandidate : NSObject

@property (nonatomic, getter=isBlocklisted) BOOL blocklisted; // ivar: _blocklisted
@property (readonly, copy, nonatomic) NSArray *candidateWords; // ivar: _candidateWords
@property (nonatomic, getter=hasCustomErrorScore) BOOL customErrorScore; // ivar: _hasCustomErrorScore
@property (nonatomic) CGFloat errorScore; // ivar: _errorScore
@property (nonatomic) CGFloat lexiconScore; // ivar: _lexiconScore
@property (nonatomic) CGFloat linguisticScore; // ivar: _linguisticScore
@property (readonly, nonatomic) NSUInteger numberOfWords;
@property (readonly, nonatomic) _NSRange replacementRange; // ivar: _replacementRange
@property (readonly, nonatomic) CGFloat score;
@property (readonly, copy, nonatomic) NSString *string;


+(id)candidateWithBuffer:(char *)arg0 encoding:(unsigned int)arg1 transform:(NSUInteger)arg2 replacementRange:(struct _NSRange )arg3 errorScore:(CGFloat)arg4 capitalizationDictionaryArray:(id)arg5 ;
+(id)candidateWithBuffer:(char *)arg0 encoding:(unsigned int)arg1 transform:(NSUInteger)arg2 replacementRange:(struct _NSRange )arg3 errorType:(NSUInteger)arg4 errorModel:(id)arg5 capitalizationDictionaryArray:(id)arg6 ;
+(id)candidateWithString:(id)arg0 replacementRange:(struct _NSRange )arg1 errorScore:(CGFloat)arg2 ;
+(id)candidateWithString:(id)arg0 replacementRange:(struct _NSRange )arg1 errorType:(NSUInteger)arg2 errorModel:(id)arg3 ;
+(id)candidateWithWords:(id)arg0 replacementRange:(struct _NSRange )arg1 errorScore:(CGFloat)arg2 ;
+(id)candidateWithWords:(id)arg0 replacementRange:(struct _NSRange )arg1 errorType:(NSUInteger)arg2 errorModel:(id)arg3 ;
+(id)replacementCandidateWithBuffer:(char *)arg0 encoding:(unsigned int)arg1 transform:(NSUInteger)arg2 replacementRange:(struct _NSRange )arg3 intendedCharacter:(unsigned short)arg4 actualCharacter:(unsigned short)arg5 errorModel:(id)arg6 capitalizationDictionaryArray:(id)arg7 ;
+(id)replacementCandidateWithString:(id)arg0 replacementRange:(struct _NSRange )arg1 intendedCharacter:(unsigned short)arg2 actualCharacter:(unsigned short)arg3 errorModel:(id)arg4 ;
+(id)transpositionCandidateWithBuffer:(char *)arg0 encoding:(unsigned int)arg1 transform:(NSUInteger)arg2 replacementRange:(struct _NSRange )arg3 intendedFirstCharacter:(unsigned short)arg4 intendedSecondCharacter:(unsigned short)arg5 errorModel:(id)arg6 capitalizationDictionaryArray:(id)arg7 ;
+(id)transpositionCandidateWithString:(id)arg0 replacementRange:(struct _NSRange )arg1 intendedFirstCharacter:(unsigned short)arg2 intendedSecondCharacter:(unsigned short)arg3 errorModel:(id)arg4 ;
-(id)description;
-(id)initWithCandidateWords:(id)arg0 replacementRange:(struct _NSRange )arg1 errorScore:(CGFloat)arg2 ;
-(id)initWithString:(id)arg0 replacementRange:(struct _NSRange )arg1 errorScore:(CGFloat)arg2 ;
-(void)dealloc;


@end


#endif