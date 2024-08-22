// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TITYPOLOGYSTATISTICBASICCOUNTS_H
#define TITYPOLOGYSTATISTICBASICCOUNTS_H

@class NSMutableArray, NSMutableString;


#import "TITypologyStatisticCurrentAutocorrections.h"

@interface TITypologyStatisticBasicCounts : TITypologyStatisticCurrentAutocorrections

@property (readonly, nonatomic) NSInteger autocorrectionCount; // ivar: _autocorrectionCount
@property (readonly, nonatomic) NSInteger backspaceCount; // ivar: _backspaceCount
@property (readonly, nonatomic) NSInteger backspaceIntoAutocorrectionCount; // ivar: _backspaceIntoAutocorrectionCount
@property (nonatomic) BOOL backspacedIntoAutocorrection; // ivar: _backspacedIntoAutocorrection
@property (readonly, nonatomic) NSInteger characterCount; // ivar: _characterCount
@property (readonly, nonatomic) NSInteger falseBackspaceCount; // ivar: _falseBackspaceCount
@property (readonly, nonatomic) NSInteger falseBackspaceIntoAutocorrectionCount; // ivar: _falseBackspaceIntoAutocorrectionCount
@property (readonly, nonatomic) NSInteger predictedCharacterCount; // ivar: _predictedCharacterCount
@property (readonly, nonatomic) NSInteger predictiveSelectionCount; // ivar: _predictiveSelectionCount
@property (readonly, nonatomic) NSMutableArray *recentAutocorrectionLocations; // ivar: _recentAutocorrectionLocations
@property (readonly, nonatomic) NSMutableString *recentText; // ivar: _recentText
@property (readonly, nonatomic) NSMutableString *recentTextAfterBackspace; // ivar: _recentTextAfterBackspace
@property (readonly, nonatomic) NSMutableString *recentTextBeforeBackspace; // ivar: _recentTextBeforeBackspace
@property (readonly, nonatomic) NSInteger rejectedCandidateCount; // ivar: _rejectedCandidateCount
@property (readonly, nonatomic) NSInteger touchCount; // ivar: _touchCount


-(id)aggregateReport;
-(id)init;
-(id)structuredReport;
-(void)handleTouch:(id)arg0 ;
-(void)updateTextWithAcceptedCandidate:(id)arg0 ;
-(void)visitRecordCandidateRejected:(id)arg0 ;
-(void)visitRecordHitTest:(id)arg0 ;
-(void)visitRecordKeyboardInput:(id)arg0 ;
-(void)visitRecordSkipHitTest:(id)arg0 ;
-(void)visitRecordSync:(id)arg0 ;
-(void)visitRecordTextAccepted:(id)arg0 ;


@end


#endif