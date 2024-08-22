// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMREPETITIONDETECTIONSERVICEUTILS_H
#define CDMREPETITIONDETECTIONSERVICEUTILS_H


#import <Foundation/Foundation.h>


@interface CDMRepetitionDetectionServiceUtils : NSObject



+(id)asrHypothesis2QRUtterance:(id)arg0 ;
+(id)asrToken2QRToken:(id)arg0 ;
+(id)buildRDRequestWithPrevTurn:(id)arg0 curTurn:(id)arg1 nluRequestId:(id)arg2 resultCandidateId:(id)arg3 cdmRequestId:(id)arg4 ;


@end


#endif