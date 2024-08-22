// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PIAUTOLOOPANALYSISRESULT_H
#define _PIAUTOLOOPANALYSISRESULT_H

@class NURenderResult, NSString, NSDictionary;
@protocol PIAutoLoopAnalysisResult, NURenderStatistics;



@interface _PIAutoLoopAnalysisResult : NURenderResult <PIAutoLoopAnalysisResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSDictionary *recipe; // ivar: _recipe
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif