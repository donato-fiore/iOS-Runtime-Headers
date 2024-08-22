// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TITYPOLOGYSTATISTICRANKCANDIDATESACCEPTED_H
#define TITYPOLOGYSTATISTICRANKCANDIDATESACCEPTED_H

@class NSDictionary;


#import "TITypologyStatisticCurrentAutocorrections.h"

@interface TITypologyStatisticRankCandidatesAccepted : TITypologyStatisticCurrentAutocorrections

@property (readonly, nonatomic) NSDictionary *histogram; // ivar: _histogram
@property (readonly, nonatomic) NSInteger lengthOfSelectedCandidates; // ivar: _lengthOfSelectedCandidates
@property (readonly, nonatomic) NSInteger lengthOfSelectedPredictions; // ivar: _lengthOfSelectedPredictions


-(BOOL)isCandidatePrediction:(id)arg0 ;
-(NSUInteger)rankOfCandidate:(id)arg0 ;
-(id)init;
-(id)structuredReport;
-(void)addLengthOfSelectedCandidate:(id)arg0 ;
-(void)addLengthOfSelectedPrediction:(id)arg0 ;
-(void)countSelectedAutocorrection:(id)arg0 ;
-(void)countSelectedCandidate:(id)arg0 withRank:(NSUInteger)arg1 ;
-(void)countSelectedInputString;
-(void)countSelectedInputStringToRejectAutocorrection;
-(void)countSelectedPrediction:(id)arg0 withRank:(NSUInteger)arg1 ;
-(void)rankAndCountSelectedCandidate:(id)arg0 ;
-(void)visitRecordKeyboardInput:(id)arg0 ;


@end


#endif