// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSSHARINGCONTACTFEATUREEXTRACTION_H
#define _PSSHARINGCONTACTFEATUREEXTRACTION_H

@class BMBehaviorRetriever, NSMutableDictionary, _CDInteractionStore, NSDictionary;

#import <Foundation/Foundation.h>

#import "_PSContactFillerNormalizationConstants.h"
#import "CAPContactFillerUserEvent.h"

@interface _PSSharingContactFeatureExtraction : NSObject

@property (readonly, nonatomic) BMBehaviorRetriever *behaviorRetriever; // ivar: _behaviorRetriever
@property (retain, nonatomic) NSMutableDictionary *constantFeatures; // ivar: _constantFeatures
@property (nonatomic) BOOL constantFeaturesReady; // ivar: _constantFeaturesReady
@property (readonly, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) _PSContactFillerNormalizationConstants *normConstants; // ivar: _normConstants
@property (retain, nonatomic) CAPContactFillerUserEvent *userEvent; // ivar: _userEvent


-(id)initWithMetadata:(id)arg0 interactionStore:(id)arg1 ;
-(void)extractConstantFeaturesInto:(id)arg0 ;
-(void)extractFeaturesInto:(id)arg0 withPredictionContext:(id)arg1 forContactId:(id)arg2 forInteraction:(id)arg3 behaviorRulesConsideringInTheContext:(id)arg4 ruleRankingMLModelScores:(id)arg5 interactionModelScores:(id)arg6 ;
-(void)transferConstantFeatures:(id)arg0 to:(id)arg1 ;


@end


#endif