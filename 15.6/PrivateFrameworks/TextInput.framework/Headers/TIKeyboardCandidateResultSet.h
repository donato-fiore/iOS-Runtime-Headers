// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIKEYBOARDCANDIDATERESULTSET_H
#define TIKEYBOARDCANDIDATERESULTSET_H

@class NSArray, NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TIKeyboardCandidate.h"
#import "TIKeyboardIntermediateText.h"

@interface TIKeyboardCandidateResultSet : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) TIKeyboardCandidate *acceptedCandidate; // ivar: _acceptedCandidate
@property (nonatomic) NSUInteger batchCandidateLocation; // ivar: _batchCandidateLocation
@property (retain, nonatomic) NSArray *candidates; // ivar: _candidates
@property (readonly, nonatomic) NSArray *candidatesIfSupplemental;
@property (retain, nonatomic) NSString *committedText; // ivar: _committedText
@property (copy, nonatomic) TIKeyboardCandidate *defaultCandidate; // ivar: _defaultCandidate
@property (retain, nonatomic) NSArray *disambiguationCandidates; // ivar: _disambiguationCandidates
@property (nonatomic) BOOL excludedExtensionCandidates; // ivar: _excludedExtensionCandidates
@property (readonly, nonatomic) TIKeyboardCandidate *firstCandidate;
@property (nonatomic) NSUInteger generatedCandidateCount; // ivar: _generatedCandidateCount
@property (readonly, nonatomic) BOOL hasCandidates;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasOnlyProactiveCandidates;
@property (readonly, nonatomic) BOOL hasSupplementalCandidates;
@property (retain, nonatomic) NSDictionary *indexTitles; // ivar: _indexTitles
@property (nonatomic) NSUInteger initialSelectedIndex; // ivar: _initialSelectedIndex
@property (retain, nonatomic) NSArray *initiallyHiddenCandidates;
@property (nonatomic) BOOL inputManagerHasPendingCandidatesUpdate; // ivar: _inputManagerHasPendingCandidatesUpdate
@property (readonly, nonatomic) BOOL isDummySet;
@property (readonly, nonatomic) NSArray *proactiveTriggers; // ivar: _proactiveTriggers
@property (nonatomic) NSUInteger selectedDisambiguationCandidateIndex; // ivar: _selectedDisambiguationCandidateIndex
@property (nonatomic) NSUInteger selectedHiddenCandidateIndex;
@property (retain, nonatomic) NSDictionary *showExtensionCandidates; // ivar: _showExtensionCandidates
@property (retain, nonatomic) NSDictionary *sortMethodGroups; // ivar: _sortMethodGroups
@property (retain, nonatomic) NSArray *sortMethods; // ivar: _sortMethods
@property (retain, nonatomic) TIKeyboardIntermediateText *uncommittedText; // ivar: _uncommittedText


+(BOOL)supportsSecureCoding;
+(id)dummySet;
+(id)setWithCandidates:(id)arg0 ;
+(id)setWithCandidates:(id)arg0 initialSelectedIndex:(NSUInteger)arg1 defaultCandidate:(id)arg2 sortMethods:(id)arg3 sortMethodGroups:(id)arg4 indexTitles:(id)arg5 showExtensionCandidates:(id)arg6 disambiguationCandidates:(id)arg7 selectedDisambiguationCandidateIndex:(NSUInteger)arg8 ;
+(id)setWithCandidates:(id)arg0 initialSelectedIndex:(NSUInteger)arg1 defaultCandidate:(id)arg2 sortMethods:(id)arg3 sortMethodGroups:(id)arg4 indexTitles:(id)arg5 showExtensionCandidates:(id)arg6 disambiguationCandidates:(id)arg7 selectedDisambiguationCandidateIndex:(NSUInteger)arg8 proactiveTriggers:(id)arg9 ;
+(id)setWithCandidates:(id)arg0 initialSelectedIndex:(NSUInteger)arg1 defaultCandidate:(id)arg2 sortMethods:(id)arg3 sortMethodGroups:(id)arg4 indexTitles:(id)arg5 showExtensionCandidates:(id)arg6 initiallyHiddenCandidates:(id)arg7 selectedHiddenCandidateIndex:(NSUInteger)arg8 ;
+(id)setWithCandidates:(id)arg0 initialSelectedIndex:(NSUInteger)arg1 defaultCandidate:(id)arg2 sortMethods:(id)arg3 sortMethodGroups:(id)arg4 indexTitles:(id)arg5 showExtensionCandidates:(id)arg6 initiallyHiddenCandidates:(id)arg7 selectedHiddenCandidateIndex:(NSUInteger)arg8 proactiveTriggers:(id)arg9 ;
+(id)setWithCandidates:(id)arg0 proactiveTriggers:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSubsetOf:(id)arg0 ;
-(NSUInteger)positionInCandidateList:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCandidates:(id)arg0 initialSelectedIndex:(NSUInteger)arg1 defaultCandidate:(id)arg2 sortMethods:(id)arg3 sortMethodGroups:(id)arg4 indexTitles:(id)arg5 showExtensionCandidates:(id)arg6 disambiguationCandidates:(id)arg7 selectedDisambiguationCandidateIndex:(NSUInteger)arg8 proactiveTriggers:(id)arg9 ;
-(id)initWithCoder:(id)arg0 ;
-(id)setByAppendingSet:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif