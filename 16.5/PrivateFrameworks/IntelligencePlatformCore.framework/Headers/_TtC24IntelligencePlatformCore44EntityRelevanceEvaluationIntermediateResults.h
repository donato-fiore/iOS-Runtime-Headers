// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC24INTELLIGENCEPLATFORMCORE44ENTITYRELEVANCEEVALUATIONINTERMEDIATERESULTS_H
#define _TTC24INTELLIGENCEPLATFORMCORE44ENTITYRELEVANCEEVALUATIONINTERMEDIATERESULTS_H

@class SwiftObject;



@interface _TtC24IntelligencePlatformCore44EntityRelevanceEvaluationIntermediateResults : SwiftObject {
    ? precisionResult;
    ? precisionAt1Result;
    ? precisionAt2Result;
    ? precisionAt4Result;
    ? precisionAt8Result;
    ? recallResult;
    ? recallAt1Result;
    ? recallAt2Result;
    ? recallAt4Result;
    ? recallAt8Result;
    ? reciprocalRankResult;
    ? meanAveragePrecisionResult;
    ? numberOfCandidatesResult;
    ? numberOfInteractionsResult;
    ? numberOfPredictedEntitiesResult;
    ? numberOfInferenceUpdates;
    ? numberOfInferenceUpdatesWithTruePositives;
    ? numberOfRelevantEntities;
}






@end


#endif