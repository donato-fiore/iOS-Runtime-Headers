// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPHMMCLASSIFIER_H
#define NPHMMCLASSIFIER_H


#import <Foundation/Foundation.h>

#import "NPNameComponentsData.h"

@interface NPHMMClassifier : NSObject {
    NSUInteger _totalGivenNamesCount;
    NSUInteger _totalFamilyNamesCount;
    NSUInteger _uniqueGivenNamesCount;
    NSUInteger _uniqueFamilyNamesCount;
    NPNameComponentsData *_nameComponentsData;
}


@property ? stateProbabilities; // ivar: _stateProbabilities


-(BOOL)formCompoundFamilyName:(id)arg0 ;
-(BOOL)formCompoundGivenName:(id)arg0 ;
-(BOOL)isCoupleName:(id)arg0 ;
-(BOOL)isGivenNameAbbreviation:(id)arg0 ;
-(BOOL)isInitial:(id)arg0 ;
-(BOOL)isLinkingToken:(id)arg0 ;
-(BOOL)isParticle:(id)arg0 ;
-(BOOL)validSequence:(id)arg0 compoundsConstraints:(id)arg1 labelsConstraints:(id)arg2 ;
-(CGFloat)emissionProbability:(id)arg0 hiddenState:(NSUInteger)arg1 isOOV:(*BOOL)arg2 ;
-(CGFloat)startProbability:(id)arg0 ;
-(CGFloat)stateTransitionProbabilityFrom:(id)arg0 to:(id)arg1 ;
-(NSUInteger)extractMetricForType:(NSUInteger)arg0 ;
-(NSUInteger)frequencyForName:(id)arg0 type:(NSUInteger)arg1 ;
-(NSUInteger)genderMajorityForGivenName:(id)arg0 ;
-(NSUInteger)payloadForName:(id)arg0 type:(NSUInteger)arg1 ;
-(id)candidatesBasedOnCommaDelimiterIndex:(NSUInteger)arg0 sequenceSize:(NSUInteger)arg1 ;
-(id)candidatesBasedOnFormatSequence:(id)arg0 ;
-(id)candidatesOfSize:(NSUInteger)arg0 constraints:(NSUInteger)arg1 compoundsConstraints:(id)arg2 labelsContraints:(id)arg3 ;
-(id)compoundsFromName:(id)arg0 ;
-(id)compoundsFromName:(id)arg0 includeSpaceAsDelimiter:(BOOL)arg1 ;
-(id)hiddenStatesFromObservationSequence:(id)arg0 ;
-(id)initWithHMMProbabilities:(struct ? )arg0 nameComponentsDate:(id)arg1 ;
-(id)probabilityForHiddenSequence:(id)arg0 knowingObservationSequence:(id)arg1 boost:(NSUInteger)arg2 ;
-(struct _CFBurstTrie *)nameFrequencyTrieRef;
-(void)dealloc;


@end


#endif