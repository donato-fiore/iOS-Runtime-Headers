// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TICONVERSIONHISTORY_H
#define TICONVERSIONHISTORY_H

@class NSString, NSMutableArray, NSMutableString;

#import <Foundation/Foundation.h>

#import "TIConvertedCandidate.h"

@interface TIConversionHistory : NSObject

@property (readonly, nonatomic) NSString *convertedCandidateText;
@property (retain, nonatomic) NSMutableArray *convertedCandidates; // ivar: _convertedCandidates
@property (readonly, nonatomic) NSUInteger convertedLength;
@property (nonatomic) BOOL inputChangedSinceLastConversion; // ivar: _inputChangedSinceLastConversion
@property (nonatomic) BOOL invalid; // ivar: _invalid
@property (readonly, nonatomic) TIConvertedCandidate *lastConvertedCandidate;
@property (retain, nonatomic) NSMutableArray *mutableConvertedCandidateRefs; // ivar: _mutableConvertedCandidateRefs
@property (retain, nonatomic) NSMutableString *mutableConvertedCandidateText; // ivar: _mutableConvertedCandidateText
@property (nonatomic) NSUInteger revertCount; // ivar: _revertCount


-(BOOL)isValid;
-(BOOL)shouldRevertConvertedCandidateOnDeletionFromMarkedText:(id)arg0 ;
-(id)init;
-(void)addCandidate:(id)arg0 candidateRef:(id)arg1 replacedAmbiguousPinyinSyllables:(id)arg2 replacementUnambiguousPinyinSyllables:(id)arg3 convertedInput:(id)arg4 ;
-(void)clear;
-(void)didRevertLastConvertedCandidate;


@end


#endif