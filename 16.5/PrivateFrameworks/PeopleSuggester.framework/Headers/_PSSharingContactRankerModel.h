// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSSHARINGCONTACTRANKERMODEL_H
#define _PSSHARINGCONTACTRANKERMODEL_H

@class _CDInteractionStore, _CDInteractionCache;

#import <Foundation/Foundation.h>

#import "_PSSharingContactFeatureExtraction.h"
#import "_PSSharingContactRankerMLModel.h"

@interface _PSSharingContactRankerModel : NSObject

@property (nonatomic) BOOL _PSSharingContactRankerMLModelInUse; // ivar: __PSSharingContactRankerMLModelInUse
@property (nonatomic) CGFloat _PSSharingContactRankerMLModelScoreThreshold; // ivar: __PSSharingContactRankerMLModelScoreThreshold
@property (retain) _PSSharingContactFeatureExtraction *feaExtractionHandle; // ivar: _feaExtractionHandle
@property (readonly, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore
@property (retain, nonatomic) _CDInteractionCache *messageInteractionCache; // ivar: _messageInteractionCache
@property (retain, nonatomic) _CDInteractionCache *shareInteractionCache; // ivar: _shareInteractionCache
@property (retain) _PSSharingContactRankerMLModel *sharingContactRankerMLModel; // ivar: _sharingContactRankerMLModel


-(id)initWithInteractionStore:(id)arg0 messageInteractionCache:(id)arg1 shareInteractionCache:(id)arg2 ;
-(id)suggestionProxiesWithPredictionContext:(id)arg0 supportedBundleIDs:(id)arg1 behaviorRulesConsideringInTheContext:(id)arg2 interactionModelSuggestions:(id)arg3 ruleRankingMLModelScores:(id)arg4 ;
-(void)loadMLModel;
-(void)updateModelProperties:(id)arg0 ;


@end


#endif