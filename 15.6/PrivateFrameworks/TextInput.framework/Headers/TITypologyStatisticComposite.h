// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TITYPOLOGYSTATISTICCOMPOSITE_H
#define TITYPOLOGYSTATISTICCOMPOSITE_H

@class NSArray;


#import "TITypologyStatistic.h"

@interface TITypologyStatisticComposite : TITypologyStatistic

@property (readonly, nonatomic) NSArray *statistics; // ivar: _statistics


+(id)statisticCompositeWithStatistics:(id)arg0 ;
-(id)aggregateReport;
-(id)initWithArray:(id)arg0 ;
-(id)structuredReport;
-(void)finalizeComputation;
-(void)prepareForComputation;
-(void)visitRecordAcceptedCandidate:(id)arg0 ;
-(void)visitRecordAutocorrections:(id)arg0 ;
-(void)visitRecordCandidateRejected:(id)arg0 ;
-(void)visitRecordCandidateResultSet:(id)arg0 ;
-(void)visitRecordHitTest:(id)arg0 ;
-(void)visitRecordKeyboardInput:(id)arg0 ;
-(void)visitRecordLastAcceptedCandidateCorrected:(id)arg0 ;
-(void)visitRecordPhraseBoundaryAdjustment:(id)arg0 ;
-(void)visitRecordRefinements:(id)arg0 ;
-(void)visitRecordReplacements:(id)arg0 ;
-(void)visitRecordSetOriginalInput:(id)arg0 ;
-(void)visitRecordSkipHitTest:(id)arg0 ;
-(void)visitRecordSync:(id)arg0 ;
-(void)visitRecordTextAccepted:(id)arg0 ;
-(void)visitTypologyLog:(id)arg0 ;
-(void)visitTypologyRecord:(id)arg0 ;


@end


#endif