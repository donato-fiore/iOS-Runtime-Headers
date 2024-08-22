// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNAIVEPOSITIVEANCHORMODELCANDIDATECLASSIFIER_H
#define ATXNAIVEPOSITIVEANCHORMODELCANDIDATECLASSIFIER_H

@class NSString;
@protocol ATXAnchorModelCandidateClassifierProtocol;

#import <Foundation/Foundation.h>

#import "ATXAnchor.h"

@interface ATXNaivePositiveAnchorModelCandidateClassifier : NSObject <ATXAnchorModelCandidateClassifierProtocol>



@property (readonly, nonatomic) ATXAnchor *anchor; // ivar: _anchor
@property (readonly, nonatomic) NSString *candidateId; // ivar: _candidateId
@property (readonly, nonatomic) NSString *candidateType; // ivar: _candidateType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTrained; // ivar: _isTrained
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)classifierType;
-(id)classifyCandidateForAnchorOccurrence:(id)arg0 trainingResult:(id)arg1 ;
-(id)initWithCandidateId:(id)arg0 candidateType:(id)arg1 anchor:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)train;


@end


#endif