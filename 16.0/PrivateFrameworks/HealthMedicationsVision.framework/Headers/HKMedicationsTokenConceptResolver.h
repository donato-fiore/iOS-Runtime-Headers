// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONSTOKENCONCEPTRESOLVER_H
#define HKMEDICATIONSTOKENCONCEPTRESOLVER_H

@protocol HKMedicationsAssetInterface;

#import <Foundation/Foundation.h>

#import "HKMedicationsTokenizer.h"

@interface HKMedicationsTokenConceptResolver : NSObject

@property (retain, nonatomic) NSObject<HKMedicationsAssetInterface> *assetInterface; // ivar: _assetInterface
@property (retain, nonatomic) HKMedicationsTokenizer *tokenizer; // ivar: _tokenizer


-(CGFloat)_tokenMatchScoreForMedication:(id)arg0 usingTokens:(id)arg1 ;
-(id)_collectAllMedicationCandidatesUsingTokens:(id)arg0 ;
-(id)_expandedMedicationsFromCandidates:(id)arg0 ;
-(id)initWithAssetInterface:(id)arg0 ;
-(id)rankMedicationsUsingTokens:(id)arg0 candidates:(id)arg1 ;
-(id)recognizedMedicationsFromTextBlock:(id)arg0 ;
-(id)recognizedMedicationsFromTranscript:(id)arg0 ;
-(id)removeMedicationsFromNoisyTokensUsingTokens:(id)arg0 candidates:(id)arg1 ;
-(id)removeStowawayIngredientsUsingTokens:(id)arg0 candidates:(id)arg1 ;


@end


#endif