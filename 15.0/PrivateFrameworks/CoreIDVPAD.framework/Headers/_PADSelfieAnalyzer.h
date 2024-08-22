// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PADSELFIEANALYZER_H
#define _PADSELFIEANALYZER_H

@protocol PADSelfieAnalyzer, OS_dispatch_queue, PADAlgorithms;


#import "PADVNSerialRequestsScheduler.h"
#import "PADSelfieAnalyzerRequest.h"
#import "PADSelfieAnalyzerResult.h"

@interface _PADSelfieAnalyzer : PADVNSerialRequestsScheduler <PADSelfieAnalyzer>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<PADAlgorithms> *_algorithms;
    PADSelfieAnalyzerRequest *_request;
    id *_completion;
}


@property (readonly, nonatomic) PADSelfieAnalyzerResult *result; // ivar: _result


-(id)init;
-(id)requestsForFrame:(id)arg0 handler:(id)arg1 ;
-(void)analyzeObservationComposite:(id)arg0 ;
-(void)handleObservationCompositeError:(id)arg0 ;
-(void)processRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif