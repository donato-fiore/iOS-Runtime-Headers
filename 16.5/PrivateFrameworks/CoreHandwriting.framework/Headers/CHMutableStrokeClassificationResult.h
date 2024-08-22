// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHMUTABLESTROKECLASSIFICATIONRESULT_H
#define CHMUTABLESTROKECLASSIFICATIONRESULT_H

@class NSMutableDictionary, NSMutableSet;


#import "CHStrokeClassificationResult.h"

@interface CHMutableStrokeClassificationResult : CHStrokeClassificationResult {
    NSMutableDictionary *_strokeClassificationsByStrokeIdentifier;
    NSMutableDictionary *_substrokesByStrokeIdentifier;
    NSMutableSet *_nontextCandidates;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg0 substrokesByStrokeIdentifier:(id)arg1 nontextCandidates:(id)arg2 ;
-(id)nontextCandidates;
-(id)strokeClassificationsByStrokeIdentifier;
-(id)substrokesByStrokeIdentifier;
-(void)updateByAddingClutterStroke:(id)arg0 ;
-(void)updateByAddingNonClutterStroke:(id)arg0 withAllStrokes:(id)arg1 forceText:(BOOL)arg2 ;
-(void)updateByAddingNonClutterStroke:(id)arg0 withClassification:(NSInteger)arg1 ;
-(void)updateByRemovingStrokeIdentifier:(id)arg0 withRemovedAndClutterStrokeIDs:(id)arg1 ;
-(void)updateByTransitionedClutterStrokeIdentifier:(id)arg0 withRemovedAndClutterStrokeIDs:(id)arg1 ;
-(void)updateNonTextCandidatesByRemovingSupportFromStrokeIdentifier:(id)arg0 skippingCandidatesWithStrokeIdentifier:(id)arg1 ;


@end


#endif