// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIWORDSEARCHCANDIDATERESULTSET_H
#define TIWORDSEARCHCANDIDATERESULTSET_H

@class NSString, NSArray, TIKeyboardCandidate, NSDictionary, NSMutableDictionary, NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TIWordSearchCandidateResultSet : NSObject <NSCopying>



@property (retain, nonatomic) NSString *autoconvertedCandidateString; // ivar: _autoconvertedCandidateString
@property (copy, nonatomic) NSArray *autoconvertedCandidates; // ivar: _autoconvertedCandidates
@property (retain, nonatomic) NSString *autoconvertedInputString; // ivar: _autoconvertedInputString
@property (copy, nonatomic) TIKeyboardCandidate *candidateAfterSegmentBreak; // ivar: _candidateAfterSegmentBreak
@property (readonly, nonatomic) NSDictionary *candidateRefsDictionary;
@property (readonly, nonatomic) NSArray *candidates;
@property (copy, nonatomic) NSArray *disambiguationCandidates; // ivar: _disambiguationCandidates
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (retain, nonatomic) NSMutableDictionary *mutableCandidateRefsDictionary; // ivar: _mutableCandidateRefsDictionary
@property (retain, nonatomic) NSMutableArray *mutableCandidates; // ivar: _mutableCandidates
@property (readonly, nonatomic) NSMutableArray *mutableProactiveTriggers; // ivar: _mutableProactiveTriggers
@property (retain, nonatomic) NSArray *proactiveCandidates; // ivar: _proactiveCandidates
@property (readonly, nonatomic) NSArray *proactiveTriggers;
@property (nonatomic) NSUInteger selectedDisambiguationCandidateIndex; // ivar: _selectedDisambiguationCandidateIndex


+(id)emptySet;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCandidates:(id)arg0 candidateRefsDictionary:(id)arg1 ;
-(id)initWithCandidates:(id)arg0 candidateRefsDictionary:(id)arg1 disambiguationCandidates:(id)arg2 selectedDisambiguationCandidateIndex:(NSUInteger)arg3 ;
-(void)addCandidates:(id)arg0 candidateRefsDictionary:(id)arg1 ;
-(void)addMecabraCandidate:(id)arg0 mecabraCandidateRef:(*void)arg1 ;
-(void)addMecabraFacemarkCandidate:(*void)arg0 forInput:(id)arg1 ;
-(void)addMecabraProactiveCandidate:(*void)arg0 triggerSourceType:(unsigned char)arg1 ;
-(void)addProactiveTrigger:(id)arg0 ;
-(void)addSyntheticMecabraCandidateWithSurface:(id)arg0 input:(id)arg1 ;
-(void)addSyntheticMecabraCandidateWithSurface:(id)arg0 input:(id)arg1 isExtension:(BOOL)arg2 ;
-(void)addSyntheticMecabraCandidateWithSurface:(id)arg0 input:(id)arg1 isExtension:(BOOL)arg2 deleteCount:(NSUInteger)arg3 ;
-(void)addSyntheticMecabraCandidateWithSurface:(id)arg0 input:(id)arg1 isExtension:(BOOL)arg2 deleteCount:(NSUInteger)arg3 cursorMovement:(NSInteger)arg4 ;
-(void)addSyntheticMecabraCandidateWithSurface:(id)arg0 input:(id)arg1 isExtension:(BOOL)arg2 deleteCount:(NSUInteger)arg3 cursorMovement:(NSInteger)arg4 annotation:(id)arg5 ;
-(void)addSyntheticMecabraProactiveCandidate:(id)arg0 triggerSourceType:(unsigned char)arg1 ;
-(void)clearProactiveTriggers;
-(void)insertMecabraCandidate:(id)arg0 mecabraCandidateRef:(*void)arg1 atIndex:(NSUInteger)arg2 ;
-(void)insertSyntheticMecabraCandidateWithSurface:(id)arg0 input:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)moveCandidate:(id)arg0 fromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 ;
-(void)setAutoconvertedMecabraCandidates:(id)arg0 candidateRefsDictionary:(id)arg1 ;
-(void)updateSupplementalMecabraCandidate:(id)arg0 withMecabraCandidateRef:(*void)arg1 ;


@end


#endif