// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPFEATURETEXTMESSAGESCANNER_H
#define IPFEATURETEXTMESSAGESCANNER_H

@class NSArray, NSMutableArray;


#import "IPFeatureScanner.h"

@interface IPFeatureTextMessageScanner : IPFeatureScanner

@property (retain) NSArray *contextMessageUnits; // ivar: _contextMessageUnits
@property (retain, nonatomic) NSMutableArray *dataFeaturesExtractedInContextAndMain; // ivar: _dataFeaturesExtractedInContextAndMain
@property (retain) NSMutableArray *detectedEventsInContext; // ivar: _detectedEventsInContext
@property BOOL followProposal; // ivar: _followProposal


-(CGFloat)confidenceForEvent:(id)arg0 baseConfidence:(CGFloat)arg1 ;
-(CGFloat)experimentalConfidenceForEvent:(id)arg0 experimentalBaseConfidence:(CGFloat)arg1 ;
-(NSUInteger)mainSentencePolarityFrom:(id)arg0 ;
-(NSUInteger)mainSentencePolarityFromMessageUnit:(id)arg0 index:(NSUInteger)arg1 ;
-(id)commonComponentsForConfidence;
-(id)dataDetectorsFeaturesForMessageUnit:(id)arg0 context:(id)arg1 ;
-(id)eventSpecificComponentsForConfidence:(id)arg0 ;
-(id)keywordFeaturesForMessageUnit:(id)arg0 ;
-(id)processScanOfMainMessageUnit:(id)arg0 contextMessageUnits:(id)arg1 ;
-(id)sentenceFeaturesForMessageUnit:(id)arg0 ;
-(void)confidenceForEvents:(id)arg0 ;
-(void)doSynchronousScanWithCompletionHandler:(id)arg0 ;
-(void)experimentalConfidenceForEvents:(id)arg0 ;
-(void)resetScanState;
-(void)scanEventsInMessageUnits:(id)arg0 contextMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)scanEventsInMessageUnits:(id)arg0 synchronously:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif