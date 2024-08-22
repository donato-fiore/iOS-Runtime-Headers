// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IPFEATUREMAILSCANNER_H
#define IPFEATUREMAILSCANNER_H

@class NSMutableArray, NSArray;


#import "IPFeatureScanner.h"
#import "IPFeatureData.h"

@interface IPFeatureMailScanner : IPFeatureScanner

@property (retain) IPFeatureData *dateInSubjectFeatureData; // ivar: _dateInSubjectFeatureData
@property (retain) NSMutableArray *subjectAndBodyDataDetectorsFeatures; // ivar: _subjectAndBodyDataDetectorsFeatures
@property BOOL subjectContainsDate; // ivar: _subjectContainsDate
@property (retain) NSArray *subjectDataDetectorsFeatures; // ivar: _subjectDataDetectorsFeatures
@property (retain) NSMutableArray *subjectKeywordFeatures; // ivar: _subjectKeywordFeatures
@property (retain) NSArray *subjectSentenceFeatures; // ivar: _subjectSentenceFeatures


-(BOOL)isBannedSender:(id)arg0 ;
-(CGFloat)confidenceForEvent:(id)arg0 baseConfidence:(CGFloat)arg1 ;
-(id)emailParticipantNames;
-(id)featuresForTextString:(id)arg0 inMessageUnit:(id)arg1 ;
-(void)doSynchronousScanWithCompletionHandler:(id)arg0 ;
-(void)enrichEvents:(id)arg0 messageUnits:(id)arg1 dateInSubject:(id)arg2 dataFeatures:(id)arg3 ;
-(void)processScanOfMessageUnit:(id)arg0 ;
-(void)resetScanState;
-(void)scanEventsInMessageUnits:(id)arg0 synchronously:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif