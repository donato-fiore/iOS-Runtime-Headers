// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIVIDEOANALYZERDELEGATEADAPTER_H
#define HMIVIDEOANALYZERDELEGATEADAPTER_H

@class HMFObject, NSString;
@protocol HMIVideoAnalyzerDelegate;



@interface HMIVideoAnalyzerDelegateAdapter : HMFObject <HMIVideoAnalyzerDelegate>



@property (copy) id *analyzerDidAnalyzeFragmentWithResult; // ivar: _analyzerDidAnalyzeFragmentWithResult
@property (copy) id *analyzerDidAnalyzeFrameWithResult; // ivar: _analyzerDidAnalyzeFrameWithResult
@property (copy) id *analyzerDidCreateTimelapseFragment; // ivar: _analyzerDidCreateTimelapseFragment
@property (copy) id *analyzerDidFailWithError; // ivar: _analyzerDidFailWithError
@property (copy) id *analyzerDidProduceAnalysisStateUpdate; // ivar: _analyzerDidProduceAnalysisStateUpdate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)analyzer:(id)arg0 didAnalyzeFragmentWithResult:(id)arg1 ;
-(void)analyzer:(id)arg0 didAnalyzeFrameWithResult:(id)arg1 ;
-(void)analyzer:(id)arg0 didCreateTimelapseFragment:(id)arg1 ;
-(void)analyzer:(id)arg0 didFailWithError:(id)arg1 ;
-(void)analyzer:(id)arg0 didProduceAnalysisStateUpdate:(id)arg1 ;


@end


#endif